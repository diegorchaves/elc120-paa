#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "grafos.h"
#include "pilha.h"

void print_graph(Graph *g)
{
    for(int i = 1; i <= g->n_vertices; i++) {
        printf("%d: ", i);
        for(int j = 0; j < g->degree[i]; j++) {
            printf("%d ", g->edges[i][j]);
        }
        printf("\n");
    }
}

void insert_edge(Graph *g, int x, int y, int directed)
{
    if(g->degree[x] > MAXDEGREE) {
        printf("MAXDEGREE ja alcancado, impossivel inserir edge.\n");
    }
    else {
        g->edges[x][g->degree[x]] = y;
        g->degree[x] += 1;
        if(directed == 0) {
            insert_edge(g, y, x, 1);
        }
        else {
            g->n_edges += 1;
        }
    }
}

void initialize_graph(Graph *g)
{
    g->n_edges = 0;
    g->n_vertices = 0;
    for(int i = 1; i <= MAXV; i++) {
        g->degree[i] = 0;
    }
}

void read_graph(Graph *g, int directed)
{
    int nro_arcos, x, y;
    initialize_graph(g);
    printf("Informe o numero de vertices e arcos, respectivamente:\n");
    scanf("%d %d", &g->n_vertices, &nro_arcos);
    for(int i = 1; i <= nro_arcos; i++) {
        printf("Informe os valores dos nos do arco:\n");
        scanf("%d %d", &x, &y);
        insert_edge(g, x, y, directed);
    }
}

void dfs(Graph *g, Stack *stack, int start, int *visitado)
{
    int i, maiorGrau = 0;
    push(stack, start);
    while(!stackIsEmpty(stack)) {
        int v = pop(stack);
        if(!visitado[v]) {
            visitado[v] = 1;
            //printf("Visitando %d\n", v);
            for(i = 0; i < g->degree[v]; i++) {
                int adj = g->edges[v][i];
                if(!visitado[adj]) {
                    push(stack, adj);
                }
            }
            printf("O grau de %d eh %d\n", v, i);
            if(i > maiorGrau) {
                maiorGrau = i;
            }
        }
    }
    printf("O grau maximo do grafo eh %d\n", maiorGrau);
}

int main()
{
    Graph *g = (Graph*)malloc(sizeof(*g));
    Stack *stack = stackInit();
    
    assert(g != NULL);
    read_graph(g, 0);

    int visitado[g->n_vertices + 1];
    for(int i = 1; i <= g->n_vertices; i++) {
        visitado[i] = 0;
    }

    print_graph(g);

    dfs(g, stack, 1, visitado);

    return 0;
}
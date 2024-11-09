#define MAXV 100
#define MAXDEGREE 50

typedef struct graph
{
    int edges[MAXV+1][MAXDEGREE];
    int degree[MAXV+1];
    int n_vertices;
    int n_edges;
} Graph;

void read_graph(Graph *g, int directed);

void initialize_graph(Graph *g);

void insert_edge(Graph *g, int x, int y, int directed);

void print_graph(Graph *g);
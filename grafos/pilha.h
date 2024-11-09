typedef struct list
{
    int info;
    struct list *next;
} List;

typedef struct stack
{
    List *head;
} Stack;

Stack *stackInit(void);

void push(Stack *stack, int value);

int pop(Stack *stack);

int stackIsEmpty(Stack *stack);

void freeStack(Stack *stack);

void showStack(Stack *stack);
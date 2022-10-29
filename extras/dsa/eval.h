#define MAX 20

typedef struct 
{
    char a[MAX];
    int top;
}stack;

int isOperator(char a)
{
    switch(a)
    {
        case '+':
        case '-':
        case '%':
        case '*':
        case '/':
        case '^': return 1;
    }
    return 0;
}

void push(stack *s,char x[])
{
    (s->top)++;
    (s->a)[s->top]=x;
}

char* pop(stack *s)
{   
    return(s->a[(s->top)--]); 
}
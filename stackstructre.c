#include<stdio.h>
#include<math.h>
#include<ctype.h>

#define MaxSize 100
typedef struct{
    char stack[MaxSize];
    int top;
}STACK;

void Push(STACK *s,char item){
    if (s->top==MaxSize-1)
    {
        printf("Stack Overflow");
        return;
    }
    s->stack[++s->top]=item;
}
char Pop(STACK *s)
{
    if (s->top<0) {printf("Stack Underflow"); return '#';}
    return (s->stack[s->top--]);
}


int main()
{

        char name[10],ch;
        STACK *s, s1;
        int i=0;


        s=&s1;
        s->top=-1;

        printf("Enter a string ");
        gets(name);
        while(name[i])
            Push(s, name[i++]);
        while(s->top !=-1)
        {
            ch = Pop(s);
            printf("%c ",ch);
        }
        return 0;
}

#include<stdio.h>
#include<stdlib.h>

typedef struct {
    char *Stack;
    int capacity;
    int top;
}STACK;

int IsFull(STACK *s){
    return (s->top >= s->capacity-1);
}

int IsEmpty(STACK *s){
    return (s->top == -1);
}
void Push(STACK *s, char ch){
    if (IsFull(s)){
        printf("Stack FULL !!! Doubling the stack capacity now ....\n");
        s->capacity*=2;
       // printf("Capacity = %d top = %d\n ",s->capacity,s->top);

        s->Stack = (char *) realloc(s->Stack,s->capacity*sizeof(char));
    }
    s->Stack[++s->top] = ch;
    printf("Capacity = %d top = %d\n ",s->capacity,s->top);

}
char Pop(STACK *s){
    if (!IsEmpty(s))
        return (s->Stack[s->top--]);
    else
        return '#';
}
int main(){
    STACK *s, s1;;

    s = &s1;
    s->capacity = 1; //initial capacity
    s->Stack = (char *)calloc(s->capacity, sizeof(char));

    s->top = -1;

    printf("Inserting an element \n");

    Push(s,'A');

    printf("Inserting an element \n");

    Push(s,'B');
    printf("Inserting an element \n");

    Push(s,'C');
    printf("Inserting an element \n");

    Push(s,'D');
    Push(s,'E');

    //printf("%c",Pop(s));
    printf("%c",Pop(s));




}

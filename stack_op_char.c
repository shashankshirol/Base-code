#include <stdio.h>

#define MAX = 100

typedef struct{
	char stack[MAX];
	int top;
}Stack;

void push(Stack *s, char elem){
	if(s->top != MAX - 1){
		s->top++;
		s->stack[s->top]=elem;
	}
	else
	{
	    printf("Stack Overflow\n");
	}
}

char pop(Stack *s){
	if(isEmpty(s)){
		printf("Stack Underflow\n");
		return 666;
	}
	else{
		return s->stack[s->top--];
	}
}

int isEmpty(Stack s){

	if(s->top == -1) return 1;
	else return 0;


}
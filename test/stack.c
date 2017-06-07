#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void push (int i);
int pop (void);

int *head, *position, stack[SIZE];

void main (void){
	int value;

	head = stack; // receives the top of the stack;
	position = stack; // initializes position;

	do {
		printf("Digite o valor: \n");
		scanf("%d", &value);
		if (value != 0)
			push (value);
		else printf("valor do topo é %d\n", pop());
	}while (value != -1);
}

void push (int i){
	position++;
	if (position == (head+SIZE)) {
		printf("Estouro da pilha\n");
		exit (1);
	}
	*position = i;
}

pop(void) {
	if (position == head) {
		printf("Estouro da pilha\n");
		exit (1);
	}
	position--;
	return * (position+1);
}
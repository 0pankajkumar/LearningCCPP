#define MAXSIZE 10

struct stack{
	int top;
	int capacity;
	int *array;
};

struct stack *createStack();

int isStackEmpty(struct stack *s);

int isStackFull(struct stack *s);

void push(struct stack *s,int data);

int pop(struct stack *s);


typedef struct node {
     char *str;
     struct node *next;
} Node;

typedef struct {
     Node *top;
     int number;  
}  Stack;

// create and return an empty stack
Stack *create_stack();

// push the string "str" into the stack "stack"
void push_stack(Stack *stack, char *str);

// pop off the string at the top of the stack "stack"
// and return the string
char *pop_stack(Stack *stack);

// return the number of strings in the stack
int size_of_stack(Stack *stack);

// check whether the stack is empty
// return 1 if empty and 0 if not
int empty_stack(Stack *stack);
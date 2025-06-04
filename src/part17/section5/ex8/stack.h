struct stack {
	int value;
	struct stack *next;
};

void make_empty(struct stack **rpnStackPtr);
bool is_empty(struct stack *rpnStackPtr);
bool push(struct stack **rpnStackPtr, int ch);
int pop(struct stack **rpnStackPtr);
void stack_underflow(void);
void stack_overflow(void);

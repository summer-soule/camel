#define STACK_SIZE 100

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int ch);
int pop(void);
void stack_underflow(void);
void stack_overflow(void);

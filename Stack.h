
struct StackNode
{
    int data;
    struct StackNode *next;
};

struct StackNode *newNode(int data);
int isEmpty(struct StackNode *root);
void push(struct StackNode **root, int data);
int pop(struct StackNode **root);
int peek(struct StackNode *root);
void deleteStack(struct StackNode **root);
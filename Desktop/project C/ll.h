#ifndef LL
#define LL

typedef struct Node
{
  void *data;
  struct Node *next;
}node;

node * new_node(void *);

typedef struct linked_list
{
  node* head;
}Ll;

void new_linkedList(Ll *);

void add(Ll *,void *);
void addLast(Ll *,void*);
void addAfter(Ll *,void *,int);
int isEmpty(Ll);
int size(Ll);
void* removeFirst(Ll *);
void* removeAt(Ll *,int);
void* removeLast(Ll *);

#endif

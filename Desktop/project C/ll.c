#include<stdio.h>
#include<stdlib.h>
#include"ll.h"

node* new_node(void *d){
  node*n =(node*)malloc(sizeof(node));
  n->data=d;
  n->next=NULL;
  return n;
}


void new_linkedList(Ll*l){
  l->head=NULL;
}

int isEmpty(Ll l){
  return l.head==NULL;
}

int size(Ll l){
  if(isEmpty(l))
    return 0;
  else{
    int size=1;
    node *p=l.head;
    while(p->next!=NULL){
      p=p->next;
      size++;
    }
    return size;
  }
}

void add(Ll*l,void *d){
  node *n=new_node(d);
  if(isEmpty(*l))
    l->head=n;
  else
    {
    n->next=l->head;
    l->head=n;
    }
 }

void addLast(Ll*l,void*d){
node *n=new_node(d);
  if(isEmpty(*l))
    l->head=n;
  else if(!(l->head->next))
    l->head->next=n;
  else{
    node *p=l->head;
    while(p->next!=NULL)
      p=p->next;
    p->next=n;
  }
}

void addAfter(Ll*l,void *d,int x){
  if(isEmpty(*l)||size(*l)<x)
    addLast(l,d);
  else{
    node* p=l->head;
    node* n= new_node(d);
    int i;
    for(i=1;i<x;i++){
      p=p->next;
    }
    n->next=p->next;
    p->next=n;
  }
}

void* removeFirst(Ll*l){
  if(isEmpty(*l))
    return NULL;
  else{
  void *result=l->head->data;
  l->head=l->head->next;
  return result;
  }
}

void* removeAt(Ll*l,int x){
  if(isEmpty(*l))
    return NULL;
  else if(size(*l)<x)
    return removeLast(l);
  else{
    void *result;
    int i;
    node *p=l->head;
    for(i=1;i<x;i++)
      p=p->next;
    result=p->next->data;
    p->next=p->next->next;
    return result;
  }
}

void* removeLast(Ll*l){
  if(isEmpty(*l))
    return NULL;
   
  else if(!(l->head->next)){
    void *result=l->head->data;
    l->head=NULL;
    return result; 
    }
            
  else{
    node*p=l->head;
    void *result;
    while(p->next->next!=NULL)
      p=p->next;
    result=p->next->data;
    p->next=p->next->next;
    return result;
  }
}

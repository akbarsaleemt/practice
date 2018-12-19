//#ifndef HEADER_H
//#define HEADER_H
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node *next_link;
	}linklist_t;
linklist_t *start;
void create_node(linklist_t *,int);
void displaynode(linklist_t *);
linklist_t *recursiveReverseLL(linklist_t *);
linklist_t *lastnode(linklist_t *);
linklist_t *sortincrease(linklist_t *);
linklist_t *merge(linklist_t *, linklist_t *);
//#endif

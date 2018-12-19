#include"header.h"

linklist_t *lastnode(linklist_t *head){
  if(head==NULL||head->next_link==NULL)
    return head;
  head=lastnode(head->next_link);
}

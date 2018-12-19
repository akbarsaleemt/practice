
#include"header.h"
void main()
{
  int data,opt;
   linklist_t *ptr;
  while(1){

    printf("enter 1.ADD NODE\n2.DISPLAY\n3.EXIT\n");
    scanf("%d",&opt);
s
    switch(opt)
    {
      case 1:
        printf("enter data to create node\n");
	scanf("%d",&data);
         create_node(start,data);
        break;
      case 2:
        printf("calling Display linklist \n");
        displaynode(start);
        break;
      case 3:
	free(start);exit(0);
      case 4:ptr=recursiveReverseLL(start);
		displaynode(ptr);break;
      case 5: ptr=lastnode(start);
		printf("%p data is %d nextis %p\n",ptr,ptr->data,ptr->next_link);break;
      default:
        printf("enter correct option\n");
    }
  }
}

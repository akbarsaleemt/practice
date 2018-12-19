#include<stdio.h>
void main()
{
  int num1, num2;
  printf("enter numbers\n");
  scanf("%d%d",&num1,&num2);
  num1=num1+num2;
  num2=num1-num2;
  num1=num1-num2;
  printf("num1=%d \n num2=%d\n",num1,num2);
  printf("swapping again using bitwise operators\n");
  num1=num1^num2;
  num2=num1^num2;
  num1=num1^num2;

  printf("num1=%d \n num2=%d\n",num1,num2);
}

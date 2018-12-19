#include<stdio.h>
#include<stdlib.h>
void funName(int arr_count, int *arr){
    int temp,i,j;
    long int min=0,max=0;
    for(j=0;j<arr_count;j++){
    for(i=0;i<arr_count-1;i++){
      if(arr[i]>arr[i+1]){
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
      }
    }
    }
      for(i=0;i<arr_count;i++)
        printf("%d ",arr[i]);
      printf("\n");
      for(i=0;i<4;i++)
        min=min+arr[i];
      for(i=(arr_count-1-4);i<arr_count;i++)
        max=max+arr[i];
      printf("%ld\t%ld\n",min,max);
    }





  void main()
    {
      int n,cnt=0;
      while(1){
      printf("enter size of array greater than 5\n");
      scanf("%d",&n);
      cnt++;
      if(n>=5)
        break;
      if(cnt==2)
        return;
      }
      int a[n],i;
      for(i=0;i<n;i++){
         printf("enter elements to array\n");
         scanf("%d",&a[i]);
      }
      printf("elements in array\n");
      for(i=0;i<n;i++)
        printf("%d ",a[i]);
      printf("\n");
      funName(n,a);
    }

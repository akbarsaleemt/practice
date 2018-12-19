#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100
int compare(char *,char *);

void main(){
     int i,j,a[100];
     char str[MAX],buf[50];
     printf("enter one string\n");
     fgets(str,MAX,stdin);
     printf("enter search string\n");
     __fpurge(stdin);
     scanf("%s",buf);
     int l1,l2,k=0,ret;
     l1=strlen(str);
     l2=strlen(buf);
     char *ch,c[l2];
     int count=0;
     ch=(char *)malloc(l2*sizeof(char));
     printf("l1=%d\n l2=%d\n",l1,l2);
     if(l1>l2){
      
         for(k=0;k<(l1-l2);k++){
         for( i=0,j=k;i<l2;i++,j++){
              ch[i]=str[j];
         }
         ch[i]='\0';
       printf("ch=%s\n",ch);       
       ret= compare(ch,buf);
       printf("k=%d and main ch=%s\n",k,ch);
      if(ret==0){
        count++;
        strcpy(c,ch);
        a[count-1]=k;
        printf("a[%d]=%d\n",count-1,a[count-1]);
      }
     }
      
        for(j=a[count-1],i=0;ch[i]!='\0';j++,i++)
          str[j]=c[i];
          
     }
     
     else
       printf("compare string  is not sub string of given string\n");

  printf("after comparing %s\n",str);    free(ch); 
 }

int compare(char *ptr1,char *ptr2){
  int k,j;
      for(int i=0;ptr1[i]!='\0';i++){
        if((ptr1[i]==ptr2[i])||(ptr1[i]-ptr2[i]==32)||(ptr2[i]-ptr1[i]==32));
        else
          return -1;
      }
      int len=strlen(ptr1);
      char b[len];
      for( j=0, k=len-1;k>=0;k--,j++){
        b[j]=ptr1[k];
      }
      b[j]='\0';
      printf("reversed word is %s \n",b);
      strcpy(ptr1,b);
      return 0;
}
        

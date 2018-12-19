#include"header.h"

void compareword(char *ptr)
    {
      	char b[100],ch[]=" ";
        int ret,count=0;
        while(fscanf(fp2,"%s",b)!=EOF){
         ret= comparestring(ptr,b);
         if(ret==0){
	printf("equal ptr=%sis b=%s\n",ptr,b);
           count++; 
         }
	bzero(b,100);
        }
        if(count==0){
          fprintf(fp2,"%s",ptr);
          fprintf(fp2,"%s",ch);
        }
	fseek(fp2,0 ,SEEK_SET);
	//rewind(fp2);
    }

  int comparestring(char *ptr1,char *ptr2){
    int len1,len2;
    len1=strlen(ptr1);
    len2=strlen(ptr2);
    if(len1==len2){
    printf("ptr1=%s ptr2=%s\n",ptr1,ptr2);
      for(int i=0;i<len1;i++){
        if((ptr1[i]==ptr2[i])||(ptr1[i]-ptr2[i]==32)||(ptr2[i]-ptr1[i]==32))
          continue;
        else
          return 1;
      }
      return 0;
    }
    else
	return 1;
  }
      
	


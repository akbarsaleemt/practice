#include"header.h"
void openfiles()
    {
      fp=fopen("input.txt","r+");
      if(fp==0){
        printf("file open error\n");
        exit(-1);
      }
      fp2=fopen("output.txt","r+");
      if(fp2==0){
        printf("file open error\n");
        exit(-2);
      }
    }

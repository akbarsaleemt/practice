#include"header.h"
  void main()
    {
      char buf[100];
      openfiles();
      while(1){
        if(feof(fp))
          break;
        fscanf(fp,"%s",buf);
        printf("in main buf=%s\n",buf);
        compareword(buf);
        bzero(buf,100);
      }
      fclose(fp);
    }

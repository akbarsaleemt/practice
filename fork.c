#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
void main()
{
	int id,stat;
	id=fork();
	id=fork();
	id=fork();
	id=fork();
	id=fork();
	if(id==0)
	{
		int i=0;
		for(i=0;i<10;i++)
		{
			printf("child\n");

		}
		exit(4);
	}
	wait(&stat);
	printf("parent\n");
}

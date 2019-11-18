#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	printf("call:pid=%d,ppid=%d",getpid(),getppid());
	system("./test");
	printf("after calling\n");
}

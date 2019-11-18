#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int global1=0;
int global2;

int main()
{
	pid_t pid;
	int i=10;
	static k=21;
	pid=fork();
	if(pid<0)
	{
		perror("创建子进程失败");
		exit;
	}
	else if(pid==0)
	{
		printf("child:pid=%d,ppid=%d,address:i=%d,global1=%d\n",getpid(),getppid(),i,global1);
	global1=999;i=12;
	global2=1000;k=19;
	sleep(2);
	printf("child:pid=%d,ppid=%d,address:i=%d,global1=%d\n",getpid(),getppid(),i,global1);
	exit(0);
	}
	else
	{
		printf("parent:pid=%d,ppid=%d,address:i=%d,global2=%d\n",getpid(),getppid(),i,global2);
sleep(10);
printf("global1=%d,global2=%d,i=%d,k=%d\n",global1,global2,i,k);
	}
}

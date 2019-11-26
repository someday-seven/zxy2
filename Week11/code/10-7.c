#include"my.h"
int main(){
	int pid1,pid2;
	FILE *fp;
	fp=fopen("out.txt","w+");
	pid1=fork();
	pid2=fork();
	int a[10]={1,2,3,4,5,6,7,8,9,0};
	int i=0;
	if(pid1<0||pid2<0)
	{
		perror("fork failed!\n");
		return -1;
	}
	else if(pid1==0)
	{
		
		for(i=0;i<10;i++)
		{
			sleep(10);
			if((fp=fopen("out.txt","w+"))>=0)
			{
				fprintf(fp,"pid:%d,",a[i]);
				fclose(fp);
			}	
		}
	}
	else if(pid2==0)
	{
		for(i=0;i<10;i++)
		{
			sleep(10);
			if((fp=fopen("out.txt","w+"))>=0)
			{
				fprintf("%d",a[i]);
				fclose(fp);
			}	
		}
	}
	else 
	{
		
	}
}

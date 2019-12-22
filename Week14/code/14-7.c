#include"my.h"
int fun(void *d)
{
	printf("tid=%p\n",pthread_self());
}

int main()
{
	pthread_t tid;
	int ret;
	ret=pthread_create(&tid)
}

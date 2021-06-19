//--------------------curent time-------------


#include<stdio.h>
#include<time.h>

void main()
{
	char *time_now;
	time_t t =time(NULL);
	time_now=ctime(&t);

	printf("data and date now:%s",time_now);
}

//------------print 1 to n number using recursive---------------

#include<stdio.h>
void Number(int n)
{
  static int count=1;
    printf("%d\n",count);
    count=count+1;

    if(count==n+1)
	    return;

    Number(n);


}


void main()
{
	int n;
	printf("Enter tthe number");
	scanf("%d",&n);
	Number(n);
}


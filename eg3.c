//-------------------decimal to binary using recursive-----------------

#include<stdio.h>
int fun(int n)
{
     if(n==0)
	return;
     else
	     fun(n/2);
             printf("%d\n",n%2);

}
int main()
{
        int n;
	printf("Enter the decimal number");
	scanf("%d",&n);
	fun(n);
	return 0;
}

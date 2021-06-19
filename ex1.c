//-------------------sum is reduce to 1 digit----------

#include<stdio.h>
void main()
{
	int sum=0,num,rem;
	printf("Enter the no:");
	scanf("%d",&num);
	while(num/10 != 0)
	{
		sum=0;
		while(num!=0)
		{

		        rem=num%10;
			sum +=rem;
			num=num/10;
		}
        	num=sum;
	}
	printf("sum=%d",sum);
}

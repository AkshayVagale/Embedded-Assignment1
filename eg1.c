//-----------------print N to 1 using recursive function----------


#include<stdio.h>
void Number(int n)
{
printf("%d\n",n);

  n=n-1;
  
  if(n==1)
	  return;
  Number(n);

}
void main()
{
	int n;
	printf("Enter No");
	scanf("%d",&n);
        Number(n);
}

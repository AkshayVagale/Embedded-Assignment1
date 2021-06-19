//------------------write a program nested if else------------------
//#include<stdio.h>
//void main()
//{
/*	int a=24,b=12;
  /*      int x;
	x=a+b;*/
//	printf("%d",x);*/
//	printf("hello");
//}

//error in above file
//egr.c: In function ‘main’:
//eg1.c:9:14: error: ‘x’ undeclared (first use in this function)
  //  9 |  printf("%d",x);*/
   //   |              ^
//eg1.c:9:14: note: each undeclared identifier is reported only once for each function it appears in
//eg1.c:9:18: error: expected expression before ‘/’ token
  //  9 |  printf("%d",x);*/*/



//----------------------updated code---------------------
#include<stdio.h>
void main()
{
      #if 0 
	int a=10,b=24;
      #if 0 

	int x;
	x=a+b;
        #endif 
       #endif 
	printf("hello");
}

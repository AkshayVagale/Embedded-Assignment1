#include<stdio.h>
#include<conio.h>
int main()
{
       char password[10],c;
       int i=0;
       while( (c=getch()) != '\r')
       {
	       password[i]=c;
	       printf("*");
	       i++;
       }
        password[i]='\0';
        i=0;
      printf("\nPassword entered is %s\n",password);
}

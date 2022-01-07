/*write a programme to enter any number and print it digits.
Date:22/12/2021*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,r;
	clrscr();
	printf("Enter number:");
	scanf("%d",&n);
	while(n>0)
	{
	     r=n%10;
	     printf("\n%d",r);
	     n=n/10;
	}
	getch();
}
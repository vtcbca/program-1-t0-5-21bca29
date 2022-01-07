#include<stdio.h>
#include<conio.h>
void main()
{
    int no,i,c=0;
    clrscr();
    printf("\n Enter value:");
    scanf("%d",&no);
    i=1;
    while(i<no)
    {
	if(no%2==0)
	c=1;
	break;
	i=i+1;
    }
    if(c==1)
	printf("\n number is not prime");
    else
	printf("\n number is prime");
    getch();
}
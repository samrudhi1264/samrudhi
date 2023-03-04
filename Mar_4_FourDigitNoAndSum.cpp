#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum=0,r,x;
	printf("enter your number");
	scanf("%4d",&n);  //initializing n here instead of for 
	x=n;
	for(;n!=0;)
	{
		r=n%10;
		//extract digit from the number 
		sum=sum+r;
		n=n/10; 
	}
	printf("sum of %d is %d",x,sum);
	getch();
}
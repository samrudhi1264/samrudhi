#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1;
	float p,r,n,SI;
	char ch ;
	do
	{
		printf("enter values of p,r,n");
		scanf("%f%f%f",&p,&n,&r);
		SI=(p*r*n)/100;
			printf("\n simple interest is %f",SI);
			printf("do you want to continue if yes press Y");
			fflush(stdin);
			scanf("%c",&ch);
	}
	while(ch=='Y'||ch=='y');
	getch();
}
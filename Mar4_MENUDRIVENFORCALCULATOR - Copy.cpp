#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,res,ch;
	char choice;
	float ans;
	printf("\n enter a no");
	scanf("%d%d",&a,&b);
	do
	{
		printf("enetr from the following \n1.addition\n2.substraction\3.multiplication\n.4division");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:res=a+b;
			printf("addition is %d",res);
			break;
		case 2:res=a-b;
			printf("substraction is %d",res);
			break;
		case 3:res=a*b;
			printf("multiplication is %d",res);
			break;
		case 4 :ans =a/b;
			printf("division is %f",ans);
			break;
		}
		printf("\n if you want to continue press Y");
		fflush(stdin);
		scanf("%c",&choice);
	}
	while(choice=='Y'||choice=='y');
	getch();
}




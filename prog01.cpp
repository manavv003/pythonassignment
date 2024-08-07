#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	
	printf("Enter the value of A:");
	scanf("%d",&a);

	printf("Enter the value of B:");
	scanf("%d",&b);

	printf("Enter the value of C:");
	scanf("%d",&c);


	if (a > b && a > c)
	{
		printf("\n%d is greater than %d and %d",a,b,c);
	}
	else if(b > a && b > c)
	{
		printf("\n%d is greater than %d and %d",b,a,c);
	}
	else
	{
		printf("\n%d is greater than %d and %d",c,a,b);
	}
	getch();
}
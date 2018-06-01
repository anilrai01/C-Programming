#include<stdio.h>
#include<conio.h>
int oddeven(int num);
int main()
{
	int a;
	int x = oddeven(a);
	if(x==0)
	{
		printf("It is Even");
	}else
	{
		printf("It is Odd");
	}
}
int oddeven(int num)
{
	printf("Enter any Number:");
	scanf("%d",&num);
	if (num%2==0)
	{
		return 0;
	}else
	{
		return 1;
	}
}

#include<stdio.h>
#include<conio.h>
int pal(int a);
int main()
{
	int n;
	printf("Enter any Number:");
	scanf("%d",&n);
    pal(n);
	getch();
	return 0;
}
int pal(int a)
{
	int i,rev=0;
	int b = a;
	while(a!=0)
	{
		i=a%10;
		rev=rev*10+i;
		a=a/10;
	}
	if(b==rev)
	{
		return 	printf("It is Pallindrome");;
	}
	else
	{
		return printf("It's not a Pallindrome");
	}
}

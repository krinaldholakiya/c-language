#include<stdio.h>
int main()
{
	int a;
	printf("enter starting value");
	scanf("%d",&a);
	
	while(a>=1)
	{
		printf("%d your project is fully ready.\n",a);
		a=a-1;
	}
}
/*
output:
enter starting value10
10 your project is fully ready.
9 your project is fully ready.
8 your project is fully ready.
7 your project is fully ready.
6 your project is fully ready.
5 your project is fully ready.
4 your project is fully ready.
3 your project is fully ready.
2 your project is fully ready.
1 your project is fully ready.
*/
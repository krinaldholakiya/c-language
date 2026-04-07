#include<stdio.h>
int main()
{
	int a;
	printf("enter starting value:");
	scanf("%d",&a);
	
	int b;
	printf("enter ending value:");
	scanf("%d",&b);
	
	while(a<=b)
	{
		if(a%2!=0)
		{printf("%d hi\n",a);}
		a=a+1;
		
	}
}
/*
output:
enter starting value:1
enter ending value:10
1 hi
3 hi
5 hi
7 hi
9 hi
*/
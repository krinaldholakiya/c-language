#include<stdio.h>
int main()
{
	int a;
	printf("enter starting value");
	scanf("%d",&a);
	
	int b;
	printf("enter ending value");
	scanf("%d",&b);
	
	while(a<=b)
	{
		printf(" %d hi,how are you\n",a);
		a=a+1;
	}
}
/*
output:
enter starting value1
enter ending value5
 1 hi,how are you
 2 hi,how are you
 3 hi,how are you
 4 hi,how are you
 5 hi,how are you
*/
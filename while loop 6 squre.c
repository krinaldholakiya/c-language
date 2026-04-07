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
			printf("%d hello\n",a*a);
		
		a=a+1;
	}
}
/*
output:
enter starting value11
enter ending value21
121 hello
144 hello
169 hello
196 hello
225 hello
256 hello
289 hello
324 hello
361 hello
400 hello
441 hello	
*/
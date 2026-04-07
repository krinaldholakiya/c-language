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
	if(a%2==0)
	{
	printf("%d hello\n",a);
	}
	a=a+1;}}

/*
output:
enter starting value:20
enter ending value:40
20 hello
22 hello
24 hello
26 hello
28 hello
30 hello
32 hello
34 hello
36 hello
38 hello
40 hello
*/
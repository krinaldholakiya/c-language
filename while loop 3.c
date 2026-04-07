#include<stdio.h>
int main()
{
	int a,b;
	printf("enter starting value\n");
	scanf("%d",&a);
	
	b=-a;
	
	while(b<=a)
	{
		printf("%d hello\n",b);
		b=b+1;
	}
}
/*
output:
enter starting value
5
-5 hello
-4 hello
-3 hello
-2 hello
-1 hello
0 hello
1 hello
2 hello
3 hello
4 hello
5 hello
*/

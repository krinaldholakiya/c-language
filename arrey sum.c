#include<stdio.h>
int main()
{
	printf("A       B       SUM\n");
	printf("---------------------\n");
	int a[5]={10,20,30,40,50};
	int b[5]={90,80,70,60,50};
	
	int i;
	for(i=0;i<5;i++)
    {
		printf("%d",a[i]); printf("\t");printf("%d ",b[i]);printf("\t");
			printf("%d",a[i]+b[i]);printf("\n");
	}
}
/*
output:

A       B       SUM
---------------------
10      90      100
20      80      100
30      70      100
40      60      100
50      50      100

*/
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

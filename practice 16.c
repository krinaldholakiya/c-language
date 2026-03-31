#include<stdio.h>
int main()
{
	float x;
	printf("enter x");
	scanf("%f",&x);
	
	float y;
	printf("enter y");
	scanf("%f",&y);
	
	printf("answer is:%f",(x-y)*(x-y));
}
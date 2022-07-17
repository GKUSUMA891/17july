#include<stdio.h>
int fact( int);
int main()
{
	int n;
	printf("enter a number:\n");
	scanf("%d",&n);
	printf("%d\n",fact(n));
}
int fact(int n)
{
	if(n==0)
		return 1;
	else
		return n*fact(n-1);
}
/*
o/p:
enter a number:
5
120
*/

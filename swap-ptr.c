#include<stdio.h>
void swap(int *,int *);
int main()
{
	int a,b;
	printf("enter a & b values:\n");
	scanf("%d %d",&a,&b);
        swap(&a,&b);
}
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
	 printf("after swapping :%d %d\n ",*a,*b);
}

/*
enter a & b values:
10
20
after swapping :20 10
*/

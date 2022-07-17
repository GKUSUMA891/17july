#include<stdio.h>

int main()
{
	int a[5]={1,2,3,4,5};
	int *p=&a[0];
	printf("value is:%d\n",*p);
	printf("addres of a :%p\n",p);
	p=p+1;
	printf("value :%d\n",*p);
	printf("address of a :%p\n",p);
	return 0;
}

/*
o/p:
value is:1
addres of a :0x7ffc5a3862f0
value :2
address of a :0x7ffc5a3862f4
*/

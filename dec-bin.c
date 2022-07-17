#include<stdio.h>
int convert(int);
int main()
{
	int dec,bin;
	printf("enter a decimal number:\n");
	scanf("%d",&dec);
	bin=convert(dec);
	printf("binary number is :%d\n",bin);
	return 0;
}
int convert(int dec)
{ 
	int res;
	if(dec==0)
		return 0;
	else
	{
		res=dec%2+10*convert(dec/2);
          return res;
	}
}

/*
o/p:
enter a decimal number:
20
binary number is :10100
*/

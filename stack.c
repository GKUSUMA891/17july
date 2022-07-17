#include<stdio.h>
#include<stdlib.h>

#define N 8
int stack[N];
int top=-1;
void push(int ele)
{
	int x;

	if(top==N-1)
		printf("stack is full\n");
	else
	{
		top++;

		stack[top]=ele;
	}
}

void get_min()
{
	int i,min=top;
	if(top==-1)
	{
		printf("Stack is empty\n");
	}
	else
	{
		for(i=0;i<=top;i++)
		{
		if(stack[i]<min)
			min=stack[i];
		}
		printf("minimum element is :%d\n",min);
	}
}

void pop()
{
	int item;
	if(top==-1)
		printf("stack is empty\n");
	else
	{
		item=stack[top];
		top--;
		printf("poped element is :%d\n",item);
	}
	get_min(top);
}



void display()
{
	int i;
	for(i=top;i>=0;i--)
	{
		printf("pushed element is: %d\n",stack[i]);
	}
}
void main()
  {
  push(7);
  push(33);
  push(5);
  push(10);
  push(3);
  push(100);
  push(25);   
  display();
  pop();
  display();
  pop();
  display();
  
  
  }
  /*
  o/p:
  pushed element is: 25
pushed element is: 100
pushed element is: 3
pushed element is: 10
pushed element is: 5
pushed element is: 33
pushed element is: 7
poped element is :25
minimum element is :3
pushed element is: 100
pushed element is: 3
pushed element is: 10
pushed element is: 5
pushed element is: 33
pushed element is: 7
poped element is :100
minimum element is :3
pushed element is: 3
pushed element is: 10
pushed element is: 5
pushed element is: 33
pushed element is: 7
*/
 

int main()
{
	int a[]={22,10,-10,50,67,6,4};
       int *p,*q;
       p=a;
       q=&a[0]+3;
       printf("%d\n",*p);
       printf("%d,%d,%d\n",(*p)++,(*p)++,*(++p));
       printf("%d\n",*p);
       printf("%d\n",(*p)++);
       printf("%d\n",(*p)++);
       q--;
       printf("%d\n",(*(q+2))++);
       printf("%d\n",*q);
       printf("%d\n",*(p+2)-2);
       printf("%d\n",*(p++ -2)-1);
       return 0;
}

/*
o/p:
22
11,10,10
12
12
13
67
-10
48
32766
*/

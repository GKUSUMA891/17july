#include <stdio.h>

int main()
{

    int a=141;


    if(a&(1<<6))  ///1     
    {
        printf("bit is one\n");
    }

    else
    {
        printf("bit is zero\n");
    }

    if(a&(1<<5))   /// 0
    {
        printf("bit is one\n");
    }

    else
    {
        printf("bit is zero\n");
    }


    int x=a|(1<<5);   ///     173   set a bit
    printf("%d\n",x);


    int y= a&(~(1<<3));  ///  clear a bit 133
    printf("%d\n",y);

    int z=a^(1<<5);   //       Toggle a bit 173
    printf("%d\n",z);


    int w=a>>3;      // Right shift
    printf("%d\n",w);

    int v=a>>4;    //Right shift
    printf("%d\n",v);
    
    int m=a<<4;    //Left shift
    printf("%d\n",m);


    return 0;
}


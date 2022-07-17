

#include <stdio.h>

int main()
{
    int n,i;
    int *ptr;
    printf("enter number of elements:");
    scanf("%d\n",&n);
    //printf("enter the elements:");
    ptr=(int *)calloc(n,sizeof(int));
    if(ptr==NULL)
    {
        printf("memory not allocated.\n");
        
    }
    else
    {
        printf("memory allocated successfully:\n");
        for(i=0;i<n;i++)
        {
            ptr[i]=i+1;
            printf("%d \n",ptr[i]);
        }
        free(ptr);
        printf("memory freed successfully");
    }
    //free(ptr);
    //printf("Hello World");

    return 0;
}

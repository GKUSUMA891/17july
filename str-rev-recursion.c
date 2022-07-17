
void reverse(char *s)
{
    if(*s)
    {
       reverse(s+1);
       printf("%c ",*s);
    }
}

int main()
{
    char s[]="thundersoft";
    reverse(s);
    //printf("Hello World");

    return 0;
}



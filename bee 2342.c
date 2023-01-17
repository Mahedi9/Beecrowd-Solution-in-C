#include<stdio.h>
int main()
{
    int n,x,y,z;
    char a;
    scanf("%d",&n);
    scanf("%d %c %d",&x,&a,&y);
    if(a=='+')
    {
        z=x+y;
        if(z>n)
        {
            printf("OVERFLOW\n");
        }
        else
        {
            printf("OK\n");
        }
    }
    else if(a=='*')
    {
        z=x*y;
        if(z>n)
        {
            printf("OVERFLOW\n");
        }
        else
        {
            printf("OK\n");
        }
    }
    return 0;
}

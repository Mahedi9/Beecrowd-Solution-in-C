#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if(a<b)
    {
        if(b<c)
        {
            if(c<d)
            {
                if(d<e)
                {
                    printf("C\n");
                }
                else
                {
                    printf("N\n");
                }
            }
            else
            {
                printf("N\n");
            }
        }
        else
        {
            printf("N\n");
        }
    }
    else if(a>b)
    {
        if(b>c)
        {
            if(c>d)
            {
                if(d>e)
                {
                    printf("D\n");
                }
                else
                {
                    printf("N\n");
                }
            }
            else
            {
                printf("N\n");
            }
        }
        else
        {
            printf("N\n");
        }
    }
    else
    {
        printf("N\n");
    }


    return 0;
}

#include<stdio.h>
int main()
{
    int z;
    double sum=0,m,x,y,n,l;
    scanf("%d",&z);
    int a[z],b[z];
    for(int i=0; i<z; i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }
    for(int i=0; i<z; i++)
    {
        if(a[i]==1001)
        {
            m=b[i]*1.50;
            sum=sum+m;
        }
        if(a[i]==1002)
        {
            x=b[i]*2.50;
            sum=sum+x;
        }
        if(a[i]==1003)
        {
            y=b[i]*3.50;
            sum=sum+y;
        }
        if(a[i]==1004)
        {
            n=b[i]*4.50;
            sum=sum+n;
        }
        if(a[i]==1005)
        {
            l=b[i]*5.50;
            sum=sum+l;
        }
    }
    printf("%.2lf\n",sum);
    return 0;
}

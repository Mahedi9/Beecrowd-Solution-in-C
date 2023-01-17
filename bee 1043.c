#include<stdio.h>
int main()
{
    double a,b,c, ar,pe;
    scanf("%lf%lf%lf",&a,&b,&c);
    if((a+b)>c&&(b+c)>a&&(a+c)>b)
    {
     pe=a+b+c;
     printf("Perimetro = %.1lf\n",pe);
    }else{
     ar=0.5*(a+b)*c;
     printf("Area = %.1lf\n",ar);
    }


return 0;
}

#include<stdio.h>
int main()
{
    double x,y,z,a,b,c;
    scanf("%lf%lf%lf",&x,&y,&z);
    if(x>=y && x>=z)
    {
        a=x;
        b=y;
        c=z;
    }
    else if(y>=x && y>=z)
    {
        b=x;
        a=y;
        c=z;
    }
    else if(z>=x && z>=y)
    {
        b=x;
        c=y;
        a=z;
    }

    if(a>=(b+c))
    {
        printf("NAO FORMA TRIANGULO\n");
    }else {
    if((a*a)==((b*b)+(c*c)))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    if((a*a)>((b*b)+(c*c)))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if((a*a)<((b*b)+(c*c)))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(a==b&&a==c&&b==c)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    else if(a==b||a==c||b==c)
    {
        printf("TRIANGULO ISOSCELES\n");
    }}

    return 0;
}

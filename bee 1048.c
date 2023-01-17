#include<stdio.h>
int main()
{
    float t,x;
    scanf("%f",&t);
    if(t>=0 && t<=400.00)
    {
        x=t*0.15;
        printf("Novo salario: %0.2f\n",t+x);
        printf("Reajuste ganho: %0.2f\n",x);
        printf("Em percentual: 15 %%\n");
    }
    else if(t>=400.01 && t<=800.00)
    {
        x=t*0.12;
        printf("Novo salario: %0.2f\n",t+x);
        printf("Reajuste ganho: %0.2f\n",x);
        printf("Em percentual: 12 %%\n");
    }
    else if(t>=800.01 && t<=1200.00)
    {
        x=t*0.10;
        printf("Novo salario: %0.2f\n",t+x);
        printf("Reajuste ganho: %0.2f\n",x);
        printf("Em percentual: 10 %%\n");
    }
    else if(t>=1200.01 && t<=2000.00)
    {
        x=t*0.07;
        printf("Novo salario: %0.2f\n",t+x);
        printf("Reajuste ganho: %0.2f\n",x);
        printf("Em percentual: 7 %%\n");
    }
    else if(t> 2000.00)
    {
        x=t*0.04;
        printf("Novo salario: %0.2f\n",t+x);
        printf("Reajuste ganho: %0.2f\n",x);
        printf("Em percentual: 4 %%\n");
    }


    return 0;
}

#include<stdio.h>
int main()
{
    float bs,gs,hra,da;
    printf("Enter basic salary: ");
    scanf("%f",&bs);
    
    if(bs>=50000)
    {
        da=1.1*bs;
        hra=0.2*bs;
    }
    else if(bs>=30000 && bs<=50000)
    {
        da=1*bs;
        hra=0.15*bs;
    }
    else
    {
        da=0.9*bs;
        hra=0.1*bs;
    }
    gs=bs+hra+da;
    printf("Gross salary= %f",gs);
 return 0;  
}

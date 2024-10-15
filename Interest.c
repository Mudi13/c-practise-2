#include<stdio.h>
int main()
{
    float amount,interest;
    printf("Enter amount: ");
    scanf("%f",&amount);
    
    if(amount>=10000)
    {
        interest=0.15*amount;
        printf("interest= %f",interest);
    }
    else if(amount>=7000 && amount<=9999)
    {
        interest=0.12*amount;
        printf("interest= %f",interest);
    }
    else if(amount<7000)
    {
        interest=0.11*amount;
        printf("interest= %f",interest);
    }
 return 0;  
}


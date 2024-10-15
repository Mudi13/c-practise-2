#include<stdio.h>
int main()
{
    float per;
    printf("Enter percentage: ");
    scanf("%f",&per);
    
    if(per>80)
    {
        printf("Grade: A");
    }
    else if(per>=60 && per<=80)
    {
        printf("Grade: B");
    }
    else if(per>=40 && per<=60)
    {
        printf("Grade: C");
    }
    else
    {
        printf("Grade: F");
    }
}


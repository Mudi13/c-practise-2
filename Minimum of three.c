#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter values of a: ");
    scanf("%d",&a);
    printf("Enter values of b: ");
    scanf("%d",&b);
    printf("Enter values of c: ");
    scanf("%d",&c);
    if ((a<b) && (a<c)) 
    {
        printf("A is smallest");
    }
    else if(b<c)
    {
        printf("b is smallest");
    }
 
    else
    {
        printf("C is smallest");
    }
}


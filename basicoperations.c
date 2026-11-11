#include<stdio.h>
int main()
{
    int a,b,sum,difference,product,qoutient;
    printf("enter the the first number:");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
    sum=a+b;
    difference=a-b;
    product=a*b;
    qoutient=a/b;
    printf("ADDITION=%d",sum);
    printf("SUBTRACTION=%d",difference);
    printf("MULTIPLICATION=%d",product); 
    printf("DIVISION=%d",qoutient);
    return 0;

}
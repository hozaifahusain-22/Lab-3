#include<stdio.h>
int main()
{
    int a, b;
     printf("Enter the number:");
     scanf("%d", & a);

     printf("Enter the number:");
     scanf("%d", & b);
     printf("Before swapping : a=%d, b=%d \n",a,b);

     a=a+b;
     b=a-b;
     a=a-b;

     printf("Aftter swapping : a=%d, b=%d \n",a,b);
}
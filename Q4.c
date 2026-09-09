#include<stdio.h>
int main()
{
    float area, base, height;

    printf("Enter the base of triangle :");
    scanf("%f", & base);
    printf("Enter the height of triangle :");
    scanf("%f", & height);

    area=0.5*base*height;

    printf("  Base of triangle is : %.2f\n", base);
    printf("  Height of triangle is : %.2f\n", height);
    printf("  Area of triangle is : %.2f\n", area);
}
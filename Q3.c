#include<stdio.h>
int main()
{
    float kilometers, meters, centimeters;

    printf("\n Enter distance in kilometers : ");
    scanf("%f", &kilometers);

    meters = kilometers * 1000;
    centimeters = meters * 100;

    printf("%.2f km is equal to : \n", kilometers);
    printf("\n%.2f meters \n", meters);
    printf("%.2f centimeter \n", centimeters);

}
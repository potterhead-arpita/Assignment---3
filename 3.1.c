#include<stdio.h>
//function to calculate square of number
float squareOfNumber(float num)
{
    return (num*num);
}
int main()
{
    float number, square;
    printf("Please Enter any number : ");
    scanf("%f", &number);
    square = squareOfNumber(number);
    printf("square of a given number %.2f is  =  %.2f", number, square);
    return 0;
}

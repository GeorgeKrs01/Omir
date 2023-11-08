#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int x = 5;
    int y = 6;

    int sum = x + y;
    int sub = x - y;
    int mult = x * y;
    float division = (float)x / y;
    float incompleteDivision = x % y;
    int incompleteDivision2 = x % y;

    printf("The summasion of x and y is: %d \n", sum);
    printf("------------------------------- \n");
    printf("The subtraction of x and y is: %d \n", sub);
    printf("------------------------------- \n");
    printf("The mult of x and y is: %d \n", mult);
    printf("------------------------------- \n");
    printf("The division of x and y is: %.2f \n", division);
    printf("------------------------------- \n");
    printf("The Incomplete Division of x and y is: %d \n", incompleteDivision);
    printf("------------------------------- \n");
    printf("The Incomplete Division 2 of x and y is: %d \n", incompleteDivision2);
    printf("------------------------------- \n");

    system("Pause");
    return 0;
}
#include <stdio.h>

float calculateAverage(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}

int main()
{
    int num1, num2, num3;
    float average;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    average = calculateAverage(num1, num2, num3);

    printf("Average = %.2f\n", average);

    return 0;
}

// Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>

int main()
{
    int n;
    float sum = 1.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        sum += (float)(2 * i - 1) / (2 * i);
    }
    printf("Approximate sum: %.1f", sum);
    return 0;
}

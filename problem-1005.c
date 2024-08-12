#include <stdio.h>
int main()
{
    float A, B;
    scanf("%f", &A);
    scanf("%f", &B);
    if (A >= 0 && A <= 10 && B >= 0 && B <= 10)
    {
        printf("MEDIA = %.5f\n", ((A * 3.5) + (B * 7.5)) / (3.5 + 7.5));
    }

    return 0;
}
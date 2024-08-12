#include <stdio.h>
int main()
{
    float A, B, C;
    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);
    if (A >= 0 && A <= 10 && B >= 0 && B <= 10 && C >= 0 && C <= 10)
    {
        printf("MEDIA = %.1f\n", ((A * 2) + (B * 3) + (C * 5)) / (2 + 3 + 5));
    }

    return 0;
}
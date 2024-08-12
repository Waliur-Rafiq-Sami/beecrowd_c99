#include <stdio.h>

int main()
{

    int num, hour;
    float salary;
    scanf("%d", &num);
    scanf("%d", &hour);
    scanf("%f", &salary);

    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2f\n", salary * hour);

    return 0;
}
#include <stdio.h>

int main () {
    int n, s;
    scanf("%d", &n);
    scanf("%d", &s);
    float x, salary;
    scanf("%f", &x);
    salary = s * x;
    printf("NUMBER = %d\n", n);
    printf("SALARY = U$ %.2f\n", salary);
    return 0;
}
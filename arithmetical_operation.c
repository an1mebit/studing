#include <stdio.h>

int main (void)
{
    int a,b,c,d,e;
    printf("a = "); scanf("%d", &a);
    printf("b = "); scanf("%d", &b);
    c=a+b;
    printf("Sum = %d", c);
    d=a-b;
    printf("Ded = %d", d);
    e=a*b;
    printf("Mul = %d", e);
    return 0;
}
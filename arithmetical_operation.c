#include <stdio.h>

int main (void)
{
    int a,b,c,d;
    printf("a = "); scanf("%d", &a);
    printf("b = "); scanf("%d", &b);
    c=a+b;
    printf("Sum = %d", c);
    d=a-b;
    printf("Div = %d", d);
    return 0;
}
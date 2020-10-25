#include <stdio.h>

int main (void)
{
    int a,b,c,d,e,f;
    printf("a = "); scanf("%d", &a);
    printf("b = "); scanf("%d", &b);
    c=a+b;
    printf("Sum = %d", c);
    d=a-b;
    printf("Sub = %d", d);
    e=a*b;
    printf("Mul = %d", e);
    f=a/b;
    printf("Div = %d", f);
    return 0;
}
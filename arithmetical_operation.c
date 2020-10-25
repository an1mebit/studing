#include <stdio.h>

void test (int sum, int sub, int mul, float div);

int main (void)
{
    int a,b,c,d,e = 0;
    float f = 0;
    printf("a = "); scanf("%d", &a);
    printf("b = "); scanf("%d", &b);
    c=a+b;
    printf("Sum = %d\n", c);
    d=a-b;
    printf("Sub = %d\n", d);
    e=a*b;
    printf("Mul = %d\n", e);
    f= (float) a / b;
    printf("Div = %.3f\n", f);
    test (c, d, e, f);
    return 0;
}
void test (int sum, int sub, int mul, float div) {
    printf("sum is %d\n", sum);
    printf("substraction is %d\n", sub);
    printf("multiplication is %d\n", mul);
    printf("division is %.3f\n", div);
}  
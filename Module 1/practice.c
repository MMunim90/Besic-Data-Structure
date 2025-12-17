#include<stdio.h>
int main()
{
    int a, b, c, d;

    a=7;
    printf("a = %d\n", a);
    b=a++;
    printf("b = %d\n", b);
    c=++a;
    printf("c = %d\n", c);
    d=a--;
    printf("d = %d\n", d);
    printf("a = %d\n", a);

    // printf("%d %d %d %d", a, b, c, d);
}
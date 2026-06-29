#include <stdio.h>
int main()
{
    int *arr[4];
    int a = 10, b = 12, c = 14, d = 16;

    arr[0] = &a;
    arr[1] = &b;
    arr[2] = &c;
    arr[3] = &d;

    printf("%d\n", *arr[0]);
    printf("%d\n", *arr[1]);
    printf("%d\n", *arr[2]);
    printf("%d\n", *arr[3]);

    return 0;
}

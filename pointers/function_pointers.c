#include <stdio.h>

int square(int n) { return n*n; }
int cube(int n)   { return n*n*n; }

int main()
{
    int (*arr[2])(int n) = {square, cube};

    printf("Square : %d\n", arr[0](5));
    printf("Cube : %d\n",   arr[1](5));

    return 0;
}

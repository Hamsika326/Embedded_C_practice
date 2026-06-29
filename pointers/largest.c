#include <stdio.h>

void largest(int **arr, int size)
{
    int max = *arr[0];
    for(int i = 0; i < size; i++)
    {
        if(*arr[i] > max)
            max = *arr[i];
    }
    printf("The largest value : %d", max);
}

int main()
{
    int a = 2, b = 3, c = 4;
    int *ap = &a, *bp = &b, *cp = &c;

    int *arr[3] = {ap, bp, cp};

    largest(arr, 3);
    return 0;
}

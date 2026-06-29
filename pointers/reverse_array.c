#include <stdio.h>

void reverse(int *arr, int size)
{
    int *start = arr;
    int *end = arr + size - 1;
    int t;

    while(start < end)
    {
        t = *start;
        *start = *end;
        *end = t;
        start++;
        end--;
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    for(int i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    reverse(arr, 5);

    printf("\n");
    for(int i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    return 0;
}

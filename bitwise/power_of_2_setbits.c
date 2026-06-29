#include <stdio.h>
int main()
{
    int n;
    printf("Give a number ");
    scanf("%d",&n);
    if ((n>0) && ((n&(n-1)) == 0))
    {
        printf("\nThe given number is a power of 2.\n");
    }
    else
    {
        printf("\nThe given number is not a power of 2.\n");
    }
    int count = 0;
     while (n!=0)
    {
        n = n&(n-1);
        count ++;
    }
    printf("The number of bits set in the given number is %d\n",count);
    return 0;
}

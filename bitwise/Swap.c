#include <stdio.h>

int main()
{
    int a , b ;
    
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);
    
    printf("Before swap : \n");
    printf("a = %d, b = %d\n",a,b);
    
    a ^= b;
    b ^= a;
    a ^= b;
    
    printf("After swap: \n");
    printf("a = %d, b = %d",a,b);
    
    return 0;
}

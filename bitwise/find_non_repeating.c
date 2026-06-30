#include <stdio.h>

int main()
{
    int arr[] = {4, 3, 4, 6, 3};
    int result = 0;
    
    for(int i = 0 ; i < 5 ; i++)
    {
        result = result ^ arr[i];
    }
    
    printf("The non-repeating value is : %d",result);
    
    return 0;
}

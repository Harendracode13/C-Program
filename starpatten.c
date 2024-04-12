#include <stdio.h>
int main()
{
    int i, a = 5;
    for (i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            printf("*");
        }
    
        printf("\n");
    }
    return 0;
} 
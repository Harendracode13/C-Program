#include<stdio.h>
int main()
{
    int no,j;
    printf("Enter the number for check prime or not");
    scanf("%d",&no);
    for( int j=2;j<no;j++)
    {
        if((no%j)==0)
        {
            printf("given number is not a prime");
            break;
        }
    }
    if(no==j)
    {
        printf("%d is prime",no);
    }
    return 0;
}
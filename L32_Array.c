#include <stdio.h>
/*int fun1(int arry[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("Elecment no %d is %d\n", i + 1, arry[i]);
    }
    return 0;
}
int fun2(int *ptr)
{
    *(ptr + 2) = 78;
    for (int i = 0; i < 4; i++)
    {
        printf("Elecment no %d is %d\n", i + 1, *(ptr + i));
    }
    return 0;
}*/
int fun3(int arr[2][2])
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("Element no %d,%d is %d\n",i,j,arr[i][j]);
        }
    }
    return 0;
}
int main()
{
    int arr[][2] = {{5, 4},
                {78,90}};
   // fun1(arr);
   // fun2(arr);
    //fun2(arr);
     fun3(arr);
    return 0;
}
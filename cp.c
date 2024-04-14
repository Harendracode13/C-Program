#include <stdio.h>
int main()

{
    int a[40], pos, size, value, i;
    printf("how many elecment you want add");
    scanf("%d", &size);
    printf("Enter the element");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
        printf("\n");
    }
    printf("which position you want enter the new number");
    scanf("%d", &pos);

    printf("Which element you want to add");
    scanf("%d", &value);

    for (i = size - 1; i >= pos - 1; i--)
    {
        a[i + 1] = a[i];
    }
        a[pos - 1] = value;
    printf("the final value of array is this");
    for (i = 0; i <= size; i++)
    {
        printf("\n %d", a[i]);
    }
    return 0;
}

#include<stdio.h>
#include<stdio.h>

char printstr(char *dap)
{
     int i=0;
    while(dap !='\0')
    {
        printf("%c",dap[i]);
        i++;
    }
    printf("\n");
    return 0;
}
int main()
{
    char full[90];
    printf("Enter the string :\n");
    gets(full);
    getchar();
    printstr(full);
    printf("Using printf function : %c\n",full);
    printf("using puts function :\n");
    puts(full);
    return 0;
}
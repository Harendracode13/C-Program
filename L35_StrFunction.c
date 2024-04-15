#include <stdio.h>
#include <string.h>

int main()
{
    char p[]=" is a friend of ";
    char all[15],b[12],full[100];
    printf("Enter the fist name :");
    gets(all);
    printf("Enter the second name :");
    gets(b);

    puts(all);
    printf("%s\n",p);
    puts(b);
    strcpy(full,strcat(all,p));
     strcpy(full,strcat(full,b));
    puts(full);

     char name[] = "harendra";
    char surname[] = "Piprotar";
    char full[45];
    //printf("following string is reverse\n");
    puts(name);
   // strlen(name);
    printf("The lenth is name is : %d\n", strlen(name));
    strcpy(full, strcat(name, surname));
    printf("The full is : %s\n", full);
    puts(full);
     return 0;
}
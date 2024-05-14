#include <stdio.h>
#include <string.h>
typedef struct fameli
{
    char name[90];
   
    float weghit;
    float hight;
    int fav_num;
}go;

int main()
{/* Here go is new name of full 
example
structurestruct fameli
{
    char name[90];
    float weghit;
    float hight;
    int fav_num;
}go; */
    go f1,f2,f3,f4;
    strcpy(f1.name , "Rameshbhai");
    f1.weghit = 75;
    f1.hight = 160;
    f1.fav_num = 4;
    strcpy(f2.name , "anjanaben");
    f2.weghit = 50;
    f2.hight = 159;
    f2.fav_num = 6;
    strcpy(f3.name , "priyaben");
    f3.weghit = 40;
    f3.hight = 163;
    f3.fav_num = 22;
    strcpy(f4.name , "rohan");
    f4.weghit = 57;
    f4.hight = 167;
    f4.fav_num = 13;
    printf(" ================================= \n");
    printf("The deatil of fameli member 1 \n");
    printf("Name           : %s \n",   f1.name);
    printf("Weghit         : %.2f \n", f1.weghit);
    printf("Hight          : %.2f \n", f1.hight);
    printf("favorit number : %d \n",   f1.fav_num);
    printf(" ================================= \n");
    printf("The deatil of fameli member 2 \n");
    printf("Name           : %s \n",   f2.name);
    printf("Weghit         : %.2f \n", f2.weghit);
    printf("Hight          : %.2f \n", f2.hight);
    printf("favorit number : %d \n",   f2.fav_num);
    printf(" ================================= \n");
    printf("The deatil of fameli member 3 \n");
    printf("Name           : %s \n",   f3.name);
    printf("Weghit         : %.2f \n", f3.weghit);
    printf("Hight          : %.2f \n", f3.hight);
    printf("favorit number : %d \n",   f3.fav_num);
    printf(" ================================= \n");
    printf("The deatil of fameli member 4 \n");
    printf("Name           : %s \n",   f4.name);
    printf("Weghit         : %.2f \n", f4.weghit);
    printf("Hight          : %.2f \n", f4.hight);
    printf("favorit number : %d \n",   f4.fav_num);
    printf(" ================================= \n");
    return 0;
}
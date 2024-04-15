// This proggram for revesce arrey
#include<stdio.h>
void revarr(int arry[])
{ 
    int a,i,temp;
    printf("How many Element you want to Enter\n");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        printf("Enter Element no %d : ",i+1);
        scanf("%d",&arry[i]);
        printf("\n");
    }
    printf("your enter element is shows below \n");
    for(i=0;i<a;i++)
    {
        printf("%d , ",arry[i]);
    }
    printf("\n");
    printf("The revece arry is shows belows \n");
    if(a%2 == 0)
    {
        for(i=0;i<(a/2);i++)
        {
            temp=arry[i];
            arry[i]=arry[a-1-i];
            arry[a-1-i]=temp;
        }
    }
    else
    {
        for(i=0;i<(a+1)/2;i++)
        {
            temp=arry[i];
            arry[i]=arry[a-1-i];
            arry[a-1-i]=temp;
        }
    }
    for(i=0;i<a;i++)
    {
        printf("%d , ",arry[i]);
    }

}
int main()
{
    int arry[59];
    revarr(arry);
    return 0;
}
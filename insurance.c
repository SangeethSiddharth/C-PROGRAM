#include<stdio.h>
int main()
{
    char martialstatus,sex;
    int age;
    printf("Are you married or not(Y/N):");
    scanf("%c",&martialstatus);
    printf("Gender(M/F):");
    scanf("%c",&sex);
    printf("Enter the age:");
    scanf("%d",&age);
    if(martialstatus=='Y')
    {
        printf("The driver is insured");
    }
    else if(martialstatus=='N' && sex=='M' && age>=30)
    {
        printf("The driver is insured");
    }
    else if(martialstatus='N' && sex=='F' && age>=25)
    {
        printf("The driver is insured");
    }
    else
    {
        printf("The driver is not insured");
    }
    return 0;
}
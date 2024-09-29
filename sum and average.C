#include<stdio.h>
#include<conio.h>
void main()
{
int num1,num2,num3,sum;
float avg;
clrscr();
printf("Enter num1 value=");
scanf("%d",&num1);
printf("Enter num2 value=");
scanf("%d",&num2);
printf("Enter num3 value=");
scanf("%d",&num3);
sum=num1+num2+num3;
avg=(float)sum/3;
printf("The average of three numbers=%f",avg);
getch();
}

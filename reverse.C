#include<stdio.h>
#include<conio.h>
void main()
{
int num,reversed=0,remainder;
clrscr();
printf("Enter an integer:");
scanf("%d",&num);
while(num!=0)
{
 remainder=num%10;
 reversed=reversed*10+remainder;
 num=num/10;
}
printf("Reversed number:%d",reversed);
getch();
}
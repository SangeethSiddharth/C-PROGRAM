#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,num,smallest,largest,difference;
clrscr();
printf("Enter the number of elements:");
scanf("%d",&n);
printf("Enter number 1:");
scanf("%d",&num);
smallest=largest=num;
for(i=2;i<=n;i++)
{
 printf("Enter the number:");
 scanf("%d",&num);

 if(num<smallest)
   smallest=num;
 else
   largest=num;
}
printf("Difference between smallest and largest number=%d",largest-smallest);
getch();
}
#include <stdio.h>
#include <conio.h>
void main()
{
int n, first = 0, second = 1, next;
clrscr();
printf("Enter number of terms: ");
scanf("%d", &n);
for (int i = 1; i <= n; i++) 
{
 printf("%d ", first);
 next = first + second;
 first = second;
 second = next;
}
getch();
}

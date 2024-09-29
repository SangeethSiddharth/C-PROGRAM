#include <stdio.h>
#include <conio.h>
void main()
{
float radius, area, circumference,PI=3.14;
clrscr();
printf("Enter the radius of the circle: ");
scanf("%f", &radius);
area = PI * radius * radius;
circumference = 2 * PI * radius;
printf("Area of the circle: %f\n", area);
printf("Circumference of the circle: %f\n", circumference);
getch();
}

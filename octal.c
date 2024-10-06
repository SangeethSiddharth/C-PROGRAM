#include <stdio.h>
int main() 
{
    int number, octal = 0, place = 1;
    printf("Enter a decimal number: ");
    scanf("%d", &number);
    if (number == 0) 
    {
        printf("Octal equivalent: 0\n");
        return 0;
    }
    while (number > 0)
    {
        int remainder = number % 8;  
        octal += remainder * place;   
        number = number / 8;          
        place *= 10;                  
    }
    printf("Octal equivalent: %d\n", octal);
    return 0; 
}

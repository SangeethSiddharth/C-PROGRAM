#include <stdio.h>
int main() 
{
    for (int i = 0; i < 25; i++) 
    {
        for (int j = 0; j < 80; j++) 
        {
            if ((i + j) % 2 == 0) 
            {
                printf("%c", 3); 
            } else 
            {
                printf("%c", 4);
            }
        }
        printf("\n"); 
    }
    return 0;
}
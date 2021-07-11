#include <cs50.h>
#include <stdio.h>

int main(void)
{
    
    int n;
    
    // Asking user for Hieght.
    do
    
    {
        n = get_int("Height:");
    }
    
    // Check if height is more than 1 and less than 8.
    while (n < 1 || n > 8);
    {
        for (int i = 0 ; n > i ; i++)
        {
            // Draw spaces first.
            for (int spaces = (n - 1) - i; spaces > 0; spaces--)
            {
                printf(" ");
            }
            
            // Draw hashes.
            for (int hashes = 0; hashes <= i; hashes++)
            {
                printf("#");
            }
            
            // Prints new line.
            printf("\n");
        }
        
    }
    
}
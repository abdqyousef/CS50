#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{

    float dollars;
    int cents;
    int coins = 0;

    do
    {
        // Asks user to insert cents.
        dollars = get_float("Change Owed:");
    }

    // Check if the inserted number is greater than zero.
    while (dollars <= 0);
    
    // Getting the floating number and round to integer number.
    cents = round(dollars * 100);
    
    // If centes is more than 0, do the following:
    while (cents > 0)
    {

        if (cents >= 25)
        {
            cents = cents - 25;
        }
        else if (cents >= 10)
        {
            cents = cents - 10;
        }

        else if (cents >= 5)
        {
            cents = cents - 5;
        }
        else
        {
            cents--;
        }

        coins++;
    }

    printf("%i\n", coins);
}
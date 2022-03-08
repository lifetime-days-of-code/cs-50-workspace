#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float ammount = get_float("Dollar amount: ");
    int pennies = round(ammount * 100);
    printf("Pennies: %i\n", pennies);
}
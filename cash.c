#include <cs50.h>
#include <stdio.h>
int calculate_quarters(int change);
int calculate_dimes(int change);
int calculate_nickels(int change);
int calculate_pennies(int change);
int main(void)
{
    int change;
    do
    {
       change = get_int("Change Owed: ");
    }
       while (change < 0);
    int quarters = calculate_quarters(change);
    change = change - (quarters * 25);
    int dimes = calculate_dimes(change);
    change = change - (dimes * 10);
    int nickels = calculate_nickels(change);
    change = change - (nickels * 5);
    int pennies = calculate_pennies(change);
    change = change - pennies;
    int coins = quarters + dimes + nickels + pennies;
    printf("%i\n", coins);
}

int calculate_quarters(int change)
{
    // Calculate how many quarters you should give customer
    int quarters = 0;
    while (change >= 25)
    {
        quarters++;
        change = change - 25;
    }
    return quarters;
}
int calculate_dimes(int change)
{
    int dimes = 0;
    while (change >= 10)
    {
        dimes++;
        change = change - 10;
    }
    return dimes;
}
int calculate_nickels(int change)
{
    int nickels = 0;
    while (change >= 5)
    {
        nickels++;
        change = change - 5;
    }
    return nickels;
}
int calculate_pennies(int change)
{
    int pennies = 0;
    while (change >= 1)
    {
        pennies++;
        change = change - 1;
    }
    return pennies;
}

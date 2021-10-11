#include <stdio.h>

int main(void) {
int coinval;
const int quarter = 25, dime = 10, nickel = 5, penny = 1;
int quarters, dimes, nickels, pennies;

printf("Enter your value of coins:");
scanf("%d", &coinval);
quarters = (coinval / quarter);
coinval = coinval - (quarters*quarter);
dimes = (coinval / dime);
coinval = coinval - (dimes*dime);
nickels = (coinval / nickel);
pennies = coinval - (nickels*nickel);
printf("Quarters: %d Dimes: %d Nickels: %d Pennies: %d\n", quarters, dimes, nickels, pennies);

}

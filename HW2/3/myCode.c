#include <stdio.h>

int main(void) {

int integer;
float number;
char character;
printf("Enter a decimal number:");
scanf("%f", &number);
printf("Enter an integer:");
scanf("%d", &integer);
printf("Enter a character:");
scanf("%s", character);
printf(" Decimal: %d, Integer: %f, Character: %d\n", number, integer, character);
}

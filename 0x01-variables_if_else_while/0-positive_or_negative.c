#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/* assigns a new random number to int n everytime
*ececutes and prints it
*Return: Always 0 (Success)
*/
int main(void)
{
README.md int n;

README.md srand(time(0));
README.md n = rand() - RAND_MAX / 2;
if (n > 0)
README.md README.md printf("%d is positive\n", n);
README.md else if (n == 0)
README.md README.md printf("%d is zero\n", n);
README.md else if (n < 0)
README.md README.md printf("%d is negative\n", n);



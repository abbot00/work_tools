#include <stdio.h>
/**
 *main - this program prints the size of various types for the machine its runs on
 *Return: 0
 */
int main(void)
{
char c;
int i;
long int li;
long long int lli;
float f;
printf("The size of a char is: %ld \n", (unsigned long)sizeof(c));
printf("The size of an int is: %ld \n", (unsigned long)sizeof(i));
printf("The size of a long int is: %ld \n", (unsigned long)sizeof(li));
printf("The size of a long long int is: %ld \n", (unsigned long)sizeof(lli));
printf("The size of a float is: %ld \n", (unsigned long)sizeof(f));

return(0);
}

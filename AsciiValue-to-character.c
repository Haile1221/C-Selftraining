#include <stdio.h>
/*
 *main function - converts AScii value to character
 *Return : return  Always 0
 *Description - AsciiValue-to-character
 **/
int main(void)  /* ascii AsciiValue-to-characte */
{
	int n; /* Variable declaration */

	printf("Enter any ASCII value: \n ");
	scanf("%d ", &n);
	printf("The Ascii character is %c \n ", n);

	return (0);
}

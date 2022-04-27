#include <stdio.h>      
int main()
{
	short int a;
	long int b;
	double c;
	long double d;
	unsigned int x;
	unsigned char y;
	signed char ch;
        printf("size of short int = %lu bytes\n", sizeof(a));
        printf("size of long int = %lu bytes\n", sizeof(b));
	printf("size of double = %lu bytes\n", sizeof(c));
        printf("size of long double = %lu bytes\n", sizeof(d));
        printf("size of unsigned int = %lu bytes\n", sizeof(x));
	printf("size of unsigned char = %lu bytes\n", sizeof(y));
        printf("size of signed char = %lu bytes\n", sizeof(ch));
	return 0;
}

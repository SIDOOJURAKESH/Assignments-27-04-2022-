#include <stdio.h>
int main()
{
int n1,n2;
int result;
float result1;
n1 = 10;
n2 =20;
result = n1 + n2;
printf("\nAddition of %d and %d is = %d", n1,n2,result);
result = n1 - n2;
printf("\nSubtraction of %d and %d is = %d", n1,n2,result);
result = n1 * n2;
printf("\nMultiplication of %d and %d is = %d", n1,n2,result);
result1 = (float)n1 / (float)n2;
printf("\nQuotient dividing %d by %d is  = %f", n1,n2,result1);
result = n1 % n2;
printf("\nRemainder dividing %d by %d is  = %d", n1,n2,result);
return 0;
}

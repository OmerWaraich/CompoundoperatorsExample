#include <stdio.h>

void showPrefixAndPostfixOps(){
	int num1, num2;
	printf("\nPrefix and Postfix Examples");
	num1 = 10;
	num2 = num1++; //num2 = 10, and num1 is changed after num1 = 11
	printf("\n In Postfix operators num2 = num1 ++; therfore num2 = %d and num1 = %d \n", num2, num1);
	num1 = 10;
	num2 = ++num1; //num2 = 10, and num1 is changed after num1 = 11
	printf("\n In Prefix operators num2 = ++num1; therfore num2 = %d and num1 = %d \n", num2, num1);
}
int main()
{
printf("Examples of compound operators");
int a = 10;
int b = 2;
a = a + b;
printf( "\n a + b : %d\n",a);
a = 10;
a +=b;
printf( "\n a += b : %d\n",a);
a = 10;
a = a - b;
printf( "\n a - b : %d\n",a);
a = 10;
a -=b;
printf( "\n a -= b : %d\n",a);
a = 10;
a = a * b;
printf( "\n a * b : %d\n",a);
a = 10;
a *=b;
printf( "\n a *= b : %d\n",a);
a = 10;
a = a / b;
printf( "\n a / b : %d\n",a);
a = 10;
a /=b;
printf( "\n a /= b : %d\n",a);
a = 10;
a++;
printf("a++ : %d \n",a);
a = 10;
a--;
printf("a-- :%d \n",a);
// Above give code proofs that compound assignment 
//operators work simlar to normal operators. 
 showPrefixAndPostfixOps();
return 0;
}
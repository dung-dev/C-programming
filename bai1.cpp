#include <stdio.h>
int main ()
{
	int num1,  num2, i;
	printf("nhap num 1 :");
	scanf("%d", &num1);
	printf("nhap num 2 :");
	scanf("%d", &num2); 
	for (i=num1; i<= num2; i++ )
	{
	 if(i%50==0)
	 printf("cac so chia het cho 50 : %d ", i); 
	 } 
	 
 } 

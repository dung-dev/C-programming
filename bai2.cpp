#include<stdio.h>
int main ()
{
	char name;
	 int i;
	 char ans;
	 printf("what' s your name: ");
	 scanf ("%s", &name);
	 for (i=1; i <=100; i++)
	 	printf("\n fall in love%dNo_name\n", i);
	 
	 do
	 {
	 	printf("\nlam ng yeu minh nhe ");
	 	printf(" yes or no: ");
	 	scanf("%s", &ans);
	 }while ( ans != 'y');
	 
	 printf(" yeu hay khong");
	 
	 return 0;
  } 

// simple C Calculator
#include <stdio.h>
int main()
{
	int a,b,c;
	
	printf("Enter the values of A and B\n");
	scanf("%d%d",&a,&b);
	
	c=a+b;
	printf("a+b= %d\n",c);
	c=a-b;
	printf("a-b= %d\n",c);
	c=a*b;
	printf("a*b= %d\n",c);
	c=a/b;
	printf("a/b= %d\n",c);
	c=a%b;
	printf("Reminder is : %d\n",c);
	
	return 0;
}
// simple C Calculator
#include <stdio.h>
int main()
{
	int a,b;
	
	printf("Enter the values of A and B\n");
	scanf("%d%d",&a,&b);
	
    a+=b;
	printf("a+b= %d\n",a);
	a-=b;
	printf("a-b= %d\n",a);
	a*=b;
	printf("a*b= %d\n",a);
	a/=b;
	printf("a/b= %d\n",a);
	a%=b;
	printf("Reminder is : %d\n",a);
	
	return 0;
}
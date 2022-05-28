#include <stdio.h>
#include <stdlib.h>

int main()
{
   	int number,sum,a,b,c,d,e,d1,d2,d3,d4,d5;

	printf("Enter the 5 digit number: ");
	scanf("%d",&number);

	a=number/10;
	d1=number%10;
	b=a/10;
	d2=a%10;
	c=b/10;
	d3=b%10;
	d=c/10;
	d4=c%10;
	e=d/10;
	d5=d%10;

	sum=d1+d2+d3+d4+d5;

	printf("Reverse Order: ");
	printf("Sum:%d",sum);
    return 0;
}

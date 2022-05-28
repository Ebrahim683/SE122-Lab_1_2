#include <stdio.h>
#include <stdlib.h>

int main()
{
   float fahrenheit,centigrade;

	printf("Enter the temperature of city in fahrenheit:");
	scanf("%f",&fahrenheit);

	centigrade=(5.0/9.0)*(fahrenheit-32);

	printf("Temperature is %.2f degree celcius",centigrade);

    return 0;
}

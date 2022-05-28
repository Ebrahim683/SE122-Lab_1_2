#include <stdio.h>
#include <stdlib.h>

int main()
{
   float km,meter,feet,inches,centimeter;

	printf("Enter the distance from Mirpur to Ashulia in km: ");
	scanf("%f",&km);

	meter=km*1000;

	feet=km*3280.8399;

	inches=km*39370.078;

	centimeter=km*100000;

	printf("The distance from Mirpur to Ashulia is %.2f meter:\n",meter);
	printf("The distance from Mirpur to Ashulia is %.2f feet:\n",feet);
	printf("The distance from Mirpur to Ashulia is %.2f inches:\n",inches);
	printf("The distance from Mirpur to Ashulia is %.2f centimeter:\n",centimeter);

    return 0;
}

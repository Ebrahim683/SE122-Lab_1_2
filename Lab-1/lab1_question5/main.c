#include <stdio.h>
#include <stdlib.h>

int main()
{
   double length,breadth,radius,area_rectangle,perimeter_rectangle,area_circle,circumference_circle,pi = 3.1416;
	printf("Enter the length of rectangle:");
	scanf("%lf",&length);

	printf("Enter the breadth of rectangle:");
	scanf("%lf",&breadth);

	printf("Enter the radius of circle:");
	scanf("%lf",&radius);

	area_rectangle=length*breadth;

	perimeter_rectangle=2*(length+breadth);

	area_circle=pi*(radius*radius);

	circumference_circle=2*pi*radius;

	printf("Area of rectangle:%.2lf\n",area_rectangle);

	printf("Perimeter of rectangle:%.2lf\n",perimeter_rectangle);

	printf("Area of circle:%.2lf\n",area_circle);

	printf("Perimeter of circle:%.2lf\n",	circumference_circle);

    return 0;
}

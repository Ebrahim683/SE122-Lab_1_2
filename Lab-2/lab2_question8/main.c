#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base,height,hypotenuse,area,perimeter;

    printf("Enter the base of triangle: ");
    scanf("%d",&base);

    printf("Enter the height of triangle: ");
    scanf("%d",&height);

    printf("Enter the hypotenuse of triangle: ");
    scanf("%d",&hypotenuse);

    area = .05*base*height;
    perimeter = base+height+hypotenuse;

    if(area>perimeter){
        printf("Area is greater than perimeter");
    }else{
		printf("Perimeter is greater than area");
	}

    return 0;
}

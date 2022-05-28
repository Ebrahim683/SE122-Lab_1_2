#include<stdio.h>
int main(){
    int number,d1,d2,d3,d4,d5,sum;

    printf("Please Input the 5 digit value= ");
    scanf("%d", &number);

    d1 = number % 10;
    number = number / 10;
    d2 = number % 10;
    number = number / 10;
    d3 = number % 10;
    number = number / 10;
    d4 = number % 10;
     number = number / 10;
    d5 = number % 10;

    sum = d1 + d5;


    printf("The addition is= %d",sum);

    return 0;
}

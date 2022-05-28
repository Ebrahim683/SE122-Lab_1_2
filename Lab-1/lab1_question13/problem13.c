#include<stdio.h>
int main(){
    int number,d1, d2, d3, d4, d5;
    printf("input five digit number = ");
    scanf("%d", &number);

    d5 = (number % 10)+1;
    number = number / 10;
    d4 = (number % 10)+1;
    number = number / 10;
    d3 = (number % 10)+1;
    number = number / 10;
    d2 = (number % 10)+1;
    number = number / 10;
    d1 = (number % 10)+1;

    printf("number is : %d%d%d%d%d", d1, d2, d3, d4, d5);

    return 0;
}

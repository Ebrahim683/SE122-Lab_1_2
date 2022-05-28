#include <stdio.h>
#include <stdlib.h>

int main(){

    int number,reverse_number = 0,reminder;

    printf("Enter 5 digit number: ");
    scanf("%d",&number);

    while(number!=0){
        reminder = number%10;
        reverse_number = reverse_number*10 + reminder;
        number = number/10;
    }

    printf("Reverse number is %d\n",reverse_number);

    if(number == reverse_number){
        printf("Booth numbers are same");
    }else{
    printf("Booth numbers are not same");
    }

    return 0;
}

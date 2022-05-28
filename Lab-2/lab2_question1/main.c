#include <stdio.h>
#include <stdlib.h>

int main()
{
    double cost,selling,profit,loss;

    printf("Enter cost price: ");
    scanf("%lf",&cost);
    printf("Enter selling price: ");
     scanf("%lf",&selling);

     if(cost>selling){

        loss = cost-selling;
        printf("Loss:%.2lf",loss);

     }
     else if(selling>cost){

     profit = selling-cost;
     printf("Profit: %.2lf",profit);

     }

    return 0;
}

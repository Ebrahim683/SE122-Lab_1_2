#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Arif,Fahmid,Joy;

    printf("Enter Arif's age: ");
    scanf("%d",&Arif);
    printf("Enter Fahmid's age: ");
    scanf("%d",&Fahmid);
    printf("Enter Joy's age: ");
    scanf("%d",&Joy);

    if(Arif<Fahmid && Arif<Joy){
        printf("Arif is youngest");
    }else if(Fahmid<Arif && Fahmid<Joy){
            printf("Fahmid is youngest");
    }else{
            printf("Joy is youngest");
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vectorA[5]={10,5,-1,11,4};
    int vectorB[5]={9,3,9,2,6};
    int vectorC[5]={};
    int i;

    for(i=0;i<5;i++){
        if(vectorA[i]>vectorB[i]){
                vectorC[i]=vectorA[i];
                }else{
                    vectorC[i]=vectorB[i];
                    }
        }

    for(i=0;i<5;i++)
    {
        printf("\nEl vectorC es: %d\n", vectorC[i]);
    }

    return 0;
}

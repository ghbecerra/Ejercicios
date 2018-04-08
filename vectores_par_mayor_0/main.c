#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vA[5]={10,5,-1,11,4};
    int vB[5]={9,3,9,2,6};
    int vC[5]={};
    int i;

    for(i=0;i<5;i++){
        if((vA[i]%2==0)&&(vB[i]%2==0)){
            if(vA[i]>vB[i]){
                vC[i]=vA[i];
                }else{
                    vC[i]=vB[i];
                    }
            }else{
                if(vA[i]%2==0){
                    vC[i]=vA[i];
                    }else{
                        if(vB[i]%2==0){
                            vC[i]=vB[i];
                            }else{
                                vC[i]=0;
                                }
                        }
                }
        }

    for(i=0;i<5;i++){
        printf("\nEl vectorC es: %d\n", vC[i]);
        }

    return 0;
}

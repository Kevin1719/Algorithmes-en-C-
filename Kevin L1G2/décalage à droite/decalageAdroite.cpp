#include <stdio.h>
#include<math.h>
#include<conio.h>

//Decalage ? droite

float A[100];
int i,n,nbrDeDecalage,temp;
int main(){
    printf("Veuillez taper un nombre: ");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("Element %d = ",i);
        scanf("%f",&A[i]);
    }
    i=0;
    while (i<n){
        printf("A[%d] = %3.0f\n",i,A[i]);
        i++;
    }
    printf("Taper le decalage que vous voulez: ");
    scanf("%d",&nbrDeDecalage);
    if(nbrDeDecalage >= 0){
        for(i=n-1;i>0;i--){
            temp=A[i];
            A[i]=A[i-nbrDeDecalage];
            A[i-nbrDeDecalage]=temp;
        }
        for(i=0; i<n; i++){
            printf("A[%d] = %3.0f\n",i,A[i]);
        }
    }
    else if(nbrDeDecalage<0){
        printf("D?calage impossible\n");
    }
    getch();
    return 0;
}
 

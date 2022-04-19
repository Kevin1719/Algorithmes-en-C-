#include<stdio.h>
#include<math.h>
#include<conio.h>
float tab1[100][100],tab2[100][100],tab3[100][100];
int l,c,i,j;
int main(){
    printf("entrer le nombre de ligne: ");
    scanf("%d",&l);
    printf("entrer le nombre de colonne");
    scanf("%d",&c);
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            printf("tab1[%d][%d] = ",i,j);
            scanf("%f",&tab1[i][j]);
        }
    }
    /*for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            printf("tab1[%d][%d] = %3.0f\n",i,j,tab1[i][j]);
        }
    }*/
    printf("entrer le nombre de ligne: ");
    scanf("%d",&l);
    printf("entrer le nombre de colonne");
    scanf("%d",&c);
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            printf("tab2[%d][%d] = ",i,j);
            scanf("%f",&tab2[i][j]);
        }
    }
    /*for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            printf("tab2[%d][%d] = %3.0f\n",i,j,tab2[i][j]);
        }
    }*/
    i = 0;
    while(i<l){
        j = 0;
        while(j<c){
            tab3[i][j] = tab1[i][j] + tab2[i][j];
            printf("tab3[%d][%d] = %3.0f\n",i,j,tab3[i][j]);
            j++;
        }
        i++;
    }
    getch();
    return 0;
}
 

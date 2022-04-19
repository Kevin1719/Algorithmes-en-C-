#include<stdio.h>
#include<math.h>
#include<conio.h>

float tab1[100][100],tab2[100][100],tab3[100][100];
int l,c,s,m,i,j,k;

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

    printf("entrer le nombre de ligne: ");
    scanf("%d",&s);
    printf("entrer le nombre de colonne");
    scanf("%d",&m);
    for(i=0;i<s;i++){
        for(j=0;j<m;j++){
            printf("tab2[%d][%d] = ",i,j);
            scanf("%f",&tab2[i][j]);
        }
    }
    if(c==s){
        for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            tab3[i][j] = 0;
            for(k=0;k<c;k++){
                tab3[i][j] += tab1[i][k]*tab2[k][j];
            }
        }
    }
    printf("Les valeurs de la nouvelle table contenant le produit des deux matrices sont:\n");
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            printf("tab3[%d][%d] = %3.0f\n",i,j,tab3[i][j]);
        }
    }
    }
    else{
        printf("LE NOMBRE DE COLONNE DE LA PREMIERE MATRICE DOIT ETRE EGAL AU NOMBRE DE LIGNE DE LA DEUXIEME MATRICE!!!\n");
    }
    getch();
    return 0;
}

 

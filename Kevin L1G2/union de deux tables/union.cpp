#include<stdio.h>
#include<math.h>
#include<conio.h>

int i,j,taille = 4,newtaille; 
int tab[4] = {2,4,6,8};
int tabb[4] = {3,4,7,8};
int tabfusionner[10];
int main(){
    for(i=0; i<taille; i++){
        tabfusionner[i] = tab[i];
    }
    newtaille = taille*2;
    for(i=0, j=taille; j<newtaille && i<taille; j++,i++){
        tabfusionner[j] = tabb[i];
    }
    printf("La fusion des 2 tables donne:\n");
    for(i=0; i<newtaille; i++){
        printf("tabfusionner[%d] = %d\n",i,tabfusionner[i]);
    }
    getch();
    return 0;
}


 

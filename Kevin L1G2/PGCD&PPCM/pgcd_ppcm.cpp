#include<math.h>
#include <stdio.h>
#include <conio.h>

int main()
{
    int nbr1, nbr2, pgcd,ppcm, i;
  
    printf("Entrez deux entiers\n");
    printf("Entrer le premier entier: ");
    scanf("%d", &nbr1);
    printf("Entrer le second entier: ");
    scanf("%d", &nbr2);
  
    for(i=1; i <= nbr1 && i <= nbr2; ++i)
    {
        if(nbr1%i==0 && nbr2%i==0)
            pgcd = i;
    }
  
    printf("PGCD de %d et %d = %d\n", nbr1, nbr2, pgcd);
    ppcm = (nbr1*nbr2)/pgcd;
    printf("PPCM de %d et %d = %d\n", nbr1, nbr2, ppcm);
    getch();
    return 0;
} 

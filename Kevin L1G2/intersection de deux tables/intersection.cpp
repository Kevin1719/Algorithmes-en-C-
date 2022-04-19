#include<stdio.h>
#include<math.h>
#include<conio.h>
int i,j,taille = 4; 
int tab[4] = {2,4,6,8};
int tabb[4] = {3,4,7,8};
int main()
{
    for(i=0;i<taille;i=i+1)
    {
        for(j=0;j<taille;j=j+1)
        {
            if(tab[i]==tabb[j])
            {
                printf("%d\n",tabb[j]);
            }

        }
    }
    getch();
    return 0;
}

 

#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
    int fibonacci[47];
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    int i,limite;
    printf("Entrer la limite de la suite: ");
    scanf("%d",&limite);
    for(i=2;i<limite;i++)
    {
         fibonacci[i] = fibonacci[i - 2] + fibonacci[i - 1];
         printf("%d ", fibonacci[i]);
    }
    getch();
    return 0;
}


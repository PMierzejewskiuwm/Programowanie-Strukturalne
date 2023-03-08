#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int n,m;
    printf("Podaj liczby n i m. \n");
    scanf("%d%d",&n,&m);
    printf("Wszystkie dodatnie wielokrotnosci to: ");
    for(int i = 1;i<m;i++){
        if((n*i)<m){
            printf("%d\n",n*i);
        }
    }
}

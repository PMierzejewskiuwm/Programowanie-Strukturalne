#include <stdio.h>
#include<math.h>

int main()
{
    int x;
    scanf("%d",&x);
    printf("Wartosc bezwzgledna z liczby %d wynosi ",x);
    if(x>=0){
        printf("%d",x);
    }
    else{
        printf("%d",-x);
    }
    return 0;
}

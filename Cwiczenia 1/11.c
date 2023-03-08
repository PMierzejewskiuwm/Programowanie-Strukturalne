#include <stdio.h>
#include<math.h>

int main()
{
    int x;
    scanf("%d",&x);
    printf("Znak liczby %d wynosi ",x);
    if(x>0){
        x=1;
        printf("%d",x);
    }
    else if(x==0){
        x=0;
        printf("%d",x);
    }
    else{
        x=-1;
        printf("%d",x);
    }
    return 0;
}


#include <stdio.h>
#include<math.h>

int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    printf("Maksimum z liczb %d i %d wynosi ",x,y);
    if(x>y){
        printf("%d",x);
    }
    else{
        printf("%d",y);
    }

    return 0;
}

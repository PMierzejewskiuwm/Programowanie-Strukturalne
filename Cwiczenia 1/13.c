#include <stdio.h>
#include<math.h>

int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    printf("Maksimum z liczb %d,%d i %d wynosi ",x,y,z);
    if(x>=y && x>=z){
        printf("%d",x);
    }
    else if(y>=x && y>=z){
        printf("%d",y);
    }
    else{
        printf("%d",z);
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int i;
    int s=0;
    for(i=1;s+i*i<=1000;i++){
        s=s+i*i;
    }
    printf("%d",s);
    printf("\n%d",i-1);
}

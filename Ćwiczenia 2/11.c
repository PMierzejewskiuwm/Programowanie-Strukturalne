#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int n,m,d;
    scanf("%d%d",&n,&m);
    for(int i = 1;i<=m&&i<=n;i++){
        if(m%i==0 && n%i ==0){
            d=i;
        }
    }
    printf("NWD(%d%d) = %d",n,m,d);
}

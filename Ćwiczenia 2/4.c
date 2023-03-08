#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    for(int i = 1;i<=m;i++){
        if((n*i) > m && (n*i) < k){
            printf("%d\n,",n*i);
        }
    }

}

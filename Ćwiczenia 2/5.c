#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i = 1;i<=m;i++){
        printf("%d\n",n*i);
    }
}

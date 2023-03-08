#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int n,m,temp;
    scanf("%d%d",&n,&m);
    int a=n;
    int b=m;
    while(n!=0){
        temp=n;
        n=m%n;
        m=temp;
    }
    printf("NWD(%d %d) = %d",a,b,m);
}

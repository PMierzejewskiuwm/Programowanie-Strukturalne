#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d",&n);
    int p,d,t,temp;
    int i;
    p=1;
    d=1;
    t=2;
    for(i=1;i<=n;i++){
        p=d;
        d=t;
        t=d+p;
    }
    printf("%d-ty wyraz ciagu Fibonnaciego to: %d",n,p);
}

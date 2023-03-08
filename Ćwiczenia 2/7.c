#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int n;
    int s=1;
    scanf("%d",&n);
    for(int i =2;i<=n;i=i+2){
        s=s*i;
    }
    printf("%d",s);
}

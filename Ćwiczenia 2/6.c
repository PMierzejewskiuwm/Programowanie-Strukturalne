#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int n;
    int s=1;
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        s = s * i;
    }
    printf("Silnia podanej liczby to: %d",s);
}

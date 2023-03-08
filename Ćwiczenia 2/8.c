#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
   int n;
   int s=0;
   scanf("%d",&n);
   for(int i = 1;i<=n;i++){
    s=s+i*i;
   }
   printf("%d",s);

}

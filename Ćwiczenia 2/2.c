#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    float a,b,c,d;
    printf("Wprowadz wspolczynniki rownania kwadratowego: ");
    scanf("%f%f%f",&a,&b,&c);
    printf("Zdefiniowales rownanie kwadratowe");

    if(a==1){
        printf("%f-x^2");
    }
    else if(a<0){
        printf("%fx^2",a);
    }
    if(b==-1){
        printf("%f-x",b);
    }
    else if(b==1){
        printf("%f+x");
    }
    else if(b<0){
        printf("%f*x",b);
    }
    else if(b>0){
        printf("+%fx",b);
    }
    if(c>0){
        printf("+%f",c);
    }
    else if(c<0){
        printf("%f",c);
    }
}

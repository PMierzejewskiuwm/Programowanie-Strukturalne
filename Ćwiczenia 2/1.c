#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    float a,b,c,d;
    printf("Wprowadz wspolczynniki rownania kwadratowego: ");
    scanf("%f%f%f",&a,&b,&c);
    printf("Zdefiniowales rownanie kwadratowe %fx^2 + %fx + %f = 0",a,b,c);
    d=b*b - 4 * a * c;
    if(d>0){
        float x1,x2;
        x1=(-b-sqrt(d))/2*a;
        x2 =(-b+sqrt(d))/2*a;
        printf("\nRozwiazeniem rownania jest x1=%f i x2=%f",x1,x2);
    }
    else if(d==0){
        float x;
        x=-b/2*a;
        printf("\nRozwiazenim rownania jest x rowny %f",x);
    }
    else{
        printf("\n Rownanie nie ma rozwiazan.");
    }
}

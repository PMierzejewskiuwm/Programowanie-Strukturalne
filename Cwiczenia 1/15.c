#include <stdio.h>
#include<math.h>

int main()
{
    int w; //wybor uzytkownika
    printf("Wpisz 1 jesli chcesz obliczyc pole trojkata z podstawy i wysokosci ");
    printf("Wpisz 2 jesli chcesz obliczyc pole trojkata z dlugosci bokow ");

    scanf("%d",&w);
    int a,b,c,h;
    float p,P;
    if(w==1){
        scanf("%d%d",&a,&h);
        P=(a*h)/2.0;
        printf("Pole trojkata o podstawie %d i wysokosci %d wynosi %f",a,h,P);
    }
    else if(w==2){
        scanf("%d%d%d",&a,&b,&c);
        p=(a+b+c) / 2.0;
        P=sqrt(p*(p-a)*(p-b)*(p-c));
        printf("Pole trojkata o bokach %d,%d i %d wynosi %d",a,b,c,P);
            }
            return 0;
}

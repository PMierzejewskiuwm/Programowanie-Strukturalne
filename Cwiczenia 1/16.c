#include <stdio.h>
#include<math.h>
//?? do dokonczenia
int main()
{
    int a,b,c,d,e,f;
    printf("Wczytaj wspolczynniki ukladu ");
    scanf("%d%d%d",&a,&b,&c);
    scanf("%d%d%d",&d,&e,&f);
    printf("Zdefiniowales uklad rownan:\n%dx + %dy = %d\n",a,b,c);
    printf("%dx + %dy = %d",d,e,f);

    int wx,wy,w,x,y;
    w=a*e - b * d;
    wx=c * e - b * f;
    wy=a*f - c * d;
    x=wx/wy;
    y=wy/wx;
    if(w>0){

        printf("\nRozwiazaniem ukladu rownan jest: x rowny %d i y rowny %d",x,y);
    }
    else if(w==0){
        if(wx == 0 && wy==0){
            printf("\nUklad ma nieskonczenie wiele rozwiazan.");
        }
        else{
        printf("\nUklad jest sprzeczny.");
    }




}
return 0;
}

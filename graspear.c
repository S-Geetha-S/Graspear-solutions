
#include <stdio.h>
#include <math.h>
int main(){
    int leg2, wings2, chicken, flesh1,l,w,fl,r;
    float rw,t;
    printf("Required no.of.legs:\n");
    scanf("%d",&l);
    printf("Required no.of.wings:\n");
    scanf("%d",&w);
    printf("Required no.of.flesh:\n");
    scanf("%d",&fl);
    
    leg2=250;
    wings2=250;
    chicken=2000;
    flesh1=1000;
    
    if(l<=2 && l>=0 && w<=2 && w>=0 && fl<=1 && fl>=0){
        printf("Chicken need to cut=1\n");
        t=l*leg2 + w*wings2 + fl*flesh1;
        printf("Total weight of chicken to cut : %f kg\n ",t/1000);
        r=2-l + 2-w + 1-fl;
        if(r>=0){
        printf("Remaining Parts are:\n");
            if((2-l)>0){
                printf("%d Leg is remain\n");
                if((2-w)>0){
                    printf("%d Wings are remain\n");
                if((1-fl)>0){
                    printf("%d Flesh is remain\n");
                }}}
        }
        printf("Remaining parts weight:\n");
        rw=(2-l)*leg2 + (2-w)*wings2 + (1-fl)*flesh1;
        printf("Remaining Weight is: %f kg\n", rw/1000);
    }
}
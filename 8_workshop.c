#include<stdio.h>
void area(float r){
    float res = 3.14*r*r;
    printf("Area of circle: %.2f\n",res);
}
void around(int r){
    float res,pi=3.14;
    res = 2*pi*r;
    printf("Around of circle: %.2f\n",res);
}
void main(){
    printf("This is program IQ Calcualate number\n");
    int radius;
    do
    {
        printf("Pleasee enter radius(>0):");
        scanf("%d",&radius);
    } while (radius<0);
    area(radius);
    around(radius);
}
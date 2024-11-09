#include<stdio.h>

int main(){
    float r;//the radius of a circle
    float perimeter,area;
    printf("enter a decimal numbers:");
    scanf("%f",&r);

    perimeter = 2*3.14*r;
    area = 3.14*r*r;

    //the radius of this circle is ??, so the perimeter is ??, the area is ??
    //keep 2 decimal numbers
    printf("the radius of this circle is %.2f, so the perimeter is %.2f, the area is %.2f\n",r,perimeter,area);

    return 0;
}
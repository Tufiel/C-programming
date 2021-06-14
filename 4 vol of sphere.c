#include<stdio.h>
#include<conio.h>
int main()
{ /*     VOLUME OF SPHERE */
float r,v;
    printf("Enter the radius of sphere:");
    scanf("%f",&r);
    v=(4.0/3.0)*(22.0/7.0)*r*r*r;
    printf("The volume of sphere is:%f",v);
getch();
}

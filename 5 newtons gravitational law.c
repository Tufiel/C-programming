#include<stdio.h>
#include<conio.h>
int main()
{/*                   NEWTONS GRAVITATIONAL LAW         */
    float F,m1,m2,r,G;
    G=6.67*pow(10,-11);
    printf("Enter the mass of first body:");
    scanf("%f",&m1);
    printf("Enter the mass of second body:");
    scanf("%f",&m2);
    printf("Enter the distance between two bodies:");
    scanf("%f",&r);
    F=((G)*(m1*m2))/(r*r);
    printf("The Force of attraction bewtween two bodies is:%lf",F);
getch();
}

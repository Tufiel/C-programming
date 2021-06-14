#include<stdio.h>
#include<conio.h>
int main()
{/*         CIRCUMFRENCE AND AREA OF CIRCLE        */
    float r,c,a;
    printf("Enter the radius of circle:");
    scanf("%f",&r);
 c=2*(22.0/7.0)*r;
 a=(22.0/7.0)*r*r;
    printf("The circumfrence is: %f and the area is:%f ",c,a);
getch();
}

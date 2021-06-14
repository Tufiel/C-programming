#include<stdio.h>
#include<conio.h>
int main()
{/*                   v=u+at                   */
    float v,u,a,t;
    printf("Enter the value of initial speed(u):");
    scanf("%f",&u);
    printf("Enter the value of acceleration(a):");
    scanf("%f",&a);
    printf("Enter the value of time in seconds(t):");
    scanf("%f",&t);
    v=u+(a*t);
    printf("The value of velocity(v) is:%f",v);
getch();
}

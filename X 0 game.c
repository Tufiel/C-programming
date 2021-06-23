#include<stdio.h>

int main()
{
   system("color 6");
    short int i,j,n,c;
    char a[20][50],player1[20],player2[20];
    start:
    printf("\n\n%60s","Welcome to my game");
printf("\n\n1.Play Game\n2.About\n3.Exit\n: ");
scanf("%d",&c);


switch(c)
{

case 1:
         fflush(stdin);
         printf("Ist Players Name:");
         gets(player1);
         fflush(stdin);
         printf("Second Players Name:");
         gets(player2);

    printf("\n%s:X and %s:0\n",player1,player2);
    for(i=0;i<20;i++)
        for(j=0;j<50;j++)
            a[i][j]=' ';

           for(j=0;j<50;j++)
            {
                a[0][j]='_';
                a[19][j]='_';

            }
            for(i=0;i<20;i++)
            {
                 a[i][0]='|';
                 a[i][49]='|';
            }
            for(i=0;i<20;i++)
                {
                    a[i][16]='|';
                    a[i][34]='|';
                }
                for(j=1;j<49;j++)
            {
                a[6][j]='_';
                a[13][j]='_';

            }

            a[3][7]='1';
            a[3][25]='2';
            a[3][40]='3';
            a[10][7]='4';
             a[10][25]='5';
            a[10][40]='6';
             a[16][7]='7';
             a[16][25]='8';
            a[16][40]='9';




         for(i=0;i<20;i++)
         {

            printf("\n\t\t\t\t");
            for(j=0;j<50;j++)
                printf("%c",a[i][j]);
         }
          goto player1;
         if(1==2)
         {
             player1:system("cls");
                  for(i=0;i<20;i++)
         {

            printf("\n\t\t\t\t");
            for(j=0;j<50;j++)
                printf("%c",a[i][j]);
         }
                   retry1:
                  printf("\n%s's Turn:",player1);
                 scanf("%d",&n);
                 if(n==1)
                    a[3][7]='X';

                 if(n==2)
                    a[3][25]='X';

                 if(n==3)
                   a[3][40]='X';

                 if(n==4)
                    a[10][7]='X';

                 if(n==5)
                    a[10][25]='X';

                 if(n==6)
                    a[10][40]='X';

                 if(n==7)
                    a[16][7]='X';

                  if(n==8)
                    a[16][25]='X';

                  if(n==9)
                    a[16][40]='X';

                  if(a[3][7]=='X'&&a[3][25]=='X'&& a[3][40]=='X'|| a[10][7]=='X'&&a[10][25]=='X'&& a[10][40]=='X'|| a[16][7]=='X'&& a[16][25]=='X'&& a[16][40]=='X'||a[3][7]=='X'&&a[10][7]=='X'&&a[16][7]=='X'||a[3][25]=='X'&&a[10][25]=='X'&&a[16][25]=='X'||a[3][40]=='X'&&a[10][40]=='X'&&a[16][40]=='X'||a[3][7]=='X'&&a[10][25]=='X'&&a[16][40]=='X'||a[3][40]=='X'&&a[10][25]=='X'&&a[16][7]=='X')
                   {
                            system("cls");
                           for(i=0;i<20;i++)
                           {

                                 printf("\n\t\t\t\t");
                                for(j=0;j<50;j++)
                                printf("%c",a[i][j]);
                                                                 }

                       printf("\n\n%s wins\npress any key for main menu\n\n",player1);
                       _getch();
                       system("cls");
                       goto start;

                   }



                   if(n!=1&&n!=2&&n!=3&&n!=4&&n!=5&&n!=6&&n!=7&&n!=8&&n!=9)
                  {
                      printf("\nWrong input!\npress any key to continue\n");
                      _getch();
                      goto retry1;
                  }
                 goto player2;
         }

           if(1==2)
         {
             player2:system("cls");
                  for(i=0;i<20;i++)
         {

            printf("\n\t\t\t\t");
            for(j=0;j<50;j++)
                printf("%c",a[i][j]);
         }
                retry2:
                printf("\n%s's Turn:",player2);
                 scanf("%d",&n);
                 if(n==1)
                    a[3][7]='0';

                 if(n==2)
                    a[3][25]='0';

                 if(n==3)
                   a[3][40]='0';

                 if(n==4)
                    a[10][7]='0';

                 if(n==5)
                    a[10][25]='0';

                 if(n==6)
                    a[10][40]='0';

                 if(n==7)
                    a[16][7]='0';

                  if(n==8)
                    a[16][25]='0';

                  if(n==9)
                    a[16][40]='0';

                     if(a[3][7]=='0'&&a[3][25]=='0'&& a[3][40]=='0'|| a[10][7]=='0'&&a[10][25]=='0'&& a[10][40]=='0'|| a[16][7]=='0'&& a[16][25]=='0'&& a[16][40]=='0'||a[3][7]=='0'&&a[10][7]=='0'&&a[16][7]=='0'||a[3][25]=='0'&&a[10][25]=='0'&&a[16][25]=='0'||a[3][40]=='0'&&a[10][40]=='0'&&a[16][40]=='0'||a[3][7]=='0'&&a[10][25]=='0'&&a[16][40]=='0'||a[3][40]=='0'&&a[10][25]=='0'&&a[16][7]=='0')
                   {
                       system("cls");
                           for(i=0;i<20;i++)
                           {

                                 printf("\n\t\t\t\t");
                                for(j=0;j<50;j++)
                                printf("%c",a[i][j]);
                                                                 }

                       printf("\n\n%s wins\npress any key for main menu\n",player2);
                       _getch();
                       system("cls");
                       goto start;

                   }


                  if(n!=1&&n!=2&&n!=3&&n!=4&&n!=5&&n!=6&&n!=7&&n!=8&&n!=9)
                  {
                      printf("\nWrong input!\npress any key to continue\n");
                      _getch();
                      goto retry2;
                  }
                goto  player1;
         }
case 2:


    printf("\nVersion:1.0.0\nLaunch date 26/6/2021 8:30 AM\nDeveloper:Tufiel Gulzar\nContact information:phone number:+916006522041,address:Nillow,Kulgam,Kashmir,India pin code 199231---");
    printf("\nPress any key to continue\n");
    _getch();
    system("cls");
    goto start;




case 3:
    printf("\n%c Thanks for Playing my game %c\n",3,3);
return 0;


default:system("cls");
    printf("\nWrong input!\n");
goto start;

}
}

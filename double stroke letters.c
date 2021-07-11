#include<stdio.h>


void clr(char *p)
{
    extern int h,b;
    int i,j;
     for(i=0;i<h;i++)
    for(j=0;j<b;j++)
    *(p++)=' ';
}

void words(void)
{

    int i,j,q,m;
    extern char c;
    extern int h,b;
    char ar[h][b];





    if(c=='A'||c=='a')
       q=1;
           if(c=='B'||c=='b')
       q=2;
           if(c=='C'||c=='c')
       q=3;
           if(c=='D'||c=='d')
       q=4;
           if(c=='E'||c=='e')
       q=5;
           if(c=='F'||c=='f')
       q=6;
           if(c=='G'||c=='g')
       q=7;
           if(c=='H'||c=='h')
       q=8;
           if(c=='I'||c=='i')
       q=9;
           if(c=='J'||c=='j')
       q=10;
           if(c=='K'||c=='k')
       q=11;
           if(c=='L'||c=='l')
       q=12;
           if(c=='M'||c=='m')
       q=13;
           if(c=='N'||c=='n')
       q=14;
           if(c=='O'||c=='o')
       q=15;
           if(c=='P'||c=='p')
       q=16;
           if(c=='Q'||c=='q')
       q=17;
           if(c=='R'||c=='r')
       q=18;
           if(c=='S'||c=='s')
       q=19;
           if(c=='T'||c=='t')
       q=20;
           if(c=='U'||c=='u')
       q=21;
           if(c=='V'||c=='v')
       q=22;
           if(c=='W'||c=='w')
       q=23;
         if(c=='X'||c=='x')
       q=24;
         if(c=='Y'||c=='y')
       q=25;
         if(c=='Z'||c=='z')
       q=26;



    switch(q)
    {
   case 1:

          clr(&ar);
         for(i=0;i<h;i++)

          {
            for(j=0;j<2;j++)
               ar[i][j]=c;
            for(j=b-2;j<b;j++)
               ar[i][j]=c;
                                    }

         for(i=0;i<2;i++)
            for(j=0;j<b;j++)
               ar[i][j]=c;

         for(i=h/2-1;i<h/2+1;i++)
            for(j=0;j<b;j++)
               ar[i][j]=c;
               break;

   case 2:

      clr(&ar);
      for(i=0;i<h;i++)

          {
            for(j=0;j<2;j++)
               ar[i][j]=c;
            for(j=b-2;j<b;j++)
               ar[i][j]=c;
                                    }
            for(i=0;i<2;i++)
              for(j=0;j<b;j++)
               ar[i][j]=c;

            for(i=h-2;i<h;i++)
              for(j=0;j<b;j++)
               ar[i][j]=c;
               ar[0][b-1]=' ';
               ar[h-1][b-1]=' ';
               ar[(h-1)/2][b-1]=' ';
               ar[(h-1)/2+1][b-1]=' ';
               ar[(h-1)/2-1][b-1]=' ';
            for(i=(h-1)/2;i<(h-1)/2+2;i++)
               for(j=0;j<b-2;j++)
                  ar[i][j]=c;
             break;

   case 3:

          clr(&ar);
          for(i=0;i<h;i++)
            for(j=0;j<2;j++)
          ar[i][j]=c;
          for(i=0;i<2;i++)
            for(j=0;j<b;j++)
            ar[i][j]=c;
          for(i=h-2;i<h;i++)
            for(j=0;j<b;j++)
            ar[i][j]=c;
          for(j=0;j<1;j++)
            {
                ar[0][j]=' ';
                ar[h-1][j]=' ';
            }
            ar[0][b-1]=' ';
            ar[h-1][b-1]=' ';
          for(i=h-3;i<h-1;i++)
            for(j=b-2;j<b;j++)
            ar[i][j]=c;
          for(j=b-2;j<b;j++)
            ar[2][j]=c;
            break;

   case 4:

            clr(&ar);
            for(i=0;i<h;i++)
                    for(j=0;j<2;j++)
                    ar[i][j]=c;
            for(i=0;i<2;i++)
                for(j=0;j<=b;j++)
                ar[i][j]=c;
            for(i=h-2;i<h;i++)
                 for(j=0;j<=b;j++)
                  ar[i][j]=c;
                    for(i=0;i<h;i++)
                    for(j=b-2;j<b;j++)
                    ar[i][j]=c;
                    for(j=b-1;j>b-3;j--)
                    ar[h-1][j]=' ';
                    for(i=0;i<2;i++)
                    ar[i][b-1]=' ';
                  ar[2][b-3]=c;
                   ar[h-3][b-3]=c;
                   ar[h-2][b-1]=' ';
                   ar[0][b-2]=' ';
                   break;

   case 5:

         clr(&ar);
          for(i=0;i<2;i++)
          for(j=0;j<b;j++)
            ar[i][j]=c;
          for(i=0;i<h;i++)
            for(j=0;j<2;j++)
            ar[i][j]=c;
          for(i=h/2;i<=h/2+1;i++)
              for(j=0;j<b;j++)
              ar[i][j]=c;
          for(i=h-2;i<h;i++)
            for(j=0;j<b;j++)
            ar[i][j]=c;
          break;

   case 6:

         clr(&ar);
         for(i=0;i<h;i++)
    for(j=0;j<2;j++)
    ar[i][j]='F';
for(i=0;i<2;i++)
    for(j=0;j<b;j++)
    ar[i][j]='F';
for(i=h/2-1;i<h/2+1;i++)
    for(j=0;j<b;j++)
    ar[i][j]='F';
break;

   case 7:
    clr(&ar);
    for(i=0;i<2;i++)
        for(j=2;j<b-2;j++)
        ar[i][j]=c;
    for(i=2;i<h-2;i++)
        for(j=0;j<2;j++)
        ar[i][j]=c;
    for(i=2;i<4;i++)
        for(j=b-2;j<b;j++)
        ar[i][j]=c;
    ar[1][1]=c;
     ar[1][b-2]=c;
     for(i=h-2;i<h;i++)
     for(j=2;j<b;j++)
        ar[i][j]=c;
        ar[i-1][j-1]=' ';
        for(j=3;j<b;j++)
        ar[h-4][j]=c;
        for(i=h-3;i<h;i++)
        for(j=b-2;j<b;j++)
            ar[i][j]=c;
        ar[h-2][1]=c;
        ar[h-1][b-2]=' ';

break;




case 8:
    clr(&ar);
    for(i=0;i<h;i++)
        for(j=0;j<2;j++)
        ar[i][j]=c;
     for(i=0;i<h;i++)
        for(j=b-2;j<b;j++)
        ar[i][j]=c;
    for(i=h/2;i<h/2+2;i++)
         for(j=0;j<b;j++)
         ar[i][j]=c;
    break;


case 9:
       clr(&ar);
       for(i=0;i<h;i++)
    for(j=b/2-1;j<=b/2;j++)
    ar[i][j]=c;
    break;

case 10:
        clr(&ar);
        for(i=0;i<h-1;i++)
            for(j=b-3;j<b-1;j++)
            ar[i][j]=c;
            ar[i][j-2]=c;
        for(i=0;i<2;i++)
            for(j=b-4;j<b;j++)
            ar[i][j]=c;
        for(i=h-4;i<h-1;i++)
            for(j=0;j<2;j++)
            ar[i][j]=c;
            for(j=1;j<b-3;j++)
                ar[h-2][j]=c;
            for(j=1;j<b-3;j++)
                ar[h-1][j]=c;
        break;

case 11:

        clr(&ar);
        for(i=0;i<h;i++)
            for(j=0;j<2;j++)
            ar[i][j]=c;
            j=0;
        for(i=h/2+1;i>=0;i--)
        {
            ar[i][j]=c;
            j++;
        }
        j=0;
        for(i=h/2-1;i<h;i++)
        {
           ar[i][j]=c;
            j++;
        }
             j=1;
        for(i=h/2+1;i>=0;i--)
        {
            ar[i][j]=c;
            j++;
            if(j==b)
                break;
        }
        j=1;
        for(i=h/2-1;i<h;i++)
        {
           ar[i][j]=c;
            j++;
             if(j==b)
                break;
        }
        break;

case 12:

    clr(&ar);
    for(i=0;i<h;i++)
        for(j=0;j<2;j++)
        ar[i][j]=c;
    for(i=h-2;i<h;i++)
        for(j=0;j<b;j++)
        ar[i][j]=c;
    break;

case 13:
    clr(&ar);
       for(i=0;i<h;i++)
        ar[i][0]=c;
           for(i=0;i<h;i++)
        ar[i][b-1]=c;
        for(i=0;i<2;i++)
            for(j=0;j<b;j++)
            ar[i][j]=c;
        for(i=0;i<h-1;i++)
        for(j=b/2-1;j<=b/2;j++)
        ar[i][j]=c;
        ar[0][0]=' ';
        ar[0][b-1]=' ';
        break;

case 14:
    clr(&ar);
    for(i=0;i<h;i++)
        for(j=0;j<2;j++)
        ar[i][j]=c;

     for(i=0;i<h;i++)
        for(j=b-2;j<b;j++)
        ar[i][j]=c;
        j=2;
for(i=1;i<h;i++)
{
    ar[i][j]=c;
    j++;
    if(ar[i][j]==c)
        break;
}
j=b-2;
for(i=h-1;i<h;i--)
{
    ar[i][j]=c;
    j--;
    if(ar[i][j]==c)
        break;
}
break;

case 15:
    clr(&ar);
    for(i=2;i<h-2;i++)
        for(j=0;j<2;j++)
        ar[i][j]=c;
    for(i=2;i<h-2;i++)
        for(j=b-2;j<b;j++)
        ar[i][j]=c;
for(i=h-2;i<h;i++)
    for(j=2;j<b-2;j++)
    ar[i][j]=c;
for(i=0;i<2;i++)
    for(j=2;j<b-2;j++)
    ar[i][j]=c;
    ar[1][1]=c;
    ar[1][b-2]=c;
 ar[h-2][1]=c;
    ar[h-2][b-2]=c;
break;
case 16:

     clr(&ar);
     for(i=0;i<h;i++)
        for(j=0;j<2;j++)
        ar[i][j]=c;
        for(i=0;i<2;i++)
            for(j=1;j<b/2;j++)
            ar[i][j]=c;
          for(i=h/2;i<h/2+2;i++)
            for(j=1;j<b/2;j++)
            ar[i][j]=c;
            m=1;
            while(j!=i)
            {

             if(b/2-1+m==b)
                break;
            for(i=m;i<h/2+2-m;i++)
                    ar[i][b/2-1+m]=c;
                    m++;
            }

break;

case 17:

     clr(&ar);
    for(i=2;i<h-2;i++)
        for(j=0;j<2;j++)
        ar[i][j]=c;
    for(i=2;i<h-2;i++)
        for(j=b-2;j<b;j++)
        ar[i][j]=c;
for(i=h-2;i<h;i++)
    for(j=2;j<b-2;j++)
    ar[i][j]=c;
for(i=0;i<2;i++)
    for(j=2;j<b-2;j++)
    ar[i][j]=c;
    ar[1][1]=c;
    ar[1][b-2]=c;
 ar[h-2][1]=c;
    ar[h-2][b-2]=c;
    j=2;
    for(i=2;i<h-2;i++)
    {
         if(ar[i][j]==c)
            break;
        ar[i][j]=c;
        j++;

    }
      j=2;
    for(i=3;;i++)
    {
          if(ar[i][j]==c)
            break;
        ar[i][j]=c;
        j++;

    }

break;

case 18:

      clr(&ar);
     for(i=0;i<h;i++)
        for(j=0;j<2;j++)
        ar[i][j]=c;
        for(i=0;i<2;i++)
            for(j=1;j<b/2;j++)
            ar[i][j]=c;
          for(i=h/2;i<h/2+2;i++)
            for(j=1;j<b/2;j++)
            ar[i][j]=c;
            m=1;
            while(j!=i)
            {

                if(b/2-1+m==b)
                    break;
            for(i=m;i<h/2+2-m;i++)
                    ar[i][b/2-1+m]=c;
                    m++;
            }
            j=3;
            for(i=h/2+2;i<h;i++)
            {
                if(ar[i][j]==c)
                    break;
                ar[i][j]=c;
                j++;
            }
             j=4;
            for(i=h/2+2;i<h;i++)
            {
                if(ar[i][j]==c)
                    break;
                ar[i][j]=c;
                j++;
            }

break;

case 19:
    clr(&ar);
    for(i=2;i<h/2-1;i++)
        for(j=0;j<2;j++)
           ar[i][j]=c;
    for(i=h/2+1;i<h-1;i++)
        for(j=b-2;j<b;j++)
            ar[i][j]=c;
    for(i=0;i<2;i++)
        for(j=2;j<b;j++)
            ar[i][j]=c;
    for(i=h-2;i<h;i++)
        for(j=0;j<b/2+2;j++)
            ar[i][j]=c;
            for(i=0;i<3;i++)
                for(j=b-2;j<b;j++)
                ar[i][j]=c;
            ar[0][b-1]=' ';
            for(i=h-1;i>h-4;i--)
                for(j=0;j<2;j++)
                ar[i][j]=c;
            ar[h-1][0]=' ';
            ar[h-9][1]=c;
            ar[h-2][b-1]=' ';
             m=0;
            for(i=2;i<h/2+1;i++)
            {

                for(j=b/2-m;j<b/2+m;j++)
                    ar[i][j]=c;
                m++;
            }
            for(j=0;j<b-3;j++)
                ar[h/2][j]=' ';
            ar[3][2]=c;
            ar[4][1]=c;
break;

case 20:

clr(&ar);

  for(i=0;i<2;i++)
    for(j=0;j<b;j++)
    ar[i][j]=c;
  for(j=b/2-1;j<=b/2;j++)
    for(i=0;i<h;i++)
     ar[i][j]=c;
break;

case 21:
    clr(&ar);
    for(i=0;i<h;i++)
   {

    for(j=0;j<2;j++)
    ar[i][j]=c;
     for(j=b-2;j<b;j++)
       ar[i][j]=c;
}

for(i=h-2;i<h;i++)
   for(j=0;j<b;j++)
    ar[i][j]=c;
    break;

case 22:
    clr(&ar);
    if(b%2==0)
    j=(b-1)/2;
    if(b%2!=0)
        j=(b-1)/2;
    for(i=h-1;j>=0;i--)
    {

        ar[i][j]=c;
        j--;
    }
    if(b%2==0)
    j=(b-1)/2+1;
    if(b%2!=0)
    j=(b-1)/2;
    for(i=h-1;j<b;i--)
    {
        ar[i][j]=c;
        j++;
    }


      if(b%2==0)
    j=(b-1)/2;
    if(b%2!=0)
        j=(b-1)/2;
    for(i=h-2;j>0;i--)
    {

        ar[i][j]=c;
        j--;
    }
    if(b%2==0)
    j=(b-1)/2+1;
    if(b%2!=0)
    j=(b-1)/2;
    for(i=h-2;j<b-1;i--)
    {
        ar[i][j]=c;
        j++;
    }
    break;



case 23:

    clr(&ar);
    for(i=0;i<h;i++)
        for(j=0;j<2;j++)
        ar[i][j]=c;
    for(i=0;i<h;i++)
        for(j=b-2;j<b;j++)
        ar[i][j]=c;
        if(b%2==0)
            m=(b-1)/2+2;
        else
            m=(b-1)/2+1;
     for(i=0;i<h;i++)
        for(j=(b-1)/2;j<m;j++)
        ar[i][j]=c;
     for(i=h-2;i<h;i++)
        for(j=0;j<b;j++)
        ar[i][j]=c;
        ar[h-1][0]=' ';
        ar[h-1][b-1]=' ';

    break;

case 24:
    clr(&ar);
    j=b-1;
for(i=h-1;j>=0;i--)
{
    ar[i][j]=c;
    j--;
}
    j=b-1;
for(i=h-2;j>=0;i--)
{
    ar[i][j]=c;
    j--;
}

    j=0;
for(i=h-1;j<b;i--)
{
    ar[i][j]=c;
    j++;
}
    j=0;
for(i=h-2;j<b;i--)
{
    ar[i][j]=c;
    j++;
}
ar[h-1][b-2]=c;
ar[h-1][1]=c;

break;

case 25:

    clr(&ar);
    j=0;
    for(i=h-1;j<b;i--)
{
    ar[i][j]=c;
    j++;
}

for(i=i+1;i>=0;i--)
    for(j=b-2;j<b;j++)
    ar[i][j]=c;
ar[0][1]=c;
ar[h-1][0]=' ';
    j=0;
for(i=h-2;j<b;i--)
{
    ar[i][j]=c;
    j++;
    if(ar[i][b-1]==c)
        break;
}
j=0;
for(i=0;ar[i][j]!=c;i++)
{
    ar[i][j]=c;
    j++;
}
j=0;
for(i=1;ar[i][j]!=c;i++)
{
    ar[i][j]=c;
    j++;
}
j=0;
for(i=0;ar[i][b-1]!=c;i++)
{
    ar[i][j]=' ';
    j++;
}
j=0;
for(i=1;ar[i][b-1]!=c;i++)
{
    ar[i][j]=' ';
    j++;
}
break;


case 26:

    clr(&ar);
    for(i=h-1;i>h-3;i--)
        for(j=0;j<b;j++)
        ar[i][j]=c;
        j=0;
    for(i=h-2;j<b;i--)
    {
        ar[i][j]=c;
        j++;
    }
    i++;
for(j=(b-1);j>=0;j--)
    ar[i][j]=c;
    j=1;
 for(i=h-2;j<b;i--)
    {
        ar[i][j]=c;
        j++;
    }
    i++;
for(j=(b-1);j>=0;j--)
    ar[i][j]=c;
    break;



 }



printf("\n");
   for(i=0;i<h;i++)
  {
     printf("\n");
      printf(" ");

    for(j=0;j<b;j++)
        printf("%c ",ar[i][j]);
  }



}


  int h,b;
 char c;
int main()

{


system("color 03");
 printf("Enter height of characters:");
 scanf("%d",&h);

 printf("Enter breadth of characters:");
 scanf("%d",&b);
 system("cls");
 printf("\n\n%35sPress esc anytime to exit!\n\n"," ");
 rep:
c=_getch();
if(c==27)
{
    system("cls");
    system("color 5");
    printf("\n\n%35sthanks for using \n%40By Tufiel"," "," ");
    exit(0);
}
words();

goto rep;



    return 0;
}


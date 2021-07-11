#include<stdio.h>
#define height 20
#define width 15

void clr(char *p)
{
    int i,j;
     for(i=0;i<height;i++)
    for(j=0;j<width;j++)
    *(p++)=' ';
}

int main()
{
    int i,j,a=0;
 char tufail[height][width];
clr(tufail);
while(1){
//PRINTING T
clr(tufail);

  for(i=0;i<2;i++)
    for(j=0;j<width;j++)
    tufail[i][j]='T';
  for(j=width/2-1;j<=width/2;j++)
    for(i=0;i<height;i++)
     tufail[i][j]='T';
system("color 0");
 for(i=0;i<height;i++)
  {
     printf("\n");
      printf("%10s"," ");

    for(j=0;j<width;j++)
        printf("%c ",tufail[i][j]);
  }
  delay(1000);
  system("cls");


  //CLEARING ARRAY FOR NEW CHARACTER
clr(tufail);


 //PRINTING U

for(i=0;i<height;i++)
   {

    for(j=0;j<2;j++)
    tufail[i][j]='U';
     for(j=width-2;j<width;j++)
       tufail[i][j]='U';
}

for(i=height-2;i<height;i++)
   for(j=0;j<width;j++)
    tufail[i][j]='U';

system("color 1");

 for(i=0;i<height;i++)
  {
     printf("\n");
      printf("%10s"," ");

    for(j=0;j<width;j++)
        printf("%c ",tufail[i][j]);
  }

delay(1000);
  system("cls");

    //CLEARING ARRAY FOR NEW CHARACTER
clr(tufail);

  //PRINTING F

for(i=0;i<height;i++)
    for(j=0;j<2;j++)
    tufail[i][j]='F';
for(i=0;i<2;i++)
    for(j=0;j<width;j++)
    tufail[i][j]='F';
for(i=height/2-1;i<height/2+1;i++)
    for(j=0;j<width;j++)
    tufail[i][j]='F';
printf("\n\n");
system("color 2");
   for(i=0;i<height;i++)
  {
     printf("\n");
      printf("%10s"," ");

    for(j=0;j<width;j++)
        printf("%c ",tufail[i][j]);
  }

  delay(1000);
  system("cls");

clr(tufail);

system("color 3");

//PEINTING A
for(i=0;i<height;i++)
{
    for(j=0;j<2;j++)
         tufail[i][j]='A';
    for(j=width-2;j<width;j++)
         tufail[i][j]='A';
}
for(i=0;i<2;i++)
for(j=0;j<width;j++)
 tufail[i][j]='A';

for(i=height/2-1;i<height/2+1;i++)
for(j=0;j<width;j++)
 tufail[i][j]='A';

printf("\n\n");
   for(i=0;i<height;i++)
  {
     printf("\n");
      printf("%10s"," ");

    for(j=0;j<width;j++)
        printf("%c ",tufail[i][j]);
  }

  delay(1000);
  system("cls");

clr(tufail);

system("color 4");


//PRINTING I
for(i=0;i<height;i++)
    for(j=width/2-1;j<=width/2;j++)
    tufail[i][j]='I';

printf("\n\n");
   for(i=0;i<height;i++)
  {
     printf("\n");
      printf("%10s"," ");

    for(j=0;j<width;j++)
        printf("%c ",tufail[i][j]);
  }

  delay(1000);
  system("cls");

clr(tufail);

system("color 5");


//PRINTING L

for(i=0;i<height;i++)
for(j=0;j<2;j++)
 tufail[i][j]='L';
for(i=height-2;i<height;i++)
    for(j=0;j<width;j++)
     tufail[i][j]='L';


printf("\n\n");
   for(i=0;i<height;i++)
  {
     printf("\n");
      printf("%10s"," ");

    for(j=0;j<width;j++)
        printf("%c ",tufail[i][j]);
  }


delay(1000);
  system("cls");

system("color 6");

}
    return 0;
}

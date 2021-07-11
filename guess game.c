#include<stdio.h>
#include<stdlib.h>




int main()
{
    int guess,input;
    static int tries=0;
    char ch=1;

  guess=rand()%100;
  printf("\n\n%30sGuess a number:"," ");
  retry:
  scanf("%d",&input);
  tries++;

  if(input>guess)
    {
        printf("%30sLess than it \n:"," ");
    goto retry;
    }
  if(input<guess)
  {
    printf("%30sGreater than it \n:"," ");
    goto retry;
  }
  if(input==guess)
    {
    printf("%30sYou won in %d tries\n\npress any key to play again or esc to exit"," ",tries);
    ch=_getch();
    if(ch==27)
    {
        printf("\n\n%40sTHANKS FOR PLAYING\n\n\n"," ");
        delay(3000);
        return 0;
    }

    system("cls");
    main();
    }


main();

}

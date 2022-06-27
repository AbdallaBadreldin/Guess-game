/* rand example: guess the number */
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <iostream>

int main ()
{
  int iSecret=0, iGuess=0 , iMax=0 , iMin=0 , score=0;

  /* initialize random seed: */
  srand (time(NULL));

  printf("enter hardness level (numbers)\n");
  scanf("%d",&iMax);

  score = iMax;

  /* generate secret number between iMin and iMax: */
  iSecret = rand() % iMax + 1;

  iMin=1;
  do {
    printf ("Guess the number (%d to %d): ",iMin,iMax);
    scanf ("%d",&iGuess);

    if (iSecret<iGuess){
    puts ("The secret number is lower");
    iMax=iGuess;
    --score;
    }

    else if (iSecret>iGuess) {
    puts ("The secret number is higher");
    iMin=iGuess;
    score--;
    }
     } while (iSecret!=iGuess);

  puts ("Congratulations! YOU found the secret number");
  printf("your score is %d " ,score) ;

  scanf("%s");
  return 0;
}

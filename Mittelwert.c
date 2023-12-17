//
/*------------------------------------------------------------------------------
 *                      HTBLA-Leonding / Class: 3ACIF
 *------------------------------------------------------------------------------
 *                      Jan Ritt
 *------------------------------------------------------------------------------
 *  Description:   The program reads in Numbers and calculates the average,
 *                 0 ends the loop, output the Number of inputs (exclusive 0)
 *----------------------------------------------------------------------------*/
#include <stdio.h>  // input/output library    -  printf, scanf, ..
#include <string.h> // string handling library -  strlen, strcpy, strcmp, ..

int main(void)
{
  /*  VARIABLES  */
  int userInput; //  Userinput
  float average;
  int numberOfInputs = 0;

  printf("\n MittelwertRechner ");
  printf("\n===================");

  while (userInput != 0)
  {
    printf("\n Geben Sie eine Ganzzahl ein, oder brechen Sie das Program mit 0 ab.");
    scanf(" %i", &userInput);

    numberOfInputs++;
    average = average + userInput / numberOfInputs;
  }
  if (numberOfInputs == 0)
  {
    printf("\n Es wurden keine Werte eingegeben, es wird kein Mittelwert errechnet. ", numberOfInputs);
  }
  else
  {
    printf("\n Es wurden %i Werte eingegeben ", numberOfInputs);
    printf("\n Der Mittelwert ist %f", average);
  }
  //  END PROGRAM  //
  printf("\n Eingabetaste zum Beenden druecken.");
  while (getchar() != '\n'); //  wait for [Enter]-Key
  getchar();
  return 0;
}
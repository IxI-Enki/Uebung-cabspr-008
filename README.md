# Uebung-cabspr-008 -- Mittelwert

```c
#include <stdio.h>
#include <string.h>

int main(void)
{
  int userInput = 0;
  int counter = 0;
  float average = 0;
  float sum = 0;

  printf("\n   Mittelwert   ");
  printf("\n================");
  printf("\n Geben Sie eine Zahl ein.\n (0 zum Beenden) \n");
  scanf_s(" %d", &userInput);

  if (userInput != 0)
  {
    while (userInput != 0)
    {
      counter++;
      sum = userInput + sum;
      average = sum / (float)counter;
      //      printf("\n Summe: %10.3f", sum);
      //      printf("\n Mittelwert: %10.3f", average);
      printf("\n Geben Sie eine Zahl ein.\n (0 zum Beenden) \n");
      scanf_s(" %d", &userInput);
    }
    if (userInput == 0)
    {
      printf("\n Ihr Mittelwert ist %10.3f", average);
      printf("\n Es wurden %d Werte eingegeben,", counter);
    }
  }
  else
  {
    if (counter == 0)
    {
      printf("\n Es wurden keine Werte eingegeben.");
    }
  }
  return 0;
}
```

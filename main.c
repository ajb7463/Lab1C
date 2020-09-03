// Author: Alexander Barr ajb7463@psu.edu
// Collaborator: Aidan Mayo ajm8132@psu.edu
// Collaborator: Danielle Alamo dca5244@psu.edu
// Collaborator: Shiquan Zhang spz5202@psu.edu

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char *tempstr = readline("Enter temperature in celsius: ");
  double temp = atof(tempstr);
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n", temp,(temp * 1.8) + 32);
  return 0;
}

#include <stdio.h>
#include <stdlib.h> //for strtol
#include <string.h> //for strcmp
#include <math.h> //Root and Power

int main(int argc, char *argv[]) {

  // string to long(*string, **endpointer, base:2-36)
  //Converting array of char pointers to double
  //Reading in first value of arguments
  double result = (double)strtol(argv[1], NULL, 10);

  //Reading in flags
  for (int i = 0; i < argc; i++) {

    //Addition
    if(strcmp(argv[i],"+") == 0) {

        double arg = (double)strtol(argv[i+1], NULL, 10);
        result += arg;
    }
    //Subtraction
    if(strcmp(argv[i], "-") == 0) {

        double arg = (double)strtol(argv[i+1], NULL, 10);
        result -= arg;
    }
    //Multiplication
    if(strcmp(argv[i],"x") == 0) {

        double arg = (double)strtol(argv[i+1], NULL, 10);
        result = result * arg;
    }
    //Division
    if(strcmp(argv[i],"/") == 0) {

        double arg = (double)strtol(argv[i+1], NULL, 10);
        result /= arg;
    }
    //Power
    if(strcmp(argv[i],"power") == 0) {

        double arg = (double)strtol(argv[i+1], NULL, 10);
        result = pow(result, arg);
    }
    //Root
    if(strcmp(argv[i],"root") == 0) {

        double arg = (double)strtol(argv[i+1], NULL, 10);
        result = pow(result, 1./arg);
    }
    //Modulu only works for integers (int) typecasting required
    if(strcmp(argv[i],"%")==0){

        int arg = (int)strtol(argv[i+1], NULL, 10);
        result = (int)result%arg;

    }
  }
  printf("\n\n-------------------------\n");
  printf("\n\t\t%f\n", result);

  return 0;
}

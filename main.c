#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char const *argv[]) {
  int letter;
  char args[100] = "";
  char command[50] = "taschenrechner ";

  for (int i = 0; (letter = getchar()) != '\n'; i++) {
    args[i] = letter;
  }
  strcat(command, args);

  printf("%s\n", command);

  system(command);
  return 0;
}

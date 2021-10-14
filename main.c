#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char const *argv[]) {

  //Initialisierung
  //Dient für den Zeichenweises einlesen
  int letter;
  //String für taschenrechner programm
  char command[50] = "taschenrechner ";
  //Parameter für taschenrechnerprogram
  char args[50] = " ";

  do{
      //Zeichenweises Einlesen vom String
      for (int i = 0; (letter = getchar()) != '\n'; i++) {
        args[i] = letter;
      }

      //Bei Eingabe mit e -> Programabbruch
      if (strcmp(args,"e") == 0){

        printf("-----Programmende!-----\n");
        break;
      }

      //Parameter an Programm kommando anhängen
      strcat(command, args);
      //Programm Taschenrechner mit parameter aufrufen
      system(command);
      //main befehl wird erneut ausgeführt
      system("main");


  }while(1);

  return 0;
}

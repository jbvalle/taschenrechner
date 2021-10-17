/*
  John Bryan Valle
  Programm: taschenrechner

  + = a
  - = s
  * = m
  / = d
  ()^x = pow               //bsp: 2 pow 5 = 2^5
  root_of = xte wurzel von //bsp: 25 root_of 2 = 25^(1/2)
  % = r

  Eingabe: ------------------------------------------------------------
  1. Build:
    ~&: make
  2. Ausführen:
    ~&: ./main
  3. Eingabe:
    ~&: 3 a 3 m 5 pow 5 r 2
  4. Beenden:
    ~&: e
  ---------------------------------------------------------------------*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char const *argv[]) {

  //Initialisierung
  //Dient für den Zeichenweises einlesen
  int letter;

  //String für taschenrechner programm
  char command[50] = "taschenrechner ";
  char main_command[50] = "main";
  char linux_command[] = "./";
  //Parameter für taschenrechnerprogram
  char args[50] = " ";

  do{
      //Zeichenweises Einlesen vom String
      for (int i = 0; (letter = getchar()) != '\n'; i++) {

        args[i] = letter;
      }
      //Bei Eingabe mit e -> Programabbruch
      if (strcmp(args,"e") != 0){

        strcat(command, args);

        //Wenn OS Unix System ./ davorhängen
        #ifdef linux
        strcat(linux_command,command);
        //Programm Taschenrechner mit parameter aufrufen
        system(linux_command);
        //Linux prefix ist ab diesen punkt bei einem Unix System
        //linux_prefix = ./taschenrechner arg1 op arg2
        //Muss daher auf ./ zurückgesetzt werden
        strcpy(linux_command, "./");
        #else
        //Wenn OS kein Unix
        //taschenrechner arg1 op arg2 wird ausgeführt
        system(command);
        #endif

        //Wenn OS Unix System ./ davorhängen
        #ifdef linux
        strcat(linux_command,main_command);
        //main befehl wird erneut ausgeführt
        system(linux_command);
        #else
        //Wenn OS kein Unix
        //main wird ausgeführt
        system(main_command);
        #endif

      }else{

        printf("-----Programmende!-----\n");
        break;
      }

  }while(strcmp(args,"e")==0);


  return 0;
}

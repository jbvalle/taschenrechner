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
        //Programm Taschenrechner mit parameter aufrufen
        system(command);
        //main befehl wird erneut ausgeführt
        system("main");
      }else{

        printf("-----Programmende!-----\n");
        break;
      }

  }while(strcmp(args,"e")==0);


  return 0;
}

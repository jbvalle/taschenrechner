# taschenrechner

1. Build process:

cmd: make
-> generiert main und taschenrechner

2. Eingabemethode:

a ... addition

s ... subtraktion

m ... multiplikation

d ... division

pow ... potenzieren

root_of ... wurzel von ..

r ... Modulu


Beispiel einer Eingabe:
cmd$: make

cmd$: main \n

cmd$: 23 a 7 m 2 r 2   //Gleichbedeutend 23 + 7 * 2 % 2

Special feature:
* Eingabe von unbegrenzt vielen Parameter

Bugs:
* Assoziativregel -> Vorrangregeln, Klammern werden nicht unterstützt.

# Arduino-Uno

## 17/12/2018
Wir haben an einen Arduino Uno eine LED angeschlossen und mit der Hilfe von Lukas Instruktionen diese zum leuchten gebracht.

## 18/12/2018
Wir haben uns im Internet über das "multifunction shield" informiert. Beim Versuch einen kopierten Code hochzuladen ist ein Fehler aufgetreten, welchen wir beheben mussten. Dazu mussten wir mehrere Bibliotheken runterladen. Anhand des kopierten Codes haben wir die bereits vorher auf dem Display abgebildete 0 auf selbigem verschoben.

## 08/01/2019
In dem YouTube-Video <a href="https://www.youtube.com/watch?v=X7T5sfrgprU">Arduino Multi function Shield</a> haben wir uns über das multi-function shield und seine Funktionen informiert. Wir haben die in dem Video verwendete <a href="https://www.mpja.com/download/hackatronics-arduino-multi-function-shield.pdf">PDF-Datei</a> geöffnet und den Code unter dem Punkt: "Writing to the shield’s digit display" kopiert und ausgeführt und anhand dessen den Befehl für die Darstellung eines Wortes auf dem Display ermittelt. Im Anschluss daran haben wir, wie bei einer Leuchtreklame, den Namen "Jonathan" von rechts nach links durchlaufen lassen.
Code:

#include <TimerOne.h>
#include <Wire.h>
#include <MultiFuncShield.h>

void setup() {
  // put your setup code here, to run once:
Timer1.initialize();
MFS.initialize(&Timer1);

MFS.write("    ");
delay(200);
MFS.write("   J");
delay(200);
MFS.write("  JO");
delay(200);
MFS.write(" JON");
delay(200);
MFS.write("JONA");
delay(200);
MFS.write("ONAT");
delay(200);
MFS.write("NATH");
delay(200);
MFS.write("ATHA");
delay(200);
MFS.write("THAN");
delay(200);
MFS.write("HAN ");
delay(200);
MFS.write("AN  ");
delay(200);
MFS.write("N   ");
delay(200);
MFS.write("    ");

}

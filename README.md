# Arduino-Uno

## 17/12/2018
Wir haben an einen Arduino Uno eine LED angeschlossen und mit der Hilfe von Lukas Instruktionen diese zum leuchten gebracht.

## 18/12/2018
Wir haben uns im Internet über das "multifunction shield" informiert. Beim Versuch einen kopierten Code hochzuladen ist ein Fehler aufgetreten, welchen wir beheben mussten. Dazu mussten wir mehrere Bibliotheken runterladen. Anhand des kopierten Codes haben wir die bereits vorher auf dem Display abgebildete 0 auf selbigem verschoben.

## 08/01/2019
In dem YouTube-Video <a href="https://www.youtube.com/watch?v=X7T5sfrgprU">Arduino Multi function Shield</a> haben wir uns über das multi-function shield und seine Funktionen informiert. Wir haben die in dem Video verwendete <a href="https://www.mpja.com/download/hackatronics-arduino-multi-function-shield.pdf">PDF-Datei</a> geöffnet und den Code unter dem Punkt: "Writing to the shield’s digit display" kopiert und ausgeführt und anhand dessen den Befehl für die Darstellung eines Wortes auf dem Display ermittelt. Im Anschluss daran haben wir, wie bei einer Leuchtreklame, den Namen "Jonathan" von rechts nach links durchlaufen lassen.<br/>
Code:

#include <TimerOne.h><br/>
#include <Wire.h><br/>
#include <MultiFuncShield.h>

void setup() {<br/>
Timer1.initialize();<br/>
MFS.initialize(&Timer1);

MFS.write("    ");<br/>
delay(200);<br/>
MFS.write("   J");<br/>
delay(200);<br/>
MFS.write("  JO");<br/>
delay(200);<br/>
MFS.write(" JON");<br/>
delay(200);<br/>
MFS.write("JONA");<br/>
delay(200);<br/>
MFS.write("ONAT");<br/>
delay(200);<br/>
MFS.write("NATH");<br/>
delay(200);<br/>
MFS.write("ATHA");<br/>
delay(200);<br/>
MFS.write("THAN");<br/>
delay(200);<br/>
MFS.write("HAN ");<br/>
delay(200);<br/>
MFS.write("AN  ");<br/>
delay(200);<br/>
MFS.write("N   ");<br/>
delay(200);<br/>
MFS.write("    ");<br/>
}

## 14/01/2019
Am Wochenende hat Thore zuhause versucht ein kleines Programm zu schreiben, welches noch leicht fehlerhaft war. Dieses haben wir dann heute überarbeitet und den Fehler behoben. In dem Programm läuft von rechts nach links das Wort "Lade" drei mal durch. Ist dies abgeschlossen, so erscheint auf dem Display das Wort "Go" und das multi-function shield piept kurz auf.<br/>
Code für Piep:<br/>
MFS.beep();<br/>
delay(1000);

## 15/01/2019
Ich (Thore, da Jonathan krank ist) habe heute mich mit den Knöpfen auseinander gestezte und dem gestrigen Programm ein kleines Add-On verpasst, welches bewirkt, dass man nachdem das Display "Go" schreibt man auf den <b>ersten Knopf</b> drücken kann und der Arduino ein Piepen von sich gibt, sowie "Beep" auf dem Display erscheint. Drückt man den <b>zweiten Knopf</b>, so erhält man auf dem Display eine zufällige Nummer von 1 bis 9999. Mit einem Druck auf den <b>dritten und letzten Knopf</b> ehält man ein freundliches "Hi". Dies gilt sowohl für das Display, alsauch für den Pieper, welcher dieses morst.

## 21/01/2019
Das Programm, welches Thore geschrieben hatte, haben wir rekonstruiert, da dies auf seinem Laptop geschrieben wurde, und genauere Ideen für ein endgültiges Projekt entworfen.

## 22/01/2019
Heute hebn wir versucht eine Stoppuhr zu programmieren. Dies hat allerdings in der Ausführung nicht funtioniert, da wir scheinbar einen Logikfehler gemacht haben.

## 12/02/2019
Heute haben wir eine Lösung für das Problem gefunden: indem wir ein 4x4 Tasten-Feld nutzen wollen wir die Steuerung des Krans ohne Eingabe am PC bewerkstelligen. Außerdem haben wir dieses angeschlossen und uns mit seiner Funktionsweise auseinander gesetzt.

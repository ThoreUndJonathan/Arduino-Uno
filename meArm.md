# meArm

## Gliederung
[meArm und Keypad](#einf)<br>
[Code](#code)<br>
[Projektverlauf](#verl)<br>

### meArm und Keypad<a name="einf"></a>
Der meArm ist ein Miniatur-Roboterarm, welcher mit einem kleinen Controllerboard, wie einem Raspberry Pi oder in diesem Fall einem Arduino, gesteuert werden kann. Er setzt sich aus mehreren laser-geschnittenen Plastik- oder Holzteilen und vier Servos zusammen.

![pic1](Bilder/2012-01.jpg "meArm Beispielbild")

Diese Servos werden von dem Arduino über einen PWM-Pin angesteuert und mit einer 5V-Spannung versorgt. Da ein 5V-Pin nicht ausreicht, muss man mit einem Steckbrett eine externe 9V-Stromquelle anschließen. Um den meArm zu kontrollieren kann man verschiedenste Kontrollmittel, wie Joysticks oder Tastenfelder verwenden.<br>
Das Keypad setzt sich aus 4x4 Knöpfen zusammen und hat 8 Pinanschlüsse. Auf vier dieser Pins, genauer gesagt die vier Pins der Spalten, wird ein Signal ausgegeben. Wenn nun einer der 16 Knöpfe gedrückt wird bricht das Signal der Spalte dieses Pins ab, was vom Arduino regisrtiert und vermerkt wird. Dieser stoppt die Signale auf den Pins der Spalten und  gibt nacheinander Signale auf den Pins der Reihen aus. Wird nun ein Signal auf dem Pin der Spalte, auf welcher vorher das Signal durch den Knopfdruck entfiel, empfangen, so steht die Position des Knopfs fest und  damit auch der Wert.



### Code<a name="code"></a>

### Projektverlauf<a name="verl"></a>

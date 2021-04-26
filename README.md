# Mochi-Pounders
Author: Tony Faller (amfaller@bu.edu)

Start date: April 13, 2021

End date: April 27, 2021

## Summary
Mochi Pounders is an open-source variant of the classic game Whack-A-Mole. It is loosely based on the old browser-based game [Mole Hammers](https://www.miniplay.com/game/mole-hammers), which sadly is no longer playable on many browsers. It is recommended to view [Markiplier's videos on YouTube](https://www.youtube.com/watch?v=_hHIMMtUNGc&ab_channel=Markiplier) for a gameplay demo.

Mochi Pounders mimics Mole Hammers in that it is a two-player versus game. Opposite sides of the screen act as Hammer Buttons, and a center icon acts as the mole. This center icon can be red or blue (representing team colors), black, or green. If a Hammer Button is hit while the icon is a team color, that player's score is incremented regardless of who actually hit it. When green, the player who hit it will lose points. When black, nothing happens.

This game is implemented using the QT framework and is designed for use on the BeagleBone Black and its accompanying 4.3" TFT LCD display. This is the final project for Boston University's EC535: Introduction to Embedded Systems class.

Custom artwork for the game was developed using https://www.pixilart.com/.

## Instructions
Since Mochi Pounders was created under the QT framework, the QT Creator IDE should be used to modify this code. Load the project using the `.pro` file, and the IDE should show the files organized by file type. 

**Specific to EC535:** To cross compile this project for the BeagleBone Black, copy everything onto the ENG Grid. After sourcing the proper `.bashrc` file, run `qmake` followed by `make` within the `/Mochi-Pounders` directory. This will generate the cross-compiled binary. Copy this binary onto the BeagleBone and run the game with `./Mochi-Pounders`. 

## Sources
* [Sample QT Walkthrough](https://www.youtube.com/watch?v=I96uPDifZ1w&ab_channel=DerekBanas)
* [QT Timer Documentation](https://doc.qt.io/qt-5/timers.html)
* [Simple Drawing in QT](https://codeloop.org/qt5-qpainter-how-to-draw-rectangle/)
* [Change QPainter colors at runtime](https://stackoverflow.com/questions/59132441/how-to-draw-lines-able-to-change-color-in-qt)
* [Moving from one window to another](https://www.youtube.com/watch?v=VigUMAfE2q4&ab_channel=ProgrammingKnowledge)
* [Displaying Pictures](https://forum.qt.io/topic/71836/how-to-display-a-picture/7)
* [Image push button](https://stackoverflow.com/questions/3137805/how-to-set-image-on-qpushbutton)
* [Transparent push button](https://www.qtcentre.org/threads/53751-Transparent-Push-button-over-background-image)


----

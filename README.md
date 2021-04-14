# Mochi-Pounders
Author: Tony Faller (amfaller@bu.edu)

Start date: April 13, 2021

End date: TBD

## Summary
Mochi Pounders is an open-source variant of the classic game Whack-A-Mole. It is loosely based on the old browser-based game [Mole Hammers](https://www.miniplay.com/game/mole-hammers), which sadly is no longer playable on many browsers. It is recommended to view [Markiplier's videos on YouTube](https://www.youtube.com/watch?v=_hHIMMtUNGc&ab_channel=Markiplier) for a gameplay demo.

Mochi Pounders mimics Mole Hammers in that it is a two-player versus game. Opposite sides of the screen act as Hammer Buttons, and a center icon acts as the mole. This center icon can be red or blue (representing team colors), black, or pink. If a Hamemr Button is hit while the icon is a team color, that player's score is incremented regardless of who actually hit it. When pink, the player who hit it will lose points. When black, nothing happens.

This game is implemented using the QT framework and is designed for use on the BeagleBone Black and its accompanying 4.3" TFT LCD display. This is the final project for Boston University's EC535: Introduction to Embedded Systems class.

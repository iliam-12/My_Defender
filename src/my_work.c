/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** my_work
*/

#include "../include/defender.h"

#define YELLOW "\e[33m"
#define RED "\e[31m"
#define GREEN "\e[32m"
#define CYAN "\e[36m"
#define BOLD "\e[1m"
#define NO_BOLD "\e[0m"

void my_work(void)
{
    my_putstr("\e[33m");
    my_putstr("         ---------> MY_ WORK <--------\n\n");
    my_putstr(NO_BOLD);
    my_putstr(BOLD);
    my_putstr("MANDATORY\n");
    my_putstr(NO_BOLD);

    my_putstr(GREEN);
    my_putstr("• the window can be closed using events\n");
    my_putstr("• the game manages the input from the mouse click and keyboard\n");
    my_putstr("• the game contains animated sprites rendered thanks to sprite sheets\n");
    my_putstr("• animations in your program are frame rate independent\n");
    my_putstr("• animations and movements in your program are timed by clocks\n");
    
    my_putstr(NO_BOLD);
    my_putstr(BOLD);
    my_putstr("MUST\n");
    my_putstr(NO_BOLD);
    my_putstr(GREEN);

    my_putstr("• A Staring menu with 3 buttons");
    my_putstr(BOLD);
    my_putstr(" [PLAY] [SETTINGS] [QUIT]\n");
    my_putstr(NO_BOLD);
    my_putstr(RED);
    my_putstr("• an escape key to pause the game when launched\n");
    my_putstr("• a menu when the game is paused with at least three buttons, one to resume the game, one to go to the starting menu and the one to leave the game\n");
    my_putstr(GREEN);
    my_putstr("• at least 4 different types of buildings (e.g. walls, slowing towers, damaging towers, etc...)\n");
    my_putstr("• a building menu showing the different available buildings and their price\n");
    my_putstr("• at least 2 different sound effects, and one looping background music\n");
    
    my_putstr(NO_BOLD);
    my_putstr(BOLD);
    my_putstr("SHOULD\n");
    my_putstr(NO_BOLD);
    my_putstr(GREEN);

    my_putstr("• a windows that sticks between 800x600 pixels and 1920x1080 pixels\n");
    my_putstr("• a “How To play” menu, explaining how to play your game\n");
    my_putstr(RED);
    my_putstr("• a stored scoreboard.\n");
    my_putstr("• a scoreboard displayed at the end of a game, or thanks to a scoreboard button in the starting menu\n");
    my_putstr(GREEN);
    my_putstr("• buttons with at least three visual states: idle, hover, and clicked\n");
    my_putstr(RED);
    my_putstr("• a way to skip eventual cut scenes or an animated intro\n");
    my_putstr("• different types of enemies with different speed and hit points\n");
    
    my_putstr(NO_BOLD);
    my_putstr(BOLD);
    my_putstr("COULD\n");
    my_putstr(NO_BOLD);
    my_putstr(RED);

    my_putstr("• let the user upgrade its buildings\n");
    my_putstr("• load buildings from files\n");
    my_putstr("• take buildings files as command line argument\n");
    my_putstr("• take buildings files from a menu inside the game\n");
    my_putstr("• have a skill tree, unlock different types of buildings\n");
    my_putstr("• have a “settings” menu that contains sound options and/or screen size options\n");
}
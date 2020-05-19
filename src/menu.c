/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** menu
*/

#include "../include/defender.h"

void my_bg_menu(menu_t *menu)
{
    menu->texture_bg_menu = sfTexture_createFromFile("ressources/menu.png", NULL);
    menu->sprite_bg_menu = sfSprite_create();
    sfSprite_setTexture(menu->sprite_bg_menu, menu->texture_bg_menu, sfTrue);
}

void _menu(menu_t *menu, init_t *elem, select_t *sel)
{
    //sfMusic_play(elem->sound);
    while (menu->start == 0 && menu->quit == 0) {
        if (menu->esc == 0)
            animation_boutton(menu, elem, sel);
        while (sfRenderWindow_pollEvent(elem->window, &elem->event))
            boutton_pressed_menu(menu, elem, sel);
        menu_render(elem, menu, sel);
    }
    //sfMusic_stop(elem->sound);
    //sfMusic_play(elem->sound2);
}
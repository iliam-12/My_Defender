/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** menu_render
*/

#include "../include/defender.h"

void menu_render(init_t *elem, menu_t *menu, select_t *sel)
{
    elem->windob = sfMouse_getPositionRenderWindow(elem->window);
    sel->cursor.x = elem->windob.x;
    sel->cursor.y = elem->windob.y;
    sfRenderWindow_display(elem->window);
    sfRenderWindow_clear(elem->window, sfBlack);
    sfSprite_setTexture(menu->sprite_bg_menu, menu->texture_bg_menu, sfTrue);
    sfRenderWindow_drawSprite(elem->window, menu->sprite_bg_menu, NULL);
    if (menu->esc == 1)
        sfRenderWindow_drawSprite(elem->window, menu->sprite_how2play, NULL);
    
}
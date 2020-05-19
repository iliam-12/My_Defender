/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** animation_boutton
*/

#include "../include/defender.h"

void animation_boutton(menu_t *menu, init_t *elem, select_t *sel)
{
    if (sel->cursor.x > 748 && sel->cursor.x < 998
    && sel->cursor.y > 488 && sel->cursor.y < 597)
        sfRenderWindow_drawSprite(elem->window, menu->sprite_mouse_on_play, NULL);
    if (sel->cursor.x > 748 && sel->cursor.x < 998
    && sel->cursor.y > 607 && sel->cursor.y < 716)
        sfRenderWindow_drawSprite(elem->window, menu->sprite_mouse_on_settings, NULL);
    if (sel->cursor.x > 748 && sel->cursor.x < 998
    && sel->cursor.y > 727 && sel->cursor.y < 836)
        sfRenderWindow_drawSprite(elem->window, menu->sprite_mouse_on_quit, NULL);
}
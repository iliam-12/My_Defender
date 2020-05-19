/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** boutton_pressed
*/

#include "../include/defender.h"

void boutton_pressed_menu(menu_t *menu, init_t *elem, select_t *sel)
{
    if (elem->event.type == sfEvtClosed ||
    sfKeyboard_isKeyPressed(sfKeyQ)) {
        sfRenderWindow_close(elem->window);
        menu->quit = 1;
    }
    if (sfKeyboard_isKeyPressed(sfKeyEscape))
        menu->esc = 0;
    if (sfKeyboard_isKeyPressed(sfKeyEnter))
        menu->start = 1;
    if (elem->event.type == sfEvtMouseButtonPressed) {
        //sfMusic_stop(elem->sound_boutton);
        //sfMusic_play(elem->sound_boutton);
        if (sel->cursor.x > 760 && sel->cursor.x < 980
        && sel->cursor.y > 497 && sel->cursor.y < 585)
            menu->start = 1;
        if (sel->cursor.x > 748 && sel->cursor.x < 998
        && sel->cursor.y > 607 && sel->cursor.y < 716)
            menu->esc = 1;
        if (sel->cursor.x > 748 && sel->cursor.x < 998
        && sel->cursor.y > 727 && sel->cursor.y < 836) {
            sfRenderWindow_close(elem->window);
            menu->quit = 1;
        }
    }
}
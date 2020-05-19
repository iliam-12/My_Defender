/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** my_loop
*/

#include "../include/defender.h"

void my_loop(init_t *elem, select_t *sel, menu_t *menu)
{
    while(sfRenderWindow_isOpen(elem->window)){
        if (menu->start == 0) _menu(menu, elem, sel);
        while (sfRenderWindow_pollEvent(elem->window, &elem->event)){
            if (elem->event.type == sfEvtClosed ||
                sfKeyboard_isKeyPressed(sfKeyQ))
                sfRenderWindow_close(elem->window);
            if (elem->event.type == sfEvtMouseButtonPressed)
                select_tower(sel);
        }
        if (sel->press_tr == 2 || sel->press_tb == 2
        || sel->press_lg == 2 || sel->press_glue == 2) {
            attack(elem);
            clock_towers(elem, sel);
        }
        end_while(elem, sel);
    }
    destroy(elem, menu);
}
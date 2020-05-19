/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** select_fireq
*/

#include "../include/defender.h"

void select_fire(select_t *sel)
{
    if (sel->press_tr == 1)
        sel->press_tr = 2;
    if ((sel->cursor.y > 184 && sel->cursor.y < 307)
    && (sel->cursor.x > 1618 && sel->cursor.x < 1732))
        sel->press_tr = 1;
}

void select_freeze(select_t *sel)
{
    if (sel->press_tb == 1)
        sel->press_tb = 2;
    if ((sel->cursor.y > 342 && sel->cursor.y < 475)
    && (sel->cursor.x > 1618 && sel->cursor.x < 1732))
        sel->press_tb = 1;
}

void select_lg(select_t *sel)
{
    if (sel->press_lg == 1)
        sel->press_lg = 2;
    if ((sel->cursor.y > 342 && sel->cursor.y < 475)
    && (sel->cursor.x > 1764 && sel->cursor.x < 1878))
        sel->press_lg = 1;
}

void select_glue(select_t *sel)
{
    if (sel->press_glue == 1)
        sel->press_glue = 2;
    if ((sel->cursor.y > 184 && sel->cursor.y < 307)
    && (sel->cursor.x > 1764 && sel->cursor.x < 1878))
        sel->press_glue = 1;
}

void select_tower(select_t *sel)
{
    select_fire(sel);
    select_freeze(sel);
    select_lg(sel);
    select_glue(sel);
}
/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** clock_towers
*/

#include "../include/defender.h"

void clock_tr(init_t *elem)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(elem->time_tr)) >= 60) {
        elem->size_tr.left += 80;
        if (elem->size_tr.left == 2160)
            elem->size_tr.left = 0;
        sfSprite_setTextureRect(elem->sprite_tr, elem->size_tr);
        sfClock_restart(elem->time_tr);
    }
}

void clock_tb(init_t *elem)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(elem->time_tb)) >= 60) {
        elem->size_tb.left += 80;
        if (elem->size_tb.left == 2160)
            elem->size_tb.left = 0;
        sfSprite_setTextureRect(elem->sprite_tb, elem->size_tb);
        sfClock_restart(elem->time_tb);
    }
}

void clock_lg(init_t *elem)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(elem->time_lg)) >= 60) {
        elem->size_lg.left += 80;
        if (elem->size_lg.left == 2160)
            elem->size_lg.left = 0;
        sfSprite_setTextureRect(elem->sprite_lg, elem->size_lg);
        sfClock_restart(elem->time_lg);
    }
}

void clock_glue(init_t *elem)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(elem->time_glue)) >= 60) {
        elem->size_glue.left += 80;
        if (elem->size_glue.left == 2160)
            elem->size_glue.left = 0;
        sfSprite_setTextureRect(elem->sprite_glue, elem->size_glue);
        sfClock_restart(elem->time_glue);
    }
}

void clock_towers(init_t *elem, select_t *sel)
{
    if (sel->press_tr == 2)
        clock_tr(elem);
    if (sel->press_tb == 2)
        clock_tb(elem);
    if (sel->press_lg == 2)
        clock_lg(elem);
    if (sel->press_glue == 2)
        clock_glue(elem);
}
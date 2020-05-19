/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** attack
*/

#include "../include/defender.h"

void attack(init_t *elem)
{
    if (elem->pos_mob.x - elem->pos_tr.x > -163
    && elem->pos_mob.x - elem->pos_tr.x < 163
    && elem->pos_mob.y - elem->pos_tr.y > -163
    && elem->pos_mob.y - elem->pos_tr.y < 163) {
        clock_attack(elem);
        elem->m++;
    }
}
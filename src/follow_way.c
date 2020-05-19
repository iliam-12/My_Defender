/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** follow_way
*/

#include "../include/defender.h"

void follow_way(init_t *elem)
{
    if (elem->i < 43) {
        elem->pos_mob.x += 2;
        return;
    }
    if (elem->i > 43 && elem->i < 58) {
        elem->pos_mob.y -= 2;
        return;
    }
    if (elem->i > 58 && elem->i < 87) {
        elem->pos_mob.x += 2;
        return;
    }
    if (elem->i > 88 && elem->i < 117) {
        elem->pos_mob.y += 2;
        return;
    }
    if (elem->i > 117 && elem->i < 145) {
        elem->pos_mob.x += 2;
        return;
    }
    if (elem->i > 145 && elem->i < 173) {
        elem->pos_mob.y -= 2;
        return;
    }
    if (elem->i > 173 && elem->i < 202) {
        elem->pos_mob.x += 2;
        return;
    }
    if (elem->i > 202 && elem->i < 230) {
        elem->pos_mob.y += 2;
        return;
    }
    if (elem->i > 230 && elem->i < 259) {
        elem->pos_mob.x += 2;
        return;
    }
    if (elem->i > 259 && elem->i < 275) {
        elem->pos_mob.y -= 2;
        return;
    }
    if (elem->i > 275 && elem->i < 317) {
        elem->pos_mob.x += 2;
        return;
    }
}
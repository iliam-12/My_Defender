/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** follow_way
*/

#include "../include/defender.h"

void clock(init_t *elem)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(elem->time1)) >= 45) {
        elem->size_mob.left += 35;
        elem->i++;
        if (elem->size_mob.left == 490)
            elem->size_mob.left = 0;
        sfSprite_setTextureRect(elem->sprite_mob, elem->size_mob);
        sfClock_restart(elem->time1);
    }
}

void clock_portal(init_t *elem)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(elem->time2)) >= 45) {
        elem->size_portal_r.left += 83;
        if (elem->size_portal_r.left == 1328)
            elem->size_portal_r.left = 0;
        elem->size_portal_b.left += 83;
        if (elem->size_portal_b.left == 1328)
            elem->size_portal_b.left = 0;
        sfSprite_setTextureRect(elem->sprite_portal_b, elem->size_portal_b);
        sfSprite_setTextureRect(elem->sprite_portal_r, elem->size_portal_r);
        sfClock_restart(elem->time2);
    }
}

void clock_death(init_t *elem)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(elem->time3)) < 70) {
        elem->size_death.left += 60;
        if (elem->size_death.left == 2040) {
            elem->size_death.left = 0;
            elem->activate_death = 0;
        }
        sfSprite_setTextureRect(elem->sprite_death, elem->size_death);
        sfClock_restart(elem->time3);
    }
}

void clock_attack(init_t *elem)
{
    if (elem->m % 100 == 0) {
        elem->size_moblife.top += 10;
        if (elem->size_moblife.top == 30) {
            //sfMusic_stop(elem->sound3);
            //sfMusic_play(elem->sound3);
            elem->activate_death = 1;
            elem->index1 = elem->pos_mob.x ;
            elem->index2 = elem->pos_mob.y;
            elem->pos_mob.x = 190;
            elem->pos_mob.y = 490;
            elem->i = 0;
            elem->size_moblife.top = 0;
            elem->m = 0;
        }
        sfSprite_setTextureRect(elem->sprite_moblife, elem->size_moblife);
        sfClock_restart(elem->time3);
    }
}
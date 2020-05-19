/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** portal
*/

#include "../include/defender.h"

void portal_red(init_t *elem)
{
    elem->texture_portal_b = sfTexture_createFromFile("ressources/Portal/red_idle.png", NULL);
    elem->sprite_portal_b = sfSprite_create();
    sfSprite_setTexture(elem->sprite_portal_b, elem->texture_portal_b, sfTrue);
    elem->pos_portal_b.x = 1330;
    elem->pos_portal_b.y = 463;
    elem->size_portal_b.width = 83;
    elem->size_portal_b.height = 113;
    sfSprite_setTextureRect(elem->sprite_portal_b, elem->size_portal_b);
    elem->time2 = sfClock_create();
}

void portal_blue(init_t *elem)
{
    elem->texture_portal_r = sfTexture_createFromFile("ressources/Portal/blue_idle.png", NULL);
    elem->sprite_portal_r = sfSprite_create();
    sfSprite_setTexture(elem->sprite_portal_r, elem->texture_portal_r, sfTrue);
    elem->pos_portal_r.x = 167;
    elem->pos_portal_r.y = 463;
    elem->size_portal_r.width = 83;
    elem->size_portal_r.height = 113;
    sfSprite_setTextureRect(elem->sprite_portal_r, elem->size_portal_r);
    elem->time2 = sfClock_create();
}

void portal(init_t *elem)
{
    portal_blue(elem);
    portal_red(elem);
}
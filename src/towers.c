/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** towers
*/

#include "../include/defender.h"

void tower_r(init_t *elem, select_t *sel)
{
    elem->texture_tr = sfTexture_createFromFile("ressources/Towers/fire_idle.png", NULL);
    elem->sprite_tr = sfSprite_create();
    sfSprite_setTexture(elem->sprite_tr, elem->texture_tr, sfTrue);
    elem->pos_tr.x = sel->cursor.x;
    elem->pos_tr.y = sel->cursor.y;
    elem->size_tr.width = 80;
    elem->size_tr.height = 144;
    sfSprite_setTextureRect(elem->sprite_tr, elem->size_tr);
    elem->time_tr = sfClock_create();
}

void tower_b(init_t *elem, select_t *sel)
{
    elem->texture_tb = sfTexture_createFromFile("ressources/Towers/ice_idle.png", NULL);
    elem->sprite_tb = sfSprite_create();
    sfSprite_setTexture(elem->sprite_tb, elem->texture_tb, sfTrue);
    elem->pos_tb.x = sel->cursor.x;
    elem->pos_tb.y = sel->cursor.y;
    elem->size_tb.width = 80;
    elem->size_tb.height = 144;
    sfSprite_setTextureRect(elem->sprite_tb, elem->size_tb);
    elem->time_tb = sfClock_create();
}

void tower_l(init_t *elem, select_t *sel)
{
    elem->texture_lg = sfTexture_createFromFile("ressources/Towers/storm_idle.png", NULL);
    elem->sprite_lg = sfSprite_create();
    sfSprite_setTexture(elem->sprite_lg, elem->texture_lg, sfTrue);
    elem->pos_lg.x = sel->cursor.x;
    elem->pos_lg.y = sel->cursor.y;
    elem->size_lg.width = 80;
    elem->size_lg.height = 144;
    sfSprite_setTextureRect(elem->sprite_lg, elem->size_lg);
    elem->time_lg = sfClock_create();
}

void tower_g(init_t *elem, select_t *sel)
{
    elem->texture_glue = sfTexture_createFromFile("ressources/Towers/poison_idle.png", NULL);
    elem->sprite_glue = sfSprite_create();
    sfSprite_setTexture(elem->sprite_glue, elem->texture_glue, sfTrue);
    elem->pos_glue.x = sel->cursor.x;
    elem->pos_glue.y = sel->cursor.y;
    elem->size_glue.width = 80;
    elem->size_glue.height = 144;
    sfSprite_setTextureRect(elem->sprite_glue, elem->size_glue);
    elem->time_glue = sfClock_create();
}

void towers(init_t *elem, select_t *sel)
{
    tower_r(elem, sel);
    tower_b(elem, sel);
    tower_l(elem, sel);
    tower_g(elem, sel);
}
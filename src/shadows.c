/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** shadow_red
*/

#include "../include/defender.h"

void shadow_red(init_t *elem)
{
    elem->texture_shadow_red = sfTexture_createFromFile("ressources/shadows/red_shadow.png", NULL);
    elem->sprite_shadow_red = sfSprite_create();
    sfSprite_setTexture(elem->sprite_shadow_red, elem->texture_shadow_red, sfTrue);
    elem->pos_shadow_red.x = elem->pos_tr.x - 83;
    elem->pos_shadow_red.y = elem->pos_tr.y - 15;
    elem->size_shadow_red.width = 249;
    elem->size_shadow_red.height = 249;
    sfSprite_setTextureRect(elem->sprite_shadow_red, elem->size_shadow_red);
}

void shadow_blue(init_t *elem)
{
    elem->texture_shadow_blue = sfTexture_createFromFile("ressources/shadows/blue_shadow.png", NULL);
    elem->sprite_shadow_blue = sfSprite_create();
    sfSprite_setTexture(elem->sprite_shadow_blue, elem->texture_shadow_blue, sfTrue);
    elem->pos_shadow_blue.x = elem->pos_tb.x - 83;
    elem->pos_shadow_blue.y = elem->pos_tb.y - 15;
    elem->size_shadow_blue.width = 249;
    elem->size_shadow_blue.height = 249;
    sfSprite_setTextureRect(elem->sprite_shadow_blue, elem->size_shadow_blue);
}

void shadow_glue(init_t *elem)
{
    elem->texture_shadow_glue = sfTexture_createFromFile("ressources/shadows/glue_shadow.png", NULL);
    elem->sprite_shadow_glue = sfSprite_create();
    sfSprite_setTexture(elem->sprite_shadow_glue, elem->texture_shadow_glue, sfTrue);
    elem->pos_shadow_glue.x = elem->pos_glue.x - 83;
    elem->pos_shadow_glue.y = elem->pos_glue.y - 15;
    elem->size_shadow_glue.width = 249;
    elem->size_shadow_glue.height = 249;
    sfSprite_setTextureRect(elem->sprite_shadow_glue, elem->size_shadow_glue);
}

void shadow_lightning(init_t *elem)
{
    elem->texture_shadow_lightning = sfTexture_createFromFile("ressources/shadows/lightning_shadow.png", NULL);
    elem->sprite_shadow_lightning = sfSprite_create();
    sfSprite_setTexture(elem->sprite_shadow_lightning, elem->texture_shadow_lightning, sfTrue);
    elem->pos_shadow_lightning.x = elem->pos_lg.x - 83;
    elem->pos_shadow_lightning.y = elem->pos_lg.y - 15;
    elem->size_shadow_lightning.width = 249;
    elem->size_shadow_lightning.height = 249;
    sfSprite_setTextureRect(elem->sprite_shadow_lightning, elem->size_shadow_lightning);
}

void shadows(init_t *elem)
{
    shadow_red(elem);
    shadow_blue(elem);
    shadow_glue(elem);
    shadow_lightning(elem);
}
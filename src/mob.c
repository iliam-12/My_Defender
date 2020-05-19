/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** mob
*/

#include "../include/defender.h"

void mob_life(init_t *elem)
{
    elem->texture_moblife = sfTexture_createFromFile("ressources/UI/heartbar.png", NULL);
    elem->sprite_moblife = sfSprite_create();
    sfSprite_setTexture(elem->sprite_moblife, elem->texture_moblife, sfTrue);
    elem->pos_moblife.x = elem->pos_mob.x - 18;
    elem->pos_moblife.y = elem->pos_mob.y - 18;
    elem->size_moblife.width = 64;
    elem->size_moblife.height = 10;
    sfSprite_setTextureRect(elem->sprite_moblife, elem->size_moblife);
}

void death_mob(init_t *elem)
{
    elem->texture_death = sfTexture_createFromFile("ressources/Monsters/green_death.png", NULL);
    elem->sprite_death = sfSprite_create();
    sfSprite_setTexture(elem->sprite_death, elem->texture_death, sfTrue);
    elem->pos_death.x = elem->index1;
    elem->pos_death.y = elem->index2 + 70;
    elem->size_death.width = 60;
    elem->size_death.height = 29;
    sfSprite_setTextureRect(elem->sprite_death, elem->size_death);
    elem->time3 = sfClock_create();
}

void mob(init_t *elem)
{
    elem->texture_mob = sfTexture_createFromFile("ressources/Monsters/green_right.png", NULL);
    elem->sprite_mob = sfSprite_create();
    sfSprite_setTexture(elem->sprite_mob, elem->texture_mob, sfTrue);
    elem->pos_mob.x = 190;
    elem->pos_mob.y = 490;
    elem->size_mob.width = 35;
    elem->size_mob.height = 81;
    sfSprite_setTextureRect(elem->sprite_mob, elem->size_mob);
    elem->time1 = sfClock_create();
}
/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** render
*/

#include "../include/defender.h"

void render(init_t *elem, select_t *sel)
{
    sfRenderWindow_display(elem->window);
    sfRenderWindow_clear(elem->window, sfBlack);
    sfRenderWindow_drawSprite(elem->window, elem->sprite_bg, NULL);
    sfSprite_setTexture(elem->sprite_bg, elem->texture_bg, sfTrue);
    sfSprite_setPosition(elem->sprite_portal_r, elem->pos_portal_r);
    sfSprite_setPosition(elem->sprite_portal_b, elem->pos_portal_b);
    sfSprite_setPosition(elem->sprite_mob, elem->pos_mob);
    sfSprite_setPosition(elem->sprite_moblife, elem->pos_moblife);


    if (elem->activate_death == 1) {
        sfSprite_setPosition(elem->sprite_death, elem->pos_death);
        sfRenderWindow_drawSprite(elem->window, elem->sprite_death, NULL);
    }
    if (sel->press_tr == 2) {
        sfSprite_setTexture(elem->sprite_shadow_red, elem->texture_shadow_red, sfTrue);
        sfSprite_setPosition(elem->sprite_shadow_red, elem->pos_shadow_red);
        sfRenderWindow_drawSprite(elem->window, elem->sprite_shadow_red, NULL);
    }
    if (sel->press_tb == 2) {
        sfSprite_setTexture(elem->sprite_shadow_blue, elem->texture_shadow_blue, sfTrue);
        sfSprite_setPosition(elem->sprite_shadow_blue, elem->pos_shadow_blue);
        sfRenderWindow_drawSprite(elem->window, elem->sprite_shadow_blue, NULL);
    }
    if (sel->press_lg == 2) {
        sfSprite_setTexture(elem->sprite_shadow_lightning, elem->texture_shadow_lightning, sfTrue);
        sfSprite_setPosition(elem->sprite_shadow_lightning, elem->pos_shadow_lightning);
        sfRenderWindow_drawSprite(elem->window, elem->sprite_shadow_lightning, NULL);
    }
    if (sel->press_glue == 2) {
        sfSprite_setTexture(elem->sprite_shadow_glue, elem->texture_shadow_glue, sfTrue);
        sfSprite_setPosition(elem->sprite_shadow_glue, elem->pos_shadow_glue);
        sfRenderWindow_drawSprite(elem->window, elem->sprite_shadow_glue, NULL);
    }
    if (sel->press_tr > 0) {
        sfSprite_setPosition(elem->sprite_tr, elem->pos_tr);
        sfRenderWindow_drawSprite(elem->window, elem->sprite_tr, NULL);
    }
    if (sel->press_tb > 0) {
        sfSprite_setPosition(elem->sprite_tb, elem->pos_tb);
        sfRenderWindow_drawSprite(elem->window, elem->sprite_tb, NULL);
    }
    if (sel->press_lg > 0) {
        sfSprite_setPosition(elem->sprite_lg, elem->pos_lg);
        sfRenderWindow_drawSprite(elem->window, elem->sprite_lg, NULL);
    }
    if (sel->press_glue > 0) {
        sfSprite_setPosition(elem->sprite_glue, elem->pos_glue);
        sfRenderWindow_drawSprite(elem->window, elem->sprite_glue, NULL);
    }
    sfRenderWindow_drawSprite(elem->window, elem->sprite_portal_r, NULL);
    sfRenderWindow_drawSprite(elem->window, elem->sprite_portal_b, NULL);
    sfRenderWindow_drawSprite(elem->window, elem->sprite_mob, NULL);
    sfRenderWindow_drawSprite(elem->window, elem->sprite_moblife, NULL);
}
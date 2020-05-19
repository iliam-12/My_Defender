/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** destroy
*/

#include "../include/defender.h"

void destroy(init_t *elem, menu_t *menu)
{
    /* ___ DESTROY TEXTURES ___ */

    sfTexture_destroy(elem->texture_bg);
    sfTexture_destroy(elem->texture_mob);
    sfTexture_destroy(elem->texture_portal_b);
    sfTexture_destroy(elem->texture_portal_r);
    sfTexture_destroy(elem->texture_tr);
    sfTexture_destroy(elem->texture_tb);
    sfTexture_destroy(elem->texture_lg);
    sfTexture_destroy(elem->texture_glue);
    sfTexture_destroy(elem->texture_shadow_red);
    sfTexture_destroy(elem->texture_shadow_blue);
    sfTexture_destroy(elem->texture_shadow_glue);
    sfTexture_destroy(elem->texture_shadow_lightning);
    sfTexture_destroy(elem->texture_moblife);
    sfTexture_destroy(elem->texture_death);

    sfTexture_destroy(menu->texture_bg_menu);
    sfTexture_destroy(menu->texture_mouse_on_play);
    sfTexture_destroy(menu->texture_mouse_on_settings);
    sfTexture_destroy(menu->texture_mouse_on_quit);
    sfTexture_destroy(menu->texture_how2play);


    /* ___ DESTROY SPRITES ___ */
    
    sfSprite_destroy(elem->sprite_bg);
    sfSprite_destroy(elem->sprite_mob);
    sfSprite_destroy(elem->sprite_portal_b);
    sfSprite_destroy(elem->sprite_portal_r);
    sfSprite_destroy(elem->sprite_tr);
    sfSprite_destroy(elem->sprite_tb);
    sfSprite_destroy(elem->sprite_lg);
    sfSprite_destroy(elem->sprite_glue);
    sfSprite_destroy(elem->sprite_shadow_red);
    sfSprite_destroy(elem->sprite_shadow_blue);
    sfSprite_destroy(elem->sprite_shadow_glue);
    sfSprite_destroy(elem->sprite_shadow_lightning);
    sfSprite_destroy(elem->sprite_bg);
    sfSprite_destroy(elem->sprite_moblife);
    sfSprite_destroy(elem->sprite_death);

    sfSprite_destroy(menu->sprite_mouse_on_play);
    sfSprite_destroy(menu->sprite_mouse_on_settings);
    sfSprite_destroy(menu->sprite_mouse_on_quit);
    sfSprite_destroy(menu->sprite_how2play);    
    
    /* ___ DESTROY MUSICS ___ */
    sfMusic_destroy(elem->sound);
    sfMusic_destroy(elem->sound2);
    sfMusic_destroy(elem->sound3);
    sfMusic_destroy(elem->sound_boutton);

    /* ____ DESTROY CLOCKS ___ */
    sfClock_destroy(elem->time1);
    sfClock_destroy(elem->time2);
    sfClock_destroy(elem->time3);
    sfClock_destroy(elem->time_tr);
    sfClock_destroy(elem->time_tb);
    sfClock_destroy(elem->time_lg);
    sfClock_destroy(elem->time_glue);

    sfFont_destroy(elem->font);
    sfRenderWindow_destroy(elem->window);
}
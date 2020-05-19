/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** defender
*/

#ifndef DEFENDER_H_
#define DEFENDER_H_

/* ___ INCLUDES ___ */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/Graphics/Text.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/* ___ STRUCTURES ___ */

typedef struct menu
{
    sfTexture *texture_bg_menu;
    sfSprite *sprite_bg_menu;

    sfTexture *texture_mouse_on_play;
    sfSprite *sprite_mouse_on_play;
    sfVector2f pos_mouse_on_play;
    sfIntRect size_mouse_on_play;
    
    sfTexture *texture_mouse_on_settings;
    sfSprite *sprite_mouse_on_settings;
    sfVector2f pos_mouse_on_settings;
    sfIntRect size_mouse_on_settings;

    sfTexture *texture_mouse_on_quit;
    sfSprite *sprite_mouse_on_quit;
    sfVector2f pos_mouse_on_quit;
    sfIntRect size_mouse_on_quit;

    sfTexture *texture_how2play;
    sfSprite *sprite_how2play;
    sfVector2f pos_how2play;
    sfIntRect size_how2play;

    int menu;
    int start;
    int quit;
    int esc;
} menu_t;
struct sel
{
    int press_tr;
    int press_tb;
    int press_lg;
    int press_glue;

    sfVector2f cursor;
    sfVector2f pos_fire;
    sfVector2f pos_freeze;
}; typedef struct sel select_t;

struct elem
{
    sfRenderWindow *window;
    sfVideoMode mode;
    
    int life;
    int index1;
    int index2;
    int i;
    int m;
    int activate_death;

    /* TEXTURES */
    sfTexture *texture_mob;
    sfTexture *texture_portal_b;
    sfTexture *texture_portal_r;
    sfTexture *texture_tr;
    sfTexture *texture_tb;
    sfTexture *texture_lg;
    sfTexture *texture_glue;
    sfTexture *texture_shadow_red;
    sfTexture *texture_shadow_blue;
    sfTexture *texture_shadow_glue;
    sfTexture *texture_shadow_lightning;
    sfTexture *texture_bg;
    sfTexture *texture_moblife;
    sfTexture *texture_death;


    /* SPRITES */
    sfSprite *sprite_mob;
    sfSprite *sprite_portal_b;
    sfSprite *sprite_portal_r;
    sfSprite *sprite_tr;
    sfSprite *sprite_tb;
    sfSprite *sprite_lg;
    sfSprite *sprite_glue;
    sfSprite *sprite_shadow_red;
    sfSprite *sprite_shadow_blue;
    sfSprite *sprite_shadow_glue;
    sfSprite *sprite_shadow_lightning;
    sfSprite *sprite_bg;
    sfSprite *sprite_moblife;
    sfSprite *sprite_death;


    /* INT RECT */
    sfIntRect size_mob;
    sfIntRect size_portal_b;
    sfIntRect size_portal_r;
    sfIntRect size_tr;
    sfIntRect size_tb;
    sfIntRect size_lg;
    sfIntRect size_glue;
    sfIntRect size_shadow_red;
    sfIntRect size_shadow_blue;
    sfIntRect size_shadow_glue;
    sfIntRect size_shadow_lightning;
    sfIntRect size_moblife;
    sfIntRect size_death;

    /* VECTOR2F */
    sfVector2f pos_mob;
    sfVector2f pos_moblife;
    sfVector2f pos_portal_b;
    sfVector2f pos_portal_r;
    sfVector2f pos_tr;
    sfVector2f pos_tb;
    sfVector2f pos_lg;
    sfVector2f pos_glue;
    sfVector2f pos_shadow_red;
    sfVector2f pos_shadow_blue;
    sfVector2f pos_shadow_glue;
    sfVector2f pos_shadow_lightning;
    sfVector2f pos_death;

    
    /* VECTOR2i */
    sfVector2i windob;
    
    /* DIVERS */
    sfClock *time1;
    sfClock *time2;
    sfClock *time3;
    sfClock *time_tr;
    sfClock *time_tb;
    sfClock *time_lg;
    sfClock *time_glue;
    sfEvent event;
    sfFont *font;
    sfText *text;

    sfMusic *sound;
    sfMusic *sound2;
    sfMusic *sound3;
    sfMusic *sound_boutton;

}; typedef struct elem init_t;

struct pos
{
    int x;
    int y;
    int i;
    int j;
    int k;
    int pass;
}; typedef struct pos pos_t;

/* ___ FONCTIONS ___ */

void my_putchar(char c);
void my_putstr(char *str);
void destroy(init_t *elem, menu_t *menu);
char **my_str_to_word_array(char const *str);
void follow_way(init_t *elem);
void render(init_t *elem, select_t *sel);
void mob(init_t *elem);
void shadows(init_t *elem);
void attack(init_t *elem);
void clock(init_t *elem);
void portal(init_t *elem);
void clock_portal(init_t *elem);
void mob_life(init_t *elem);
void end_while(init_t *elem, select_t *sel);
void my_bg_menu(menu_t *menu);
void _menu(menu_t *menu, init_t *elem, select_t *sel);
void menu_render(init_t *elem, menu_t *menu, select_t *sel);
void boutton_pressed_menu(menu_t *menu, init_t *elem, select_t *sel);
void animation_boutton(menu_t *menu, init_t *elem, select_t *sel);
void select_tower(select_t *sel);
void death_mob(init_t *elem);
void clock_death(init_t *elem);
void my_loop(init_t *elem, select_t *sel, menu_t *menu);
void clock_towers(init_t *elem, select_t *sel);
void towers(init_t *elem, select_t *sel);
void clock_attack(init_t *elem);
void mouse_on(menu_t *menu);
int my_strcmp(char const *s1, char const *s2);
void my_work(void);



#endif /* !DEFENDER_H_ */

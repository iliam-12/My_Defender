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

struct elem
{
    sfRenderWindow *window;
    sfVideoMode mode;
    
    int i;

    /* TEXTURES */
    sfTexture *texture_mob;
    sfTexture *texture_portal_b;
    sfTexture *texture_portal_r;
    sfTexture *texture_bg;
    sfTexture *texture_grass1;
    sfTexture *texture_grass2;
    sfTexture *texture_grass3;
    sfTexture *texture_grass4;
    sfTexture *texture_grass5;
    sfTexture *texture_grass6;


    /* SPRITES */
    sfSprite *sprite_mob;
    sfSprite *sprite_portal_b;
    sfSprite *sprite_portal_r;
    sfSprite *sprite_bg;
    sfSprite *sprite_grass1;
    sfSprite *sprite_grass2;
    sfSprite *sprite_grass3;
    sfSprite *sprite_grass4;
    sfSprite *sprite_grass5;
    sfSprite *sprite_grass6;


    /* INT RECT */
    sfIntRect size_mob;
    sfIntRect size_portal_b;
    sfIntRect size_portal_r;
    sfIntRect size_grass1;
    sfIntRect size_grass2;
    sfIntRect size_grass3;
    sfIntRect size_grass4;
    sfIntRect size_grass5;
    sfIntRect size_grass6;


    /* VECTOR2F */
    sfVector2f pos_mob;
    sfVector2f pos_portal_b;
    sfVector2f pos_portal_r;
    sfVector2f pos_grass1;
    sfVector2f pos_grass2;
    sfVector2f pos_grass3;
    sfVector2f pos_grass4;
    sfVector2f pos_grass5;
    sfVector2f pos_grass6;

    /* DIVERS */
    sfClock *time1;
    sfClock *time2;
    sfEvent event;
    sfFont *font;
    sfText *text;
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

void my_putstr(char const *str);
void choose_grass(init_t *elem, char **tab, pos_t *pos);
void destroy(init_t *elem);
char **my_str_to_word_array(char const *str);
void follow_way(char **map, init_t *elem, pos_t *pos);
void render(init_t *elem);
void mob(init_t *elem);
void clock(init_t *elem);
void portal(init_t *elem);

#endif /* !DEFENDER_H_ */

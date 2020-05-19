/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** mouse_on
*/

#include "../include/defender.h"

void how2play(menu_t *menu)
{
    menu->texture_how2play = sfTexture_createFromFile("ressources/How2play.png", NULL);
    menu->sprite_how2play = sfSprite_create();
    sfSprite_setTexture(menu->sprite_how2play, menu->texture_how2play, sfTrue);
    menu->pos_how2play.x = 620;
    menu->pos_how2play.y = 310;
    menu->size_how2play.width = 500;
    menu->size_how2play.height = 532;
    sfSprite_setPosition(menu->sprite_how2play, menu->pos_how2play);
    sfSprite_setTextureRect(menu->sprite_how2play, menu->size_how2play);
}

void mouse_on_quit(menu_t *menu)
{
    menu->texture_mouse_on_quit = sfTexture_createFromFile("ressources/mouse_on_quit.png", NULL);
    menu->sprite_mouse_on_quit = sfSprite_create();
    sfSprite_setTexture(menu->sprite_mouse_on_quit, menu->texture_mouse_on_quit, sfTrue);
    menu->pos_mouse_on_quit.x = 748;
    menu->pos_mouse_on_quit.y = 727;
    menu->size_mouse_on_quit.width = 250;
    menu->size_mouse_on_quit.height = 108;
    sfSprite_setPosition(menu->sprite_mouse_on_quit, menu->pos_mouse_on_quit);
    sfSprite_setTextureRect(menu->sprite_mouse_on_quit, menu->size_mouse_on_quit);
}

void mouse_on_settings(menu_t *menu)
{
    menu->texture_mouse_on_settings = sfTexture_createFromFile("ressources/mouse_on_settings.png", NULL);
    menu->sprite_mouse_on_settings = sfSprite_create();
    sfSprite_setTexture(menu->sprite_mouse_on_settings, menu->texture_mouse_on_settings, sfTrue);
    menu->pos_mouse_on_settings.x = 748;
    menu->pos_mouse_on_settings.y = 607;
    menu->size_mouse_on_settings.width = 250;
    menu->size_mouse_on_settings.height = 108;
    sfSprite_setPosition(menu->sprite_mouse_on_settings, menu->pos_mouse_on_settings);
    sfSprite_setTextureRect(menu->sprite_mouse_on_settings, menu->size_mouse_on_settings);
}

void mouse_on_play(menu_t *menu)
{
    menu->texture_mouse_on_play = sfTexture_createFromFile("ressources/mouse_on_play.png", NULL);
    menu->sprite_mouse_on_play = sfSprite_create();
    sfSprite_setTexture(menu->sprite_mouse_on_play, menu->texture_mouse_on_play, sfTrue);
    menu->pos_mouse_on_play.x = 748;
    menu->pos_mouse_on_play.y = 488;
    menu->size_mouse_on_play.width = 250;
    menu->size_mouse_on_play.height = 108;
    sfSprite_setPosition(menu->sprite_mouse_on_play, menu->pos_mouse_on_play);
    sfSprite_setTextureRect(menu->sprite_mouse_on_play, menu->size_mouse_on_play);
}

void mouse_on(menu_t *menu)
{
    mouse_on_play(menu);
    mouse_on_settings(menu);
    mouse_on_quit(menu);
    how2play(menu);
}
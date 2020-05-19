/*
** EPITECH PROJECT, 2020
** src
** File description:
** main
*/

#include "../include/defender.h"

void initialised_value(init_t *elem, select_t *sel, pos_t *pos, menu_t *menu)
{
    pos->x = 2;
    pos->y = 6;
    pos->i = 1;
    pos->j = 1;
    pos->k = 1;
    menu->esc = 0;
    sel->press_tr = 0;
    sel->press_tb = 0;
    sel->press_lg = 0;
    sel->press_glue = 0;
    pos->pass = 0;
    elem->activate_death = 0;
}

void end_while(init_t *elem, select_t *sel)
{
    
    mob_life(elem);
    death_mob(elem);
    shadows(elem);
    elem->windob = sfMouse_getPositionRenderWindow(elem->window);
    sel->cursor.x = elem->windob.x;
    sel->cursor.y = elem->windob.y;
    if (sel->press_tr == 1) {
        elem->pos_tr.x = sel->cursor.x - 41;
        elem->pos_tr.y = sel->cursor.y - 83;
    }
    if (sel->press_tb == 1) {
        elem->pos_tb.x = sel->cursor.x - 41;
        elem->pos_tb.y = sel->cursor.y - 83;
    }
    if (sel->press_lg == 1) {
        elem->pos_lg.x = sel->cursor.x - 41;
        elem->pos_lg.y = sel->cursor.y - 83;
    }
    if (sel->press_glue == 1) {
        elem->pos_glue.x = sel->cursor.x - 41;
        elem->pos_glue.y = sel->cursor.y - 83;
    }
    if (elem->activate_death == 1)
        clock_death(elem);
    clock(elem);
    clock_portal(elem);
    follow_way(elem);
    render(elem, sel);
}

void window(init_t *elem)
{
    elem->mode.width = 1920;
    elem->mode.height = 1080;
    elem->window = sfRenderWindow_create(elem->mode, "/*   MY DEFENDER   */",
    sfResize | sfClose, NULL);
    
    //elem->mode.width = 1920;
    //elem->mode.height = 1080;
    //elem->window = sfRenderWindow_create(elem->mode, "My defender", sfFullscreen, NULL);
    //if (elem->window == NULL)
    //    return;
    //sfRenderWindow_setFramerateLimit(elem->window, 60);
}

void my_background(init_t *elem)
{
    elem->texture_bg = sfTexture_createFromFile("ressources/Screenshot.png", NULL);
    elem->sprite_bg = sfSprite_create();
    sfSprite_setTexture(elem->sprite_bg, elem->texture_bg, sfTrue);
}

int main(int ac, char **av)
{
    init_t *elem = malloc(sizeof(init_t));
    pos_t *pos = malloc(sizeof(pos_t));
    select_t *sel = malloc(sizeof(select_t));
    menu_t *menu = malloc(sizeof(menu_t));

    if (!ac) return (84); //compil error ac not used (useless).
    if (my_strcmp(av[1], "my_work") == 0) {
        my_work();
        return (0);
    }
    if (av[1] && av[1][0] == '-' && av[1][1] == 'h') {
        my_putstr("\e[1m\e[100mfor epitech students\e[0m \e[1m: \e[0m\e[33m./my_defender my_work\e[0m\n");
        return (84);
    }
    initialised_value(elem, sel, pos, menu);
    window(elem);
    my_bg_menu(menu);
    mouse_on(menu);
    my_background(elem);
    mob(elem);
    towers(elem, sel);
    portal(elem);

    /* ____________________ SOUND ________________________ */
    //elem->sound = sfMusic_createFromFile("ressources/song/Jill.ogg");
    //elem->sound2 = sfMusic_createFromFile("ressources/song/music.ogg");
    //elem->sound3 = sfMusic_createFromFile("ressources/song/die.ogg");
    //elem->sound_boutton = sfMusic_createFromFile("ressources/song/click.ogg");

    my_loop(elem, sel, menu);
}

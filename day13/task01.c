/*
** EPITECH PROJECT, 2025
** task01
** File description:
** task01
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "struct.h"

framebuffer_t *framebuffer_create(unsigned int width, unsigned int height)
{
    framebuffer_t *buffer = malloc(sizeof(framebuffer_t));

    buffer->pixels = malloc(height * width * 32 / 8);
    buffer->width = width;
    buffer->height = height;
    return buffer;
}

void super_event(sfRenderWindow *window)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(window);
    }
}

int main(void)
{
    sfVideoMode mode = {800, 600, 32};
    sfRenderWindow *window;

    window = sfRenderWindow_create(mode, "MyWindow", sfDefaultStyle, NULL);
    sfRenderWindow_setTitle(window, "Hello");
    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_display(window);
        super_event(window);
        sfRenderWindow_clear(window, sfMagenta);
    }
    sfRenderWindow_destroy(window);
    return 0;
}

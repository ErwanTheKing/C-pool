/*
** EPITECH PROJECT, 2025
** final stumper
** File description:
** final stumper
*/

/*
** Please don't judge us, we know what we are supposed to do,
** we just have absolutely no idea how to do it.
** We probably know how to access the name of the files,
** we really simply can not unlock the location of the knowledge in our mind.
*/

#include <unistd.h>
#include <stdlib.h>
#include "include/my.h"

static void display_res_sqr_1(char *str, char **name, int lenght, int height)
{
    if (str[0] == 'o')
        my_putstr(name[0]);
    if (str[0] == '/' || str[0] == '*')
        my_putstr(name[1]);
    my_putchar(' ');
    my_put_nbr(lenght);
    my_putchar(' ');
    my_put_nbr(height);
    my_putchar('\n');
}

static void display_res_sqr_2(char *str, char **name, int lenght, int height)
{
    for (int a = 0; a < 2; a++) {
        my_putstr(name[a + 2]);
        my_putchar(' ');
        my_put_nbr(lenght);
        my_putchar(' ');
        my_put_nbr(height);
        my_putstr(" || ");
    }
    my_putstr(name[4]);
    my_putchar(' ');
    my_put_nbr(lenght);
    my_putchar(' ');
    my_put_nbr(height);
    my_putchar('\n');
}

static void display_res_sqr_3(char *str, char **name, int lenght, int height)
{
    my_putstr(name[2]);
    my_putchar(' ');
    my_put_nbr(lenght);
    my_putchar(' ');
    my_put_nbr(height);
    my_putchar('\n');
}

static void display_res_sqr_4(char *str, char **name, int lenght, int height)
{
    my_putstr(name[3]);
    my_putchar(' ');
    my_put_nbr(lenght);
    my_putchar(' ');
    my_put_nbr(height);
    my_putchar('\n');
}

static void display_res_sqr_5(char *str, char **name, int lenght, int height)
{
    my_putstr(name[4]);
    my_putchar(' ');
    my_put_nbr(lenght);
    my_putchar(' ');
    my_put_nbr(height);
    my_putchar('\n');
}

int check_sqr_3_4_5(char *str, char **name, int lenght, int height)
{
    int len = my_strlen(str) - 2;

    if (str[0] == 'A' && str[0] == str[lenght - 1]) {
        display_res_sqr_3(str, name, lenght, height);
        return 0;
    }
    if (str[0] == 'A' && str[0] != str[len]) {
        display_res_sqr_4(str, name, lenght, height);
        return 0;
    }
    if (str[0] == 'A' && str[0] == str[len]) {
        display_res_sqr_5(str, name, lenght, height);
        return 0;
    }
    return 84;
}

int check_sqr_1_2(char *str, char **name, int lenght, int height)
{
    if (str[0] == 'o' || str[0] == '/' || str[0] == '*') {
        display_res_sqr_1(str, name, lenght, height);
        return 0;
    }
    if (lenght == 1 || height == 1) {
        display_res_sqr_2(str, name, lenght, height);
        return 0;
    }
    return 84;
}

int rush3(char *str)
{
    int lenght = 0;
    int height = 0;
    int error = 0;
    char *name[5] = {"[rush1-1]", "[rush1-2]",
        "[rush1-3]", "[rush1-4]", "[rush1-5]"};

    for (lenght = 0; str[lenght] != '\n'; lenght++);
    for (int a = 0; str[a] != '\0'; a++) {
        if (str[a] == '\n')
            height++;
    }
    error = check_sqr_1_2(str, name, lenght, height);
    if (error == 0)
        return 0;
    error = check_sqr_3_4_5(str, name, lenght, height);
    if (error == 84) {
        write(2, "Error", 6);
        return 84;
    }
    return 0;
}

int main(void)
{
    int BUFF_SIZE = 9999;
    char buff[BUFF_SIZE + 1];
    int offset = 0;
    int len = read(0, buff + offset, BUFF_SIZE - offset);

    while (len > 0) {
        offset = offset + len;
        len = read(0, buff + offset, BUFF_SIZE - offset);
    }
    buff[offset] = '\0';
    if (len < 0) {
        write(2, "Error", 6);
        return 84;
    }
    rush3(buff);
    return 0;
}

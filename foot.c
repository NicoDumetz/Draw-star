/*
** EPITECH PROJECT, 2023
** FOOT STAR
** File description:
** Foot of my star
*/

int draw_last(int index_bas)
{
    int i;

    for (i = 0; i < index_bas - 1 ; i++) {
        my_putchar(' ');
    }
    my_putchar('*');
}

int draw_last_n(int index_haut, int index_bas)
{
    int ind;

    for (ind = 0; ind <= index_haut - index_bas - 4; ind++) {
        my_putchar(' ');
    }
    my_putchar('*');
    my_putchar('\n');
}

void draw_foot(int n)
{
    int index_bas = 2 * n + 1;
    int index_haut = 4 * n + 1;
    int temp;

    for (temp = 0; temp < n - 1 ; temp++) {
        draw_last(index_bas);
        draw_last_n(index_haut, index_bas);
        index_bas++;
        index_haut--;
    }
    first_star(n);
}

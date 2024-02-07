/*
** EPITECH PROJECT, 2023
** HEADER STAR
** File description:
** header of my star
*/

int first_star(int n)
{
    int index;

    for (index = 0; index < n * 3; index++) {
        my_putchar(' ');
    }
    index++;
    my_putchar('*');
    my_putchar('\n');
    return index;
}

int draw_star(int index)
{
    int ind;

    for (ind = 0; ind <= index - 2; ind++) {
        my_putchar(' ');
    }
    my_putchar('*');
}

int draw_star_with_n(int index_haut, int index_bas)
{
    int i;

    for (i = 0; i < index_haut - index_bas - 1; i++) {
        my_putchar(' ');
    }
    my_putchar('*');
    my_putchar('\n');
}

void draw_head(int n)
{
    int index = first_star(n);
    int index_bas = index - 1;
    int index_haut = index + 1;
    int temp;

    for (temp = 0; temp < n - 1; temp++) {
        draw_star(index_bas);
        draw_star_with_n(index_haut, index_bas);
        index_bas--;
        index_haut++;
    }
}

/*
** EPITECH PROJECT, 2023
** STAR
** File description:
** Write a function that displays a star, based on its given size.
** If the size is 0, don’t display anything (but it is not an error)
*/

int draw_line_left(int index_bas)
{
    int temp;

    for (temp = 0; temp < index_bas; temp++) {
        my_putchar('*');
    }
}

int draw_line_right(int index_haut, int index_bas)
{
    int temp;

    for (temp = 0; temp < index_haut - index_bas - 3; temp++) {
        my_putchar(' ');
    }
    draw_line_left(index_bas);
    my_putchar('\n');
}

int star(unsigned int size)
{
    int n;

    n = size;
    if ( n == 1 ) {
        draw_one();
        return 0;
    }
    draw_head(n);
    draw_line_left(2 * n + 1);
    draw_line_right(4 * n + 1, 2 * n + 1);
    draw_body(n);
    draw_line_left(2 * n + 1);
    draw_line_right(4 * n + 1, 2 * n + 1);
    draw_foot(n);
    return 0;
}

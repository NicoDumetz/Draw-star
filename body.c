/*
** EPITECH PROJECT, 2023
** BODY STAR
** File description:
** body of my star
*/

int draw_body1(int index_bas)
{
    int temp;

    for (temp = 0; temp < index_bas + 1; temp++) {
        my_putchar(' ');
    }
    my_putchar('*');
}

int draw_body1_n(int index_haut, int index_bas)
{
    int temp;

    for (temp = 0; temp < index_haut - index_bas - 2; temp++) {
        my_putchar(' ');
    }
    my_putchar('*');
    my_putchar('\n');
}

int draw_body2(int index_bas)
{
    int temp;

    for (temp = index_bas; temp > 0 ; temp--) {
        my_putchar(' ');
    }
    my_putchar('*');
}

int draw_body2_n(int index_haut, int index_bas)
{
    int temp;

    for (temp = 0; temp < index_haut - index_bas; temp++) {
        my_putchar(' ');
    }
    my_putchar('*');
    my_putchar('\n');
}

void draw_body(int n)
{
    int temp;
    int index_bas = 0;
    int index_haut = 6 * n - 1;

    for (temp = 0; temp < n; temp++) {
        draw_body1(index_bas);
        draw_body1_n(index_haut, index_bas);
        index_bas++;
        index_haut--;
    }
    index_bas--;
    index_haut++;
    for ( temp = n; temp > 1; temp--) {
        draw_body2(index_bas);
        draw_body2_n(index_haut, index_bas);
        index_bas--;
        index_haut++;
    }
}

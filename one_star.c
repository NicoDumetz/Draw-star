/*
** EPITECH PROJECT, 2023
** STAR ONE
** File description:
** ogihgsoigiogsli sijlg
*/

void draw_one(void)
{
    int i;

    for ( i = 0; i < 3; i++)
        my_putchar(' ');
    my_putchar('*');
    my_putchar('\n');
    draw_one_body();
    for ( i = 0; i < 6; i++ ) {
        if ( i == 1 || i == 5 ) {
            my_putchar('*');
        } else {
            my_putchar(' ');
        }
    }
    my_putchar('\n');
    draw_one_body();
    for ( i = 0; i < 3; i++)
        my_putchar(' ');
    my_putchar('*');
    my_putchar('\n');
}

void draw_one_body(void)
{
    int i;

    for ( i = 0; i < 7; i++) {
        if ( i == 3 ) {
            my_putchar(' ');
        } else {
            my_putchar('*');
        }
    }
    my_putchar('\n');
}

/*
** EPITECH PROJECT, 2023
** STAR
** File description:
** Write a function that displays a star, based on its given size.
** If the size is 0, don’t display anything (but it is not an error)
*/
#include  <unistd.h>

void my_putchar(char c)
{
    write( 1, &c, 1);
}


int first_star(int n)
{
    int index;

    for (index = 0; index < n*3; index++) {
        my_putchar(' ');
    }
    index++;
    my_putchar('*');
    my_putchar('\n');
    return index;
}

// head
int draw_star(int index)
{
    int ind;
    for ( ind = 0; ind <= index-2 ; ind++) {
        my_putchar(' ');
    }
    my_putchar('*');
}


int draw_star_with_n(int index_haut, int index_bas)
{
    int i;
    for ( i = 0; i < index_haut-index_bas-1 ; i++) {
        my_putchar(' ');
    }
    my_putchar('*');
    my_putchar('\n');
}
//


//body
int draw_line_left(int index_bas)
{
    int temp;
    for ( temp = 0; temp < index_bas+1; temp++) {
        my_putchar('*');
    }
}

int draw_line_right(int index_haut, int index_bas) {
    int temp;
    for ( temp = 0; temp < index_haut-index_bas -3; temp++) {
	my_putchar(' ');
    }
    draw_line_left(index_bas);
    my_putchar('\n');
}



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

    for (temp = 0; temp < index_haut - index_bas - 2; temp++) {
        my_putchar(' ');
    }
    my_putchar('*');
    my_putchar('\n');
}





int is_negative(int nb)
{
    if ( nb < 0 ) {
        my_putchar('-');
        nb = nb * -1;
    }
    return nb;
}

int my_put_nbr(int nb)
{
    if ( nb == -2147483648) {
        write(1,"-2147483648",11);
        return 0;
    }
    nb = is_negative(nb);
    long nb_new = nb;
    if ( nb_new <= 9 ) {
        my_putchar(nb_new + 48);
    } else {
        my_put_nbr(nb_new / 10);
        my_putchar(nb_new % 10 + 48);
    }
    return 0;
}



int star(int n)
{
    int index = first_star(n);
    int index_bas = index -1;
    int index_haut = index + 1;
    int temp;
    for ( temp = 0; temp < n-1 ; temp++) {
        draw_star(index_bas);
        draw_star_with_n(index_haut, index_bas);
        index_bas--;
        index_haut++;
    }
    draw_line_left(index_bas);
    draw_line_right(index_haut, index_bas);
    
    index_bas = 0;
    index_haut = 6 * n -1;
    
    for ( temp = 0; temp < n; temp++) {
        draw_body1(index_bas);
        draw_body1_n(index_haut, index_bas);
        index_bas++;
        index_haut--;
    }
    for ( temp = n; temp >= 0; temp--) {
        draw_body2(index_bas);
        draw_body2_n(index_haut, index_bas);
        index_bas--;
        index_haut--;
    }
    
    return 0;
}

int main(void)
{
    star(2);
    return 0;
}

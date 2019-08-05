#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    // width of the building.
    int W;
    // height of the building.
    int H;
    scanf("%d%d", &W, &H);
    // maximum number of turns before game over.
    int N;
    scanf("%d", &N);
    int X0;
    int Y0;
    scanf("%d%d", &X0, &Y0);
    int x = X0;
    int y = Y0;
    int w = W;
    int h = H;

    int xmax = w;
    int xmin = 0;
    int ymax = h;
    int ymin = 0;

    fprintf(stderr, "h : %d, w : %d\n", h, w);

    int strcmp(char *str, char c)
    {
        int i = 0;
        while (str[i] != 0)
        {
            if (str[i] == c)
                return (1);
            i++;
        }
        return (0);
    }

    // game loop
    while (1) {
        // the direction of the bombs from batman's current location (U, UR, R, DR, D, DL, L or UL)
        char bomb_dir[4];
        scanf("%s", bomb_dir);
        bomb_dir[3] = 0;
        // Faire une memoire de X et Y;
        if (strcmp(bomb_dir, 'D'))
        {
            ymin = y;
            y = (ymax - y) / 2 + y;
           fprintf(stderr, "%d\n", y);
        }
        if (strcmp(bomb_dir, 'U'))
        {
            ymax = y;
            y = (y - ymin) / 2 + ymin;
            fprintf(stderr, "%d\n", y);
        }
        if (strcmp(bomb_dir, 'R'))
        {
            xmin = x;
            x = (xmax - x) / 2 + x;
            fprintf(stderr, "%d\n", x);
        }
        if (strcmp(bomb_dir, 'L'))
        {
            xmax = x;
            x = (x - xmin) / 2 + xmin;
            fprintf(stderr, "%d\n", x);
        }


        // Write an action using printf(). DON'T FORGET THE TRAILING \n
        // To debug: fprintf(stderr, "Debug messages...\n");


        // the location of the next window Batman should jump to.
        printf("%d %d\n", x, y);
    }

    return 0;
}

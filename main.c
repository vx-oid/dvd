#include <stdio.h>
#include <unistd.h>
#include <sys/ioctl.h>

int main() {

    struct winsize w;

    int x = 2;
    int y = 2;
    int dx = 1;
    int dy = 1;

    while (1) {
        ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);

        printf("\033[2J\033[%d;%dH[DVD]", y, x);
        fflush(stdout);

        usleep(100000);


        if (x + dx >= w.ws_col || x + dx <= 1) {
            dx = -dx;
        }
        if (y + dy >= w.ws_row || y + dy <= 1) {
            dy = -dy;
        }
        x = x + dx;
        y = y + dy;
    }
    return 0;
}

#include <stdio.h>
#include <time.h>

int main() {
        time_t seconds;
        int cur = time(NULL);
        int octepoch = 1633060800;
        int sec = cur - octepoch;
        int day = sec / 86400;
        printf("its october %d\n", day);
        return 0;
}

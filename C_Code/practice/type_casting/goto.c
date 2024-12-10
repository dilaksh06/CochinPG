#include <stdio.h>

int main() {
    for (int i = 1; i <= 8; i++) {

            if (i == 5) {
                goto exit; // Exit both loops when condition is met
            }
            printf("i = %d\n", i);
    }

exit:
    printf("Exited the nested loops.\n");
    return 0;
}

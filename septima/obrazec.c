#include <stdio.h>
 
void opakuj(int kolikrat, char znak) {
    while (kolikrat > 0) {
        putchar(znak);
        kolikrat--;
    }
}
 
int main(int argc, char *argv[]) {
    if (argc != 2) {
        return 0;
    }
 
    /*
     * Prvni argument je velikost vykreslovaneho obrazce.
     */
    int velikost;
    int ok = sscanf(argv[1], "%d", &velikost);
    if (ok != 1) {
        return 0;
    }
 
    /*
     * Zname velikost obrazce, muzeme jit kreslit.
     */
    for (int i = 0; i < velikost; i++) {
        opakuj(i + 1, 'X');
        printf("\n");
    }
 
    return 0; }

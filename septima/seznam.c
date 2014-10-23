#include <stdio.h>
#include <stdlib.h>
 
typedef struct info info_t;
 
struct info {
    int cislo;
    int pocet;
    info_t *dalsi;
};
 
info_t *vytvor(int cislo, info_t *dalsi) {
    info_t *vysledek = malloc(sizeof(info_t));
    if (vysledek == NULL) {
        // ...
    }
    vysledek->cislo = cislo;
    vysledek->pocet = 1;
    vysledek->dalsi = dalsi;
    return vysledek;
}
 
int main() {
    info_t *seznam = NULL;
 
    while (1) {
        int cislo;
        int ok = scanf("%d", &cislo);
        if (ok != 1) {
            break;
        }
 
        info_t *it = seznam;
        while (it != NULL) {
            if (it->cislo == cislo) {
                it->pocet++;
                break;
            }
            it = it->dalsi;
        }
 
        if (it == NULL) {
            // Ještì tam není
            seznam = vytvor(cislo, seznam);
        }
    }
 
    info_t *it = seznam;
    while (it != NULL) {
        printf("Cislo %d bylo %dx.\n", it->cislo, it->pocet);
        it = it->dalsi;
    }
 
    // Znièení seznamu
    it = seznam;
    while (it != NULL) {
        info_t *tmp = it;
        it = it->dalsi;
        free(tmp);
    }
    // Jenom pro jistotu
    seznam = NULL;
 
    return 0;
}

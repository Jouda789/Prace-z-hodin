#include <gd.h>
#include <stdio.h>
 
#define VYSTUP "cara.png"
#define VELIKOST 100
 
int main() {
    gdImagePtr im = gdImageCreate(VELIKOST, VELIKOST);
 
    int cerna = gdImageColorAllocate(im, 0, 0, 0);
    int bila = gdImageColorAllocate(im, 255, 255, 255);
 
    printf("Bila ma index %d, cerna %d.\n", bila, cerna);
 
    gdImageLine(im, 0, 0, VELIKOST - 1, VELIKOST - 1, bila);
 
    FILE *soubor = fopen(VYSTUP, "wb");
    if (soubor == NULL) {
        printf("Hups.\n");
        return 0;
    }
 
    gdImagePng(im, soubor);
 
    gdImageDestroy(im);
 
    fclose(soubor);
 
    return 0;
}

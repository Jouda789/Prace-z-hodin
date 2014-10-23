#include <stdio.h>
 
int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        printf("nazdar kamo, jmenujes se %s", argv[i]);
    }
 
    return 0;
}

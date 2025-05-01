#include <stdio.h>

int main() {
    char *ravi[] = {
        "RRRRRR    AAAAA    V     V     IIIII",
        "R     R  A     A   V     V       I",
        "R     R  AAAAAAA   V     V       I",
        "RRRRRR   A     A   V     V       I",
        "R   R    A     A   V     V       I",
        "R    R   A     A    V   V        I",
        "R     R  A     A      V        IIIII"
    };

    for (int i = 0; i < 7; i++) {
        printf("%s\n", ravi[i]);
    }

    return 0;
}
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
    int x = 5;
    x += 3;

    char* bytes = malloc(42);
    printf("HELLO FROM C %d\n", x);
    free(bytes);

    return 0;
}

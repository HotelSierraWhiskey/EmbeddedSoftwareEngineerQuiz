#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>


#define MAX_SQUARES 1024
#define min(a, b) ((a) < (b)) ? (a): (b)
#define max(a, b) ((a) > (b)) ? (a): (b)


uint32_t *get_perfect_squares(uint32_t N, uint32_t M) {

    static uint32_t squares[MAX_SQUARES];
    static uint8_t index;

    if (!N) {
        uint32_t alloc_size = sizeof(uint32_t) * index;
        uint32_t *perfect_squares = malloc(alloc_size);
        memcpy(perfect_squares, squares, alloc_size);
        return perfect_squares;
    }

    uint32_t small = min(N, M);
    uint32_t large = max(N, M);

    squares[index++] = small;

    return get_perfect_squares(small, large - small);
}


int main() {

    uint32_t *q1 = get_perfect_squares(6, 5);
    
    for (uint32_t i = 0; q1[i]; ++i) {
        printf("%ux%u\n", q1[i], q1[i]);
    }

    free(q1);
}





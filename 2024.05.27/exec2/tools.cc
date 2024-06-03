#include "tools.h"

int max_test(int* a, int* b) {
    if (*a > *b){
        *a = *a + 1;
        return *a;
    }else {
        *b = *b + 1;
        return *b;
    }
}

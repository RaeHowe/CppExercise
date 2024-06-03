#include <iostream>

using namespace std;

int compasc(const void* a, const void* b) {

   if (*((int*)a) < *((int*)b)){
        return -1;
   }else if (*((int*)a) > *((int*)b)){
        return 1;
   }

    return 0;
}

int main() {

    int array[] = {5, 1, 9, 24, 10, 12, 3, 15, 2, 8};

    qsort(array, sizeof(array) / sizeof(int), sizeof(int), compasc);

    for (int i = 0; i < sizeof(array) / sizeof(int); i++) {
        cout << array[i] << " ";
    }
}
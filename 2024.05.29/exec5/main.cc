#include <iostream>

using namespace std;

int main() {

    int array[2][5];

    array[0][0] = 100;
    array[0][1] = 200;
    array[0][2] = 300;

    array[1][0] = 400;
    array[1][1] = 500;
    array[1][2] = 600;

    int *p = (int *)array;

    cout << "The first element of the array is: " << *(p + 0) << endl;
    cout << "The second element of the array is: " << *(p + 1) << endl;
    cout << "The third element of the array is: " << *(p + 2) << endl;

    cout << "The 4 element of the array is: " << *(p + 3) << endl;
    cout << "The 5 element of the array is: " << *(p + 4) << endl;
    cout << "The 6 element of the array is: " << *(p + 5) << endl;
    cout << "The 7 element of the array is: " << *(p + 6) << endl;
    cout << "The 8 element of the array is: " << *(p + 7) << endl;

    return 0;
}
#include <iostream>

using namespace std;

int main() {

    int array[3];
    array[0] = 1423;
    array[1] = 6421;
    array[2] = 5871;

    // for (int i = 0; i < 3; i++) {
    //     cout << array[i] << endl;
    // }


    int length = sizeof(array) / sizeof(array[0]);
    // while (length > 0)
    // {
    //     cout << array[length-1] << endl;
    //     length--;
    // }
    
    // 数组清零
    // memset(array, 0, sizeof(array));

    int newArray[3];

    //数组拷贝： 目标数组， 源数组， 拷贝数组的内存长度
    memcpy(newArray, array, sizeof(array)); 

    int length2 = sizeof(newArray) / sizeof(newArray[0]);
    while (length2 > 0)
    {
        cout << newArray[length2-1] << endl;
        length2--;
    }
    

    return 0;
}
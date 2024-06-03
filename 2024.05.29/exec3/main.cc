#include <iostream>

using namespace std;

int main() {

    int a[] = {1, 3, 5, 6, 9, 10, 15, 19, 21, 25};

    int target = 19;
    int start = 0;
    int end = sizeof(a) / sizeof(int) - 1;

    while(start < end){
        int mid = (start + end) / 2;
        if (a[mid] == target) {
            cout << "Target found at index " << mid << endl;
            break;
        } 

        if (a[mid] < target) {
            start = mid + 1;
        }

        if (a[mid] > target) {
            end = mid - 1;
        }
    }

    return 0;
}
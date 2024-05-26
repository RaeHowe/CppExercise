#include <iostream>

#define RAEHOWE 12

using namespace std;
int main() {
  int a = 5;
  int b = 12;

  bool result = a > b;

  switch (result)
  {
  case true:
    cout << "a is greater than b" << endl;
    break;
  
  case false:
    cout << "b is greater than or equal to a" << endl;
    break;
  
  default:
    break;
  }


// while 循环
//   int c = 10;
//   int d = 20;
//   while (c < d)
//   {
//     c++;
//     cout << "c = " << c << endl;
//   }
  

  // for 循环
//   cout << "END~" << endl;

//   for (int i = 0; i < RAEHOWE; i++){
//     cout << "RAEHOWE" << i << endl;
//   }

//冒泡排序
  int arr[] = {4, 2, 1, 9, 10, 3};
  
  cout << "Before sorting: " << endl;

  int length = sizeof (arr) / sizeof (arr[0]);
  
  cout << length << endl;
  cout << "%%%%%%%%%%%%..." << endl;

  int index = 0;
  while (index < length){
    cout << "num:" << arr[index] << endl;
    index++;
  }

  cout << "Sorting..." << endl;
cout << "Sorting..." << endl;
cout << "Sorting..." << endl;
cout << "Sorting..." << endl;
cout << "Sorting..." << endl;
cout << "Sorting..." << endl;
cout << "Sorting..." << endl;
cout << "Sorting..." << endl;
cout << "Sorting..." << endl;

  for (int i = 0; i < length - 1; i++){
    for (int j = 0; j < length - 1 - i; j++){
        if (arr[j] > arr[j + 1]){
            int tmp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = tmp;
        }
    }
  }

  cout << "After sorting: " << endl;
  int index2 = 0;
  while (index2 < length){
    cout << "num:" << arr[index2] << endl;
    index2++;
  }


  //goto语句
    cout << "begin" << endl;
    int ii = 1;
bbb:
    cout << "hello world1" << endl;
    cout << "hello world2" << endl;
    cout << "hello world3" << endl;
    ii++;
    if (ii <= 3) goto bbb; 
    cout << "end" << endl;


  cout << "max is :" << max(2, 1) << endl;

  return 0;
}

int max(int a, int b) {
    if (a > b){
        return a;
    }else{
        return b;
    }
}
#include <iostream>
using namespace std;

void print_array(int* arr, size_t size) {
  for (int i = 0; i < size; i++) cout << arr[i] << '\t';
  cout << endl;
}

int increment(int a);
void increment(int* a);
void increment(int& a);

int* broken_returnArray(size_t size) {
  int ret[size];
  return ret;
}

int* better_returnArray(size_t size) {
  int* ret = new int[size];
  return ret;
}

int main() {
  int a = 10;   // a = 10
  int c = 5;    // a = 10, c = 5
  int* b = &a;  // a = 10, b->a, c = 5
  // b = 50; bad -- trying to set memory address to 10
  *b = 50;  // a = 50, b->a, c= 5
  b = &c;   // a = 50, b->c, c = 5
  *b = 10;  // a = 50, b->c, c= 10
  c = 5;    // a = 50, b->c, c = 5, also, *b = 5
  int* b = new int[4];
  int* test = new int[1, 2, 3, 4];  // I have no idea what this does, but it
                                    // doesn't set the values to 1,2,3,4
  cout << "b is: ";
  print_array(b, 4);
  // b is: 1710752   0       1704272 0
  cout << "test is: ";
  print_array(test, 4);
  // test is: 1710752        0       1704272 0

  int c[4];
  cout << "c is: ";
  print_array(c, 4);
  // c is: 1 0       37      0
  int d[4] = {1, 2};
  cout << "d is: ";
  print_array(d, 4);
  // d is: 1 2       0       0
}
#include <cstdint>
#include <iostream>

using namespace std;

int f();

int main() {
  int ret = f();
  cout << ret << " was returned" << endl;
}
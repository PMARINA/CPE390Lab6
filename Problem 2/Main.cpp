#include <cstdint>
#include <iostream>

using namespace std;

float add2floats(float a, float b);
void add2arraysIntoFirst(float* f1, float* f2, uint32_t a);

// Either use the documentation or compile with -S flag to find the correct
// instructions for dealing with floats and float registers.

int main() {
  float ret = add2floats(1.2345f, 1.0f);
  cout << ret << " was returned" << endl;
  float f0[] = {0.01, 0.02, 0.03, 0.04};
  float f1[] = {0.06, 0.03, 0.02, 0.04};
  add2arraysIntoFirst(f0, f1, 4);
  for (int i = 0; i < 4; i++) cout << f0[i] << "\t";
  cout << endl;
}
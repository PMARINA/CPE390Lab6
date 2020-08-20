#include <iostream>
#include<string>
#include<memory>
using namespace std;

void call(){
  int abc[4] = new int{1,2,3,4};
  int def[3];
  cout<<def[2]<<'\t'<<abc[2]<<endl;
  delete[] abc;
}

int main(){
  int x[] = {123,234,345,456};
  int y[] = {456,345,234,123};
  while(true)call();
  //delete[] abc; //prevent memory leaks
  int z[4];
  for (int i = 0; i <= 3; i++)
  {
    //z[0] = ...
    *(z + i) = *(x + i) + *(y + i);
  }
  cout << z[3] << endl;
  // *z = *x + *y;
  // z+1
  return 0;
}

/*
 * Things to do:
 * 
 * create an int
 * create a pointer to the int using address of
 * change the value of the int
 * create another int
 * use the same pointer to point to this int
 * change this's value, showing that pointers and addresses work one-off not linked forever
 * 
 * Arrays:
 * Do the same as yesterday with 
 * 
 * create an array local to a function and return the pointer to show that new is necessary
 */
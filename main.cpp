#include <iostream>
#include "dynarray.h"
using namespace std;

int main()
{



DynamicArray myArray;

myArray.store(8, 0);
myArray.store(12, 1);
myArray.store(24, 2);
myArray.store(30, 3);
myArray.store(42, 4);

cout << myArray.fetch(3);

cout << myArray.maxValue();

cout << myArray.minValue();

cout << myArray.averageValue();








    return 0;
}

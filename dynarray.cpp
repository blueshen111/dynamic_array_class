#include "dynarray.h"
using namespace std;

    DynamicArray::DynamicArray() {
        DynamicArray::DynamicArray(1);
    }

// this is the default constructor setting the
// array to have a capacity of 1
    DynamicArray::DynamicArray(int setsize) {
        size = setsize;
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = 1;
        }
    }

// this is the copy constructor
    DynamicArray::DynamicArray(const DynamicArray &def) {
        size  = def.size;
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = def.arr[i];
        }
    }

// this deletes old pointer
    DynamicArray::~DynamicArray() {
        delete[] arr;
    }

// this function stores a value in the array at a chosen index
    void DynamicArray::store(int value, int index) {
        arr[index] = value;
    }

// this function returns the value at the chosen index
    int DynamicArray::fetch(int index) {
        return arr[index];

    }


// this function returns the highest value in the array
    int DynamicArray::maxValue(){
        int counter = arr[0];
    //arr = new int[size];

        for(int i = 1; i <= 4; i++){
            if(counter < arr[i]) {
                counter = arr[i];
            }
        }
    return counter;
    }


// this function returns the lowest value in the array pass in the array in private iterate ja
    int DynamicArray::minValue(){
        int counter = arr[0];
        for(int i = 1; i <= 4; i++){
            if(counter > arr[i]) {
                counter = arr[i];
            }
        }
    return counter;
    }


//        }
//
//    }

    float DynamicArray::averageValue(){
        int counter = arr[0];
        for(int i = 1; i <= 4; i++){
            counter = counter + arr[i];

        }
return (counter/5);

    }

//
//int DynamicArray::getSize() {
//  return size;
//}
//
    void DynamicArray::resize(int newSize) {
        int *temp;
        temp = new int[newSize];
        for (int i = 0; i < (newSize); i++) {
            temp[i] = arr[i];
        }
        delete[] arr;
        arr = temp;
        size = newSize;
    }

    bool DynamicArray::operator==(DynamicArray a)  {
        if (a.size != size) return false;

        for (int i = 0; i < (a.size); i++) {
            if (a[i] != arr[i]) return false;
        }
    }

    bool DynamicArray::operator!=(DynamicArray a)  {
        if (a.size != size) return true;

        for (int i = 0; i < (a.size); i++) {
            if (a[i] != arr[i]) return true;
        }
    }

    int &DynamicArray::operator[](int index) {
        if ((index - 1) > size) {
            resize(index + 1);
        }
        return arr[index]; // returned as a reference
    }


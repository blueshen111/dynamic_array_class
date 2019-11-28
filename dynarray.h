class DynamicArray {

public:

  DynamicArray();
  DynamicArray(int setsize);
  DynamicArray(const DynamicArray &def);
  ~DynamicArray();

  void store(int value, int index); // this is good
  int fetch(int index); // this is good
  int maxValue();
  int minValue();
  float averageValue();

  //int getSize();
  void resize(int newSize);

  int &operator[](int index);
  bool operator==(DynamicArray);
  bool operator!=(DynamicArray);

private:

  int size;
  int *arr;

};


#include <iostream>
using namespace std;
void bubbleSort(int array[], int size) {
int temp = 0;
  for (int i = 0; i < size; ++i) {
    for (int j = 0; j < size - i; ++j) {
      if (array[j] > array[j + 1]) {

        temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
}


void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    cout << "  " << array[i];
  }
  cout << " " << endl;
}

int main() {
  int a[20] {6,1,7,4,8,13,53,24,64,24,63,0,23,52,99,52,2,1,1,49};
  int size = sizeof(a)/sizeof(a[0]);
  bubbleSort(a, size);
  
  cout << "Tabela e renditur: ";  
printArray(a, size);
}

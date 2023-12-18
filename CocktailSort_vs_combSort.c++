#include <iostream>
#include <cstdlib>
#include <chrono>
using namespace std;
using namespace std::chrono;
void CocktailSort(int a[], int n);
void FillArray(int a[], int n);
void printArray(int a[], int n);
void combSort(int a[], int n);
int main(){
int array_size = 1000000;
int* array = new int[array_size];
FillArray(array, array_size);
//printArray(array, array_size);
//cout << endl;
auto start = high_resolution_clock::now();
CocktailSort(array, array_size);
//combSort(array, array_size);
auto stop = high_resolution_clock::now();
//printArray(array, array_size);
auto duration = duration_cast<microseconds>(stop - start);
cout << duration.count() << endl;
//printArray(array, array_size);
}
void printArray (int a[], int n){
for (int i = 0; i < n; i++){
cout << a[i] << " ";
}
}
void FillArray (int a[], int n){
for (int i = 0; i < n; i++){
a[i] = rand();
}
}
void CocktailSort(int a[], int n)
{
bool swapped = true;
int start = 0;
int end = n - 1;
while (swapped) {
swapped = false;
for (int i = start; i < end; ++i) {
if (a[i] > a[i + 1]) {
swap(a[i], a[i + 1]);
swapped = true;
}
}
if (!swapped)
break;
swapped = false;
--end;
for (int i = end - 1; i >= start; --i) {
if (a[i] > a[i + 1]) {
swap(a[i], a[i + 1]);
swapped = true;
}
}
++start;
}
}
int getNextGap(int gap)
{
gap = (gap*10)/13;
if (gap < 1)
return 1;
return gap;
}
void combSort(int a[], int n){
int gap = n;
bool swapped = true;
while (gap != 1 || swapped == true){
gap = getNextGap(gap);
swapped = false;
for (int i = 0; i < n-gap; i++)
{
if (a[i] > a[i+gap])
{
swap(a[i], a[i+gap]);
swapped = true;
}
}
}

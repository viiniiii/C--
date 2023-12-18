#include <iostream>
#include <cmath>
using namespace std;
int kerkimibinar(int d, int a[], int target);
void FillArray(int a[], int array_size);
void printArray (int a[], int n);
void combSort(int a[], int n);
int main(){
int array_size = 120;
int k = 19264;
int array[array_size];
FillArray(array, array_size);
combSort(array, array_size);
printArray  (array, array_size);
cout << endl;
cout << kerkimibinar(array_size, array, k) << endl; 

}
int kerkimibinar(int d, int a[],int target){
int mes;
int m = 0;
while (m <= d){
mes = (m+d)/2;
if (a[mes] == target){
return mes;
}else if (target < a[mes]){
d = mes - 1;
}else{ 
m = mes + 1;
}
}
return -1;
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
}

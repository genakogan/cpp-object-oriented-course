#include <iostream>
#include <algorithm>

using namespace std;


int removeDuplicatesAndSort(int* arr, int size) {
   
    sort(arr, arr + size);

   
    int* temp = new int[size];
    int j = 0;
    for (int i = 0; i < size; i++) {
        if (i == 0 || arr[i] != arr[i - 1]) {
            temp[j++] = arr[i];
        }
    }

    for (int i = 0; i < j; i++) {
        arr[i] = temp[i];
    }

    delete[] temp;
    return j; 
}

int* createArray(int& size) {
    cout << "Enter array size: ";
    cin >> size;

    int* arr = new int[size];
    cout << "Enter " << size << " integers:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    size = removeDuplicatesAndSort(arr, size);
    return arr;
}

void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int* mergeArrays(int* arr1, int size1, int* arr2, int size2, int& newSize) {
    int* temp = new int[size1 + size2];
    for (int i = 0; i < size1; i++) temp[i] = arr1[i];
    for (int i = 0; i < size2; i++) temp[size1 + i] = arr2[i];

    newSize = removeDuplicatesAndSort(temp, size1 + size2);
    int* merged = new int[newSize];
    for (int i = 0; i < newSize; i++) {
        merged[i] = temp[i];
    }

    delete[] temp;
    return merged;
}

int main() {
    int size1, size2, size3;
    int* arr1 = createArray(size1);
    int* arr2 = createArray(size2);
    int* arr3 = mergeArrays(arr1, size1, arr2, size2, size3);

    cout << "Merged array (sorted without duplicates): ";
    printArray(arr3, size3);

    delete[] arr1;
    delete[] arr2;
    delete[] arr3;

    return 0;
}

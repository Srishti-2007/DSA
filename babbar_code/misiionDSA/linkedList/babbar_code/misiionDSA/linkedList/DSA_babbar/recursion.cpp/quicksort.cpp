#include<iostream>
using namespace std;

int partition(int arr[], int s, int e) {
    int pivotElement = arr[s];
    int count = 0;

    // find pivot's correct position
    for (int i = s + 1; i <= e; i++) {
        if (arr[i] <= pivotElement) {
            count++;
        }
    }

    int pivotIndex = s + count;
    swap(arr[s], arr[pivotIndex]); // place pivot in correct pos

    int i = s, j = e;

    // arrange left < pivot and right > pivot
    while (i < pivotIndex && j > pivotIndex) {
        while (arr[i] <= pivotElement) {
            i++;
        }
        while (arr[j] > pivotElement) {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pivotIndex;
}

void quicksort(int arr[], int s, int e) {
    if (s >= e) return;  // ✅ correct base case

    int p = partition(arr, s, e);

    // recursive calls
    quicksort(arr, s, p - 1);
    quicksort(arr, p + 1, e);
}

int main() {
    int arr[] = {8, 1, 13, 34, 56, 78};
    int n = 6;
    quicksort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

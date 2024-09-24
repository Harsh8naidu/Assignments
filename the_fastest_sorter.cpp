#include <vector>
#include <iostream>
using namespace std;

int partitionArr(vector<int>& arr, int low, int high) {

    // Choose the pivot
    int pivot = arr[high];

    
    int i = low - 1;

    
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSortArr(vector<int>& arr, int low, int high) {

    if (low < high) {

        // partition return index
        int pi = partitionArr(arr, low, high);

        
        quickSortArr(arr, low, pi - 1);
        quickSortArr(arr, pi + 1, high);
    }
}

int the_fastest_sorter() {

    vector<int> arr = {4, 8, 1, 3, 10, 22, 12, 9, 2};
    int n = arr.size();
    quickSortArr(arr, 0, n - 1);
    cout << "Sorted Array\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

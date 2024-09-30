#include <vector>
#include <iostream>
#include <random>

// Speed of Algo : 0.0628

void CountingSort(std::vector<int>& arr, int maxVal) {

    std::vector<int> count(maxVal + 1, 0);

    // Counting the number of time an element appear in the array (arr)

    for (int i = 0; i < arr.size(); i++) {
        
        count[arr[i]]++;
    }

    // Sorting the array

    int index = 0;

    for (int i = 0; i <= maxVal; i++) {
        while (count[i] > 0) {

            arr[index++] = i;
            count[i]--;
        }
    }
}

void GenerateRandomNums(std::vector<int>& arr) {

    std::random_device rd;
    std::mt19937 gen(rd());

    std::uniform_int_distribution<> distrib(1, 100);

    for (int i = 0; i < arr.size(); i++) {

        arr[i] = distrib(gen);

    }
}

int TheFastestSorter() {

    std::vector<int> arr(1000);
    GenerateRandomNums(arr);
    CountingSort(arr, 100);
    std::cout << "Sorted Array\n";
    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }
    return 0;
}


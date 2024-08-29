#include <iostream>
#include <map>
#include <vector>

int main() {
    int size;
    std::cout << "Enter size of the array: ";
    std::cin >> size;

    // Use a vector instead of a fixed-size array
    std::vector<int> arr(size);

    std::cout << "Enter elements in the array: " << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << "Enter Element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    // Display the entered array
    std::cout << "Entered Array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Create a map to store the frequency of each element
    std::map<int, int> freqMap;
    int maxFreq = 0;
    int mostFrequent = arr[0];  // Initialize with the first element

    // Calculate the frequency of each element
    for (int i = 0; i < size; i++) {
        freqMap[arr[i]]++;  // Increment the frequency of the current element
        if (freqMap[arr[i]] > maxFreq) {
            maxFreq = freqMap[arr[i]];
            mostFrequent = arr[i];
        }
    }

    // Display the most occurred number
    std::cout << "Most occurred number: " << mostFrequent << std::endl;

    return 0;
}


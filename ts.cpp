#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

int main() {
    // Input vector
    std::vector<int> vec = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};

    // Map to store the frequency of each element
    std::map<int, int> frequencyMap;

    // Count frequencies of elements
    for (int num : vec) {
        frequencyMap[num]++;
    }

    // Vector to store the frequencies
    std::vector<int> frequencyVector;

    // Fill the frequency vector with the frequencies from the map
    for (const auto& entry : frequencyMap) {
        frequencyVector.push_back(entry.second);
    }

    // Sort the frequency vector in descending order
    std::sort(frequencyVector.begin(), frequencyVector.end(), std::greater<int>());

    // Variable to store the sum
    int sum = 0;
    int lastAddedElement = -1;  // Keep track of the last added element for comparison

    // Output the sum logic based on the frequency rules
    std::cout << "Adding elements with the highest frequency, skipping adjacent elements:" << std::endl;
    
    // For each frequency in the sorted frequencyVector, find the corresponding element(s) in the map
    for (int freq : frequencyVector) {
        for (const auto& entry : frequencyMap) {
            // Check if frequency matches and it's not adjacent to the last added element
            if (entry.second == freq) {
                if (lastAddedElement == -1 || (entry.first != lastAddedElement + 1 && entry.first != lastAddedElement - 1)) {
                    sum += entry.first * entry.second;  // Add the element multiplied by its frequency
                    std::cout << "Adding element: " << entry.first << " * " << entry.second << " = " << entry.first * entry.second << std::endl;
                    lastAddedElement = entry.first;  // Update the last added element
                } else {
                    std::cout << "Skipping element: " << entry.first << " due to adjacent rule." << std::endl;
                }
                // To avoid duplicate checks for the same frequency
                frequencyMap.erase(entry.first);
                break;  // Break out of the inner loop once the match is found
            }
        }
    }

    // Output the final sum
    std::cout << "Final sum: " << sum << std::endl;

    return 0;
}

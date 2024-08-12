//Remove adjacent dublicates element in an array 
#include <iostream>
#include <string>

std::string removeAdjacentDuplicates(const std::string& str) {
    if (str.empty()) {
        return "";
    }
    
    std::string result;
    result.reserve(str.size()); // Reserve space to improve efficiency
    
    // Iterate through the string
    for (char ch : str) {
        // If result is not empty and the last character is the same as the current
        if (!result.empty() && result.back() == ch) {
            // Remove the last character (i.e., pop from stack)
            result.pop_back();
        } else {
            // Otherwise, add the current character to the result
            result.push_back(ch);
        }
    }
    
    return result;
}

int main() {
    std::string input = "abbaca";
    std::string result = removeAdjacentDuplicates(input);
    
    std::cout << "Original string: " << input << std::endl;
    std::cout << "After removing adjacent duplicates: " << result << std::endl;

    return 0;
}

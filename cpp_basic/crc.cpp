#include <iostream>
#include <vector>
#include <string>

// Function to perform the division and return the remainder
std::string crcCheck(const std::string& data, const std::string& divisor) {
    std::string remainder = data.substr(0, divisor.size() - 1);
    
    for (size_t i = divisor.size() - 1; i < data.size(); i++) {
        if (remainder[0] == '1') {
            for (size_t j = 0; j < divisor.size(); j++) {
                remainder[j] = (remainder[j] == divisor[j]) ? '0' : '1';
            }
        } else {
            for (size_t j = 0; j < divisor.size(); j++) {
                remainder[j] = (remainder[j] == '0') ? '0' : '1';
            }
        }
        
        if (i + 1 < data.size()) {
            remainder = remainder.substr(1) + data[i + 1];
        } else if (i + 1 == data.size()) {
            remainder = remainder.substr(1);
        }
    }
    
    return remainder;
}

int main() {
    std::string data, divisor;
    
    std::cout << "Enter the binary data: ";
    std::cin >> data;
    std::cout << "Enter the divisor (polynomial): ";
    std::cin >> divisor;

    std::string remainder = crcCheck(data, divisor);
    
    if (remainder.find('1') == std::string::npos) {
        std::cout << "Data is correct. No errors detected." << std::endl;
    } else {
        std::cout << "Error detected in the data." << std::endl;
    }

    return 0;
}

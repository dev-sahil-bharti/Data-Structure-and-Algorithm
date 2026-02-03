#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers and numbers ending with 0 (except 0)
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int reversedHalf = 0;

        while (x > reversedHalf) {
            reversedHalf = reversedHalf * 10 + x % 10;
            x /= 10;
        }

        // For even digits OR odd digits
        return (x == reversedHalf || x == reversedHalf / 10);
    }
};

int main() {
    Solution sol;
    
    cout << "121 is palindrome: " << sol.isPalindrome(121) << endl;
    cout << "-121 is palindrome: " << sol.isPalindrome(-121) << endl;
    cout << "10 is palindrome: " << sol.isPalindrome(10) << endl;
    cout << "0 is palindrome: " << sol.isPalindrome(0) << endl;
    cout << "12321 is palindrome: " << sol.isPalindrome(12321) << endl;
    
    return 0;
}

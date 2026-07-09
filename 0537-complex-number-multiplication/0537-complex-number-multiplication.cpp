// class Solution {
// public:
//     string complexNumberMultiply(string num1, string num2) {
//         int i*i=-1;
//     }
// };
#include <string>
#include <vector>
#include <sstream>
using namespace std;

class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
        // Parse first complex number
        int plus1 = num1.find('+');
        int real1 = stoi(num1.substr(0, plus1));
        int imag1 = stoi(num1.substr(plus1 + 1, num1.size() - plus1 - 2)); // -2 to remove 'i'
        
        // Parse second complex number
        int plus2 = num2.find('+');
        int real2 = stoi(num2.substr(0, plus2));
        int imag2 = stoi(num2.substr(plus2 + 1, num2.size() - plus2 - 2)); // -2 to remove 'i'
        
        // Apply complex multiplication: (a+bi)(c+di) = (ac-bd) + (ad+bc)i
        int resultReal = real1 * real2 - imag1 * imag2;
        int resultImag = real1 * imag2 + imag1 * real2;
        
        // Format result as string
        return to_string(resultReal) + "+" + to_string(resultImag) + "i";
    }
};
#include <iostream>

using namespace std;

int main()
{

}

class Solution {
public:
    string defangIPaddr(string address) {
        std::string result;
        std::string f;

        for (int i = 0; i < address.length(); i++) {
            if (address[i] != '.') {
                result += address[i];
            }

            else {
                f = "[.]";
                result += f;
            }
        }
        return result;
    }
};
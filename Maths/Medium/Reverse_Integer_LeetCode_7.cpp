#include <iostream>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int result=0;
        while (x != 0){
            if ((result > INT_MAX/10) || (result < INT_MIN/10)){
                return 0;
            }
            int remainder = x % 10;
            result = (result * 10) + remainder;
            x = x / 10;
        }

        return result;
    }
};

int main() {

    int x = 156;
    Solution Obj1;
    cout << "Reverse Integer for x is: " << Obj1.reverse(x);


    return 0;
}
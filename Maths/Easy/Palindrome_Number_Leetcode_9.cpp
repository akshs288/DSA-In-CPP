#include <iostream>
using namespace std;

class Solution{
    public:
        bool isPalindrome(int x) {
            if (x< 0)
                return false;
            int last_d,new_x=x;
            long long int result=0;
            while (x > 0){
                last_d = x % 10;
                result = result*10+last_d;
                x=x/10;
            }
            if (new_x==result)
                return true;
            else
                return false;
    }
};

int main() {
    Solution obj1;
    int x = 121;
    bool result = obj1.isPalindrome(x);

    cout << result;

    return 0;
}
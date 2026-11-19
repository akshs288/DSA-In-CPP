#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int len_hay = haystack.length();
        int len_needle = needle.length();

        if (len_needle > len_hay){
            return -1;
        };
        for(int i = 0;i < len_hay;i++){
            for (int j = 0;j < len_needle;j++){
                if (haystack[i+j] != needle[j]){
                    break;
                }
                if (j == len_needle-1){
                    return i;
                }
            }
        }
        return -1;
    }
};


int main() {
    
    Solution obj1;

    string haystack = "sadbutsad";
    string needle = "sad";

    cout << obj1.strStr(haystack,needle);

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums){
        int i=0,j=1;

        while (j < nums.size()){
            if (!(nums[i] == nums[j])){
                i++;
                nums[i] = nums[j];
            }
            j++;
        }
        return i+1;
}
};

int main() {
    
    // Testcases
    Solution obj1;
    vector<int> m1= {1,1,2};
    cout << obj1.removeDuplicates(m1) << "\n";

    vector<int> m2 = {0,0,1,1,1,2,2,3,3,4};
    cout << obj1.removeDuplicates(m2) << "\n";
    

    return 0;
}
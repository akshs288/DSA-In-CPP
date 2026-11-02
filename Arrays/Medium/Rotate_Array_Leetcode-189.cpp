#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        rev_arr(nums,n-k,n-1);
        rev_arr(nums,0,n-k-1);
        rev_arr(nums,0,n-1);
    }
    void rev_arr(vector<int> &nums1,int st,int end){
        while (st <= end){
            swap(nums1[st],nums1[end]);
            st++;
            end--;
        }
    }
};

int main() {
    
    // Object is created
    Solution obj1;

    // Test Cases
    vector<int> nums = {1,2,3,4,5,6,7};
    int k = 3;
    obj1.rotate(nums,k);

    for (int i:nums){
        cout << i << "\n";
    };

    return 0;
}
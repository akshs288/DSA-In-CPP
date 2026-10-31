#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        vector<int> new_v;
        for (int i = 0;i < nums.size();i++){
            int first = nums[i];
            int complement = target-first;
            // Now we need to check is compl in unordered map or not ??
            if (m.find(complement) != m.end()){
                new_v.push_back(i);
                new_v.push_back(m[complement]);
                break;
            }
            else
                m[first]=i;
        }
        return new_v;
    }
};

int main() {
    
    // Running the Edge cases
    vector<int> v= {2,7,11,15};
    int target = 9;

    Solution s;
    vector<int> answer = s.twoSum(v,target);

    for (int i = 0; i < answer.size();i++){
        cout << answer[i] << " " << endl;
    }
    
    return 0;
}
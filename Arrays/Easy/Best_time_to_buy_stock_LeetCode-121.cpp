#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
    public:
        int max_profit(vector<int>&prices){
    
            int n = prices.size();
            int max_profit = 0;
            int best_buy = prices[0];
            for (int i = 1;i < n;i++){
                if (prices[i] > best_buy){
                    max_profit = max(max_profit,prices[i]-best_buy);
                }
                best_buy = min(best_buy,prices[i]);
            }
            return max_profit;
        }
};

int main() {
    
    Solution obj1;
    vector<int> v1 = {7,1,5,3,6,4};
    int result = obj1.max_profit(v1);
    cout << "Maximum Profit is: "<< result;

    return 0;
}
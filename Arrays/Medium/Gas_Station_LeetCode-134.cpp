#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
        int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int gas_sum = 0;
        int cost_sum = 0;
        for (int j = 0;j < gas.size();j++){
            gas_sum += gas[j];
            cost_sum += cost[j];}

        if (gas_sum < cost_sum)
            return -1;

        int start = 0;
        int curr_gas = 0;
        for (int i = 0; i < gas.size();i++){
            curr_gas += gas[i]-cost[i];

            if (curr_gas < 0){
                curr_gas = 0;
                start = i+1;}                      
        }
        return start;
    }
};



int main() {
    
    Solution obj1;
    vector<int> gas = {1,2,3,4,5};
    vector<int> cost = {3,4,5,1,2};

    obj1.canCompleteCircuit(gas,cost);

    return 0;
}
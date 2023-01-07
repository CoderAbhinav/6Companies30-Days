#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <iomanip>
#include <climits>
#define FAST_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long
#define __debugging__ false
#define logm(msg) if(__debugging__) cout<< __func__<<" ("<<__LINE__<<")\t: "<< msg <<endl;
#define logd(x) if(__debugging__) cout<<__func__<<" ("<<__LINE__<<")\t: "<<#x<<" = "<<x<<endl;
#define MOD 1000000007

using namespace std;

class Solution {
    vector<int> next;
    vector<int> len;
    int n;
public:
    Solution() {
        next = vector<int>(1001, -1);
        len = vector<int>(1001, 0);
    }

    int helper(vector<int>& nums, int idx) {


        if (idx >= n) return 0;
        if (len[idx] != 0) {
            return len[idx];
        }

        for (int i = idx + 1; i < n; i++) {
            if (nums[i] % nums[idx] == 0) {
                int ans = helper(nums, i);
                // len[idx] = max(1 + ans, len[idx]);
                if ((1 + ans) > len[idx]) {
                    len[idx] = 1 + ans;
                    next[idx] = i;
                }
            }
        }

        return len[idx];
    }

    vector<int> largestDivisibleSubset(vector<int>& nums) {
        n = nums.size();        
        sort(nums.begin(), nums.end());
        int start_id = 0, max_len = 0;
        for (int i = 0; i < n; i++) {
            int ans = helper(nums, i);
            if (max_len < (1 + ans)) {
                max_len = ans;
                start_id = i;
            }
        }  
        cout << start_id;
        vector<int> res;

        while (start_id != -1) {
            res.push_back(nums[start_id]);
            start_id = next[start_id];
        }

        return res;
    }
};
class Driver
{
private:

public:
    void drive(int);
};

void Driver::drive(int caseNo){
    /**
     * @brief 
     * this function solves the cp 
     * questions and handles the 
     * input too
     */
    logd(caseNo);
}

int main()
{
    FAST_IO;
    std::cout << std::fixed;
    std::cout << std::setprecision(6);
    int testCases = 1;
    // cin >> testCases;
    Driver cp_solver = Driver();
    
    for (int i = 0; i < testCases; i++)
    {
        cp_solver.drive(i+1);
    }

    return 0;
}

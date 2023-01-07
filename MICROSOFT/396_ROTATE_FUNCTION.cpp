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
public:
    int maxRotateFunction(vector<int>& nums) {
        int n = nums.size(), sum = 0, res = 0, curr = 0;
        for (int i = 0; i < n; i++) {
            res += nums[i] * i;
            sum += nums[i];
        }

        curr = res;


        for (int i = 1; i < n; i++) {
            curr += sum - n * nums[n - i];
            res = max(res, curr);
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

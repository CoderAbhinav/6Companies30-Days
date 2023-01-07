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
    vector<vector<int>> combinationSum3(int k, int n, int x = 1) {
        // cout << "(" << k << "," << n << "," << x << ")\n";
        vector<vector<int>> curr;

        if (n < 0 || x > 9 || x > n) return curr;
        if (k == 1 && n < 10) {
            curr.push_back({n});
            return curr;
        }

        for (int i = x; i < 10; i++) {
            vector<vector<int>> res = combinationSum3(k - 1, n - i, (i + 1));
            if (res.size() != 0) {
                for (auto r: res) {
                    vector<int> temp; temp.push_back(i);
                    for (auto j: r) {
                        temp.push_back(j);
                    }
                    curr.push_back(temp);
                }
            }
        }

        return curr;

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

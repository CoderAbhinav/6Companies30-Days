#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <iomanip>
#include <climits>
#include <stack>
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
    bool isNum(string s) {
        return s[0] >= '0' && s[0] <= '9';
    }

    
    int evalRPN(vector<string>& t) {
        stack<long long int> st;

        for (int i = 0; i < t.size(); i++) {
            if (t[i] == "+") {
                long long int op1 = st.top(); st.pop();
                long long int op2 = st.top(); st.pop();

                st.push(op1 + op2);
            } else if (t[i] == "-") {
                long long int op1 = st.top(); st.pop();
                long long int op2 = st.top(); st.pop();

                st.push(op2 - op1);
            } else if (t[i] == "*") {
                long long int op1 = st.top(); st.pop();
                long long int op2 = st.top(); st.pop();

                st.push(op1 * op2);
            } else if (t[i] == "/") {
                long long int op1 = st.top(); st.pop();
                long long int op2 = st.top(); st.pop();

                st.push(op2 / op1);
            } else {
                st.push(stoi(t[i]));
            }
        }


        return st.top();
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

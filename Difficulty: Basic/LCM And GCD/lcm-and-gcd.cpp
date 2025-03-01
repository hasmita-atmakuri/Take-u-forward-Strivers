//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> lcmAndGcd(int a, int b) {
        int A=a, B=b;
        while(b!=0){
            int rem=a%b;
            a=b;
            b=rem;
        }
        int gcd=a;
        int lcm=(A*B)/gcd;
        vector<int> v;
        v.push_back(lcm);
        v.push_back(gcd);
        return v;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int A, B;

        cin >> A >> B;

        Solution ob;
        vector<int> ans = ob.lcmAndGcd(A, B);
        cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
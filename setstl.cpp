#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
      int q;  // Number of queries
    cin >> q;

    set<int> s;  // Set to store unique elements

    // Process each query
    for (int i = 0; i < q; i++) {
        int queryType, x;
        cin >> queryType >> x;

        if (queryType == 1) {
            s.insert(x);  // Add x to the set
        } 
        else if (queryType == 2) {
            s.erase(x);  // Remove x from the set
        } 
        else if (queryType == 3) {
            // Check if x is present in the set
            if (s.find(x) != s.end()) {
                cout << "Yes" << endl;  // x found in set
            } else {
                cout << "No" << endl;  // x not found in set
            }
        }
    }



    return 0;
}




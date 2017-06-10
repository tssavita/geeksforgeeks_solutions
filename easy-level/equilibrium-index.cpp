#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std; 

int main() {
    int t;
    cin>>t; 
    for (int i = 0; i < t; i++) {
        int n;
        cin>>n;
        
        int arr[n];
        for (int j = 0; j < n; j++) 
            cin>>arr[j];
        int sum_before = 0, equilibrium = -1, sum_after = 0;
        for (int j = 1; j < n; j++) {
            sum_after += arr[j];
        }
        //cout << "s" << sum_after << endl;
        for (int j = 0; j < n-1; j++) {
            if (sum_before == sum_after) {
                equilibrium = j;
                break;
            }
            else {
                sum_before += arr[j];
                sum_after -= arr[j+1];
            }
            
            //cout << j << " " << sum_before << " " << sum_after << endl;
        }
        if (n == 1)
            cout << "1" << endl;
        else if (equilibrium < 0)
            cout << "-1" << endl;
        else 
            cout << equilibrium + 1 << endl;
    }
	return 0;
}

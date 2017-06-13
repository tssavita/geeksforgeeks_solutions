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
        int k;
        cin>>k;
        int arr[n];
        for (int j = 0; j < n; j++)
            cin>>arr[j];
        
        for (int j = 0; j <= n-k; j++) {
            int k_max = INT_MIN;
            for (int k_i = 0; k_i < k; k_i++) {
                if (k_max < arr[j+k_i])
                    k_max = arr[j+k_i];
            }
            cout << k_max << " "; 
        }
        cout << endl;
    }
	return 0;
}

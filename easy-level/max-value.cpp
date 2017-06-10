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
	        
	    int max_diff = INT_MIN, max_index_k, max_index_j;
	    for (int j = 0; j < n; j++) { 
	        for (int k = 0; k < n; k++) {
	            if (k != j) {
    	            int diff = (arr[j] - j ) - (arr[k] - k);
    	            if (max_diff < diff) 
	                    max_diff = diff;
	            }
	        }
	    }
	    cout << max_diff << endl;
	}
	
	return 0;
}

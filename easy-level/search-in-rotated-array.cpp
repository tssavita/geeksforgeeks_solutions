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
	    long n;
	    cin>>n;
	    
	    long arr[n];
	    for (long j = 0; j < n; j++) 
	        cin>>arr[j];
	    
	    long k;
	    cin>>k;
	    
	    int low = 0, high = n-1;
	    bool flag = false; 
	    while (low <= high) {
	        int mid = (low + high)/2;
	        //cout << mid << " " << arr[mid] << low << " " << high << endl; 
	        if (arr[mid] == k) {
	            flag = true;
	            cout << mid << endl; 
	            break;
	        }
	        else if (arr[low] <= arr[mid]) {
	            if (arr[low] <= k && k <= arr[mid]) 
	                high = mid-1;
	            else 
	                low = mid+1;  
	        }
	        else if (arr[mid] <= arr[high]) { 
	            if (arr[mid] <= k && k <= arr[high])
	                low = mid+1; 
	            else 
	                high = mid-1; 
	        }
	    }
	    if (flag == false)
	        cout << "-1" << endl;
	}
	return 0;
}

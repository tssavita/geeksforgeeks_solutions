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
	for (int i = 0; i < t; i++ ) {
	    int n;
	    cin>>n;
	    int arr[n];
	    for (int j = 0; j < n; j++) {
	        cin>>arr[j];
	    }
	    int min_ele = INT_MAX;
	    int low = 0, high = n-1;
	    while (low < high) { 
	        int mid = (low + high)/2;
	        if (mid < high && arr[mid+1] < arr[mid]) {
	            min_ele = arr[mid+1]; 
	            break;
	        }
	        else if (low < mid && arr[mid-1] > arr[mid]) {
	            min_ele = arr[mid];
	            break;
	        }
	        if (arr[high] > arr[mid])
	            high = mid - 1; 
	        else 
	            low = mid + 1; 
	    }
	    if (min_ele == INT_MAX)
	        cout << arr[0] << endl;
	    else 
	        cout << min_ele << endl; 
	}
	return 0;
}

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
        vector<int> arr;
	    for (int j = 0; j < n; j++) {
	        int temp;
	        cin>>temp; 
	        arr.push_back(temp);
	    }
	    int curr_max = arr[0], max_so_far = arr[0];
	    for (int j = 1; j < n; j++) {
    	    curr_max = max(arr[j], curr_max + arr[j]);
    	    max_so_far = max(curr_max, max_so_far);
	    }
	    cout << max_so_far << endl;   
	}
	return 0;
}

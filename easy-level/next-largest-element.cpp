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
	    for (int j = 0; j< n; j++) {
	        int temp;
	        cin>>temp;
	        arr.push_back(temp);
	    }
	    vector<int> next_big;
	    int max_ele = arr[0];
	    for (int j = 0; j < n-1; j++) {
	        bool flag = false; 
	        for (int k = j+1; k < n; k++) {
	            if (arr[j] < arr[k]) {
	                flag = true;
                    cout << arr[k] << " "; 
	                break;
	            }
	        }
	        if (flag == false)
	            cout << "-1" << " ";
	    }
	    cout << "-1" << endl;
	}
	
	return 0;
}

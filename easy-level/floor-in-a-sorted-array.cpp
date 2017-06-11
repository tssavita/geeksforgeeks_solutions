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
	    int x;
	    cin>>x;
	    vector<int> arr;
	    for (int j = 0; j < n; j++) {
	        int temp;
	        cin>>temp; 
	        arr.push_back(temp);
	    }
	    int floor_index = -1;
	    for (int j = 0; j < n; j++) {
	        if (arr[j] <= x)
	            floor_index = j; 
	    }
	    cout << floor_index << endl;
	}
	return 0;
}

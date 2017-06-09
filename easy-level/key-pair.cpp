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
	    int x;
	    cin>>n>>x;
	    vector<int> input; 
	    bool flag = false; 
	    unordered_set<int> complement;
	    for (int j = 0; j < n; j++) { 
	        int temp;
	        cin>>temp;
	        input.push_back(temp);
	        complement.insert(x-temp);
	    }
	    for (int j = 0; j < n; j++) {
	        if (complement.find(input[j]) != complement.end()) {
	            flag = true; 
	            cout << "Yes" << endl;
	            break;
	        }
	    }
	    if (flag == false)
	        cout << "No" << endl;
	}
	return 0;
}

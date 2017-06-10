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
	    
	    int count = 0;
	    for (int j = 0; j < n-1; j++) {
	        for (int k = j+1; k < n; k++) {
	            if (arr[j] > arr[k])
	                count++; 
	        }
	    }
	    cout << count << endl;
	}
	
	return 0;
}

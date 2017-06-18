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

using namespace std; 

int main() {
	int t;
	cin>>t; 
	for (int i = 0; i < t; i++) {
	    int n;
	    cin>>n;
	    int arr[n];
	    long long int left[n];
        long long int right[n];
	    for(int j = 0; j < n; j++) {
	       cin>>arr[j];
           left[j] = 1; 
           right[j] = 1; 
	    }
	    
	    for(int k = 1; k < n; k++) 
            left[k] = arr[k-1] * left[k-1];
	    
        for (int k = n-2; k >= 0; k--) 
            right[k] = arr[k+1] * right[k+1];
        
	    for (int j = 0; j < n; j++)
	        cout << left[j] * right[j] << " ";
	    cout << endl;
	}
	return 0;
}

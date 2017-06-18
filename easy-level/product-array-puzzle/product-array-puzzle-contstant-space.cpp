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
           prod[j] = 1; 
	    }
	    
	    for(int k = 1; k < n; k++) 
            prod[k] = arr[k-1] * prod[k-1];
	    
        int temp = prod[n-1];
        prod[n-1] = 1; 
	    for (int j = n-2; j >= 0; j--) {
            temp = prod[j+1];
            prod[j] = arr[j+1] * prod[j+1];
	        cout << prod[j]  << " ";
        }

	    cout << endl;
	}
	return 0;
}

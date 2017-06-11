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
	    int j = 0; 
	    int count = 0; 
	    int buy[n/2 + 1];
	    int sell[n/2 + 1];
	    while (j < n-1) { 
	        while ( (j < n-1) && arr[j+1] <= arr[j] )
	            j++;
	        
	        if (j == n-1)
	            break; 
	       
	        buy[count] = j++;
	            
	        while (j < n && arr[j] >= arr[j-1])
	            j++;
	        
	        sell[count] = j-1; 
	        count++; 
	    }
	    if (count == 0) {
	        cout << "No Profit";
	    }
	    else { 
    	    for (int k = 0; k < count; k++)
	            cout << "(" << buy[k] << " " << sell[k] << ") "; 
	    }
	    cout << endl;
	}
	return 0;
}

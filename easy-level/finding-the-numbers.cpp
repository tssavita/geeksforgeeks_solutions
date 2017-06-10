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
	    int arrSize = n*2 + 2;
	    int arr[arrSize];
	    
	    for (int j = 0; j < arrSize; j++) 
	        cin>>arr[j];
	    
	    int x = 0, y = 0, xor_bit = arr[0];
	    int set_bit;
	    
	    for (int j = 1; j < arrSize; j++)
	        xor_bit ^= arr[j];
	    
	    set_bit = xor_bit & ~(xor_bit-1);
	    
	    for (int j = 0; j < arrSize; j++) {
	        if (arr[j] & set_bit) 
	            x = x ^ arr[j];
	        else 
	            y = y ^ arr[j]; 
	    }
	    if ( x < y )
	        cout << x << " " << y << endl;
	    else 
            cout << y << " " << x << endl;	    
	}
	return 0;
}

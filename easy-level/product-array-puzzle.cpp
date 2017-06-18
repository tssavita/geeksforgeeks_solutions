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
	    long long int prod[n];
	    for(int j = 0; j < n; j++) {
	        cin>>arr[j];
	        prod[j] = 1;
	    }
	    for(int k = 0; k < n; k++) {
	        for(int l = 0; l < n; l++) {
	            if (l != k)
	                prod[k] *= arr[l];
	        }
	    }
	    for (int j = 0; j < n; j++)
	        cout << prod[j] << " ";
	    cout << endl;
	}
	return 0;
}

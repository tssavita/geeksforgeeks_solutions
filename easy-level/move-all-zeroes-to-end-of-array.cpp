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
	    int count = 0; 
	    for (int j = 0; j < n; j++) 
	        cin>>arr[j];
	    
	    for (int j = 0; j < n; j++) {
	        if (arr[j] != 0)
	            arr[count++] = arr[j];
	    }
	    int k = count;
	    while (k < n) {
	        arr[k++] = 0;
	    }
	    for (int j = 0; j < n; j++)
	        cout << arr[j] << " ";
	    cout << endl;
	}
	return 0;
}

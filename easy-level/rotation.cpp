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

int minimum(int arr[], int n) {
    int low = 0, high = n-1; 
    int minele_index;
    while (low < high) {
        int mid = (low + high)/2;
        if (mid < high && arr[mid+1] < arr[mid]) {
            minele_index = mid+1; 
            break; 
        }
        else if (low < mid && arr[mid-1] > arr[mid]) {
            minele_index = mid;
            break; 
        }
        if (arr[mid] < arr[high])
            high = mid-1;
        else 
            low = mid+1; 
    }
    return minele_index; 
}

int main() {
	int t; 
	cin>>t; 
	for (int i = 0; i < t; i++) {
	    int n;
	    cin>>n; 
	    int arr[n];
	    for (int j = 0; j < n; j++) {
	        cin>>arr[j];
	    }
	    cout << (minimum(arr, n)) % n << endl;
	}
	return 0;
}

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

int max(int a, int b, int c) {
    int second_largest = (a > b)? a : b; 
    return (second_largest > c)? second_largest : c; 
}

int maxProdmid(int arr[], int low, int mid, int high) {
    int left_prod = INT_MIN; 
    int prod = 1;
    for (int j = mid; j >= low; j--) {
        prod *= arr[j];
        if (prod > left_prod)
            left_prod = prod;
    }
    
    int right_prod = INT_MIN; 
    prod = 1; 
    for (int j = mid+1; j <= high; j++) {
        prod *= arr[j];
        if (prod > right_prod)
            right_prod = prod;
    }
    
    return left_prod * right_prod; 
}

int maxprod(int arr[], int low, int high) {
    if (low == high)
        return arr[low];
        
    int mid = (low + high)/2;
    
    return max(maxprod(arr, low, mid), 
            maxprod(arr, mid+1, high),
            maxProdmid(arr, low, mid, high));
}

int main() {
	int t;
	cin>>t;
	for (int i = 0; i < t; i++) {
	    int n; 
	    cin>>n;
	    int arr[n];
	    for (int j = 0; j < n; j++) 
	        cin>>arr[j]; 
	    int max_prod_so_far = 1; 
	    int curr_max_pos = 1;
	    int curr_max_neg = 1; 
	    for (int j = 0; j < n; j++) {
	        
	        if (arr[j] == 0) {
	            curr_max_pos = 1; 
	            curr_max_neg = 1; 
	        }
	        else if (arr[j] > 0) {
	            curr_max_pos *= arr[j];
	            curr_max_neg = min(curr_max_neg * arr[j], 1);
	        }
	        else {
	            int temp = curr_max_pos;
	            curr_max_pos = max(curr_max_neg * arr[j], 1);
	            curr_max_neg = temp * arr[j];
	        }
	        if (curr_max_pos > max_prod_so_far)
	            max_prod_so_far = curr_max_pos; 
	    }
	    cout << max_prod_so_far << endl; 
	}
	return 0;
}

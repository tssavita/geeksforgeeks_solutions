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
	    
	    int max_element1 = INT_MIN, max_index1 = -1;
	    int min_element1 = INT_MAX, min_index1 = -1;
	    for (int j = 0; j < n; j++) {
	        if (max_element1 < arr[j]) {
	            max_element1 = arr[j];
	            max_index1 = j;
	        }
	        if (min_element1 > arr[j]) {
	            min_element1 = arr[j];
	            min_index1 = j;
	        }
	    }
	    int max_element2 = INT_MIN, max_index2 = -1;
	    int min_element2 = INT_MAX, min_index2 = -1; 
	    for (int j = 0; j < n; j++) {
	        if (max_element2 < arr[j] && j != max_index1) {
	            max_element2 = arr[j];
	            max_index2 = j; 
	        }
	        if (min_element2 > arr[j] && j != min_index1) {
	            min_element2 = arr[j];
	            min_index2 = j;
	        }
	    }
	    int max_element3 = INT_MIN, max_index3 = -1;
	    for (int j = 0; j < n; j++) {
	        if (max_element3 < arr[j] && j != max_index1 && j != max_index2) {
	            max_element3 = arr[j];
	            max_index3 = j; 
	        }
	    }
        long long positive_product = max_element1 * max_element2 * max_element3;
	    long long negative_product = max_element1 * min_element1 * min_element2;
	    (positive_product < negative_product) ? cout << negative_product : cout << positive_product;
	    cout << endl; 
	}
	return 0;
}

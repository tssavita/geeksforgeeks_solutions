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
	    int sum_min = INT_MAX;
	    int min_j, min_k;
	    for (int j = 0; j < n-1; j++) {
	        for (int k = j+1; k < n; k++) {
	            int sum = abs(arr[j] + arr[k]);
	            if (sum < sum_min) {
	                sum_min = sum;
	                min_j = j;
	                min_k = k;
	            }
	            else if (sum == sum_min) {
	                if (min(arr[min_j], arr[min_k]) > min(arr[j], arr[k])) {
	                    sum_min = sum;  
	                    min_j = j;
	                    min_k = k; 
	                }
	            }
	        }
	    }
	    if (arr[min_j] < arr[min_k])
	        cout << arr[min_j] << " " << arr[min_k] << endl;
	    else 
	        cout << arr[min_k] << " " << arr[min_j] << endl;
	}
	return 0;
}

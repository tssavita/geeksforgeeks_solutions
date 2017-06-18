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
	    sort(arr, arr+n);

	    long long positive_product = arr[n-1] * arr[n-2] * arr[n-3];
	    long long negative_product = arr[0] * arr[1] * arr[n-1];
	    positive_product <= negative_product ? cout << negative_product : cout << positive_product;
	    cout << endl; 
	}
	return 0;
}

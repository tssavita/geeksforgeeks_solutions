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
	    int first_height = arr[0];
	    int count = 1; 
	    for (int j = 1; j < n; j++) {
	        if (arr[j] > first_height) {
	            first_height = arr[j];
	            count++;
	        }
	    }
	    cout << count << endl;
	}
	return 0;
}

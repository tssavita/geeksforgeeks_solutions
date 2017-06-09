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
	    int n, x, sum;
	    cin>>n>>x;
	    int arr[n];
	    for (int i = 0; i < n; i++)
	        cin>>arr[i];
	    
	    int begin = 0, end = 0; 
	    bool flag = false; 
	    sum = arr[0];
	    while (end < n) {
	        if (sum == x) {
	            flag = true;
	            cout << begin+1 << " " << end+1 << endl;
	            break;
	        }
	        else if (sum > x) {
	            sum -= arr[begin];
	            begin += 1;
	        }
	        else { 
	            end++;
	            sum += arr[end];
	        }
	    }
	    if (flag == false)
	        cout << "-1" << endl; 
	}
	
	return 0;
}

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

long countWays (int n) {
    long ways[n+1];
    memset(ways, 0, n+1);
    ways[0] = 1; ways[1] = 1;
    for (int i = 2; i < n+1; i++) {
        ways[i] = ways[i-1] + ways[i-2];
    }
    return ways[n];
}

int main() {
	int t;
	cin>>t;
	for (int i = 0; i < t; i++) {
	    int n; 
	    cin>>n;
	    cout << countWays(n) << endl;
	}
	return 0;
}

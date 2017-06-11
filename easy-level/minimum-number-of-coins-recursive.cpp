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

long long nCoins(int V, int C[], int N) {
    if (V <= 0)
        return 0;
    int result = INT_MAX, sub_result; 
    for (int i = 0; i < N; i++) {
        if (C[i] <= V) {
            sub_result = nCoins(V-C[i], C, N);
            if (sub_result+1 < result)
                result = sub_result + 1;
        }
    }
    return result; 
}

int main() {
	int t;
	cin>>t; 
	for (int i = 0; i < t; i++) {
	    int V;
	    cin>>V;
	    int N;
	    cin>>N;
	    int C[N];
	    for (int i = 0; i < N; i++)
	        cin>>C[i];
	    
	    cout << nCoins(V, C, N) << endl;    
	}
	return 0;
}

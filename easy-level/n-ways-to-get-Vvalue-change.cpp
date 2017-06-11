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
    
    long long perms[V+1][N];
    
    for (int i = 0; i < N; i++)
        perms[0][i] = 1; 
    
    for (int i = 1; i <= V; i++) {
        for (int j = 0; j < N; j++) {
            long long jth_included = ((i-C[j]) >= 0) ? perms[i-C[j]][j] : 0;
            long long jth_excluded = ((j - 1) >= 0) ? perms[i][j-1] : 0;
            perms[i][j] = jth_included + jth_excluded;
        }
    }
    cout <<perms[V][N-1] << " ";
    return perms[V][N-1];
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

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

long long first_digit(int n) {
    long long msd; 
    while (n > 0) {
        msd = n;
        n = n / 10;
    }
    return msd; 
}

int main() {
	int t;
	cin>>t; 
	for (int i = 0; i < t; i++) {
	    long long l, r;
	    cin>>l>>r;
	    long long count = 0;
	    for (long long j = l; j <= r; j++) {
	        if (j >= 10) {
	            int msd = first_digit(j);
	            int lsd = j % 10;
	            if (msd == lsd)
	                count++;
	        }
	        else 
	            count++;
	    }
	    cout << " " << count << endl;
	}
	return 0;
}

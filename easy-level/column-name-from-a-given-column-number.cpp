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
	    long n;
	    cin>>n;
	    int modulo = 0; 
	    int quo = 0;
	    vector<long> remainders;
	    //remainders.push_back(modulo);
	    
	    string col_name = "";
	    while (n > 0) {
	        modulo = n % 26;   
	        if (modulo % 26 == 0) {
	            col_name += 'Z';
	            n = (n/26) - 1;
	        } 
	        else {
	            col_name += 'A' + modulo-1;
	            n = n / 26;
	        }

	    }
	    for (int j = col_name.size()-1; j >= 0; j--)
	        cout << col_name[j];
	    cout << endl;
	}
	return 0;
}

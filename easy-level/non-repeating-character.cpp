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
	    string str; 
	    cin>>str;
	    int freq[26] = {0};
	    bool flag = false; 
	    for (int j = 0; j < str.size(); j++) {
	        freq[str[j] - 'a']++;
	    }
	    for (int j = 0; j < str.size(); j++) {
	        if (freq[str[j] -'a'] == 1) {
	            flag = true;
	            cout << str[j] << endl;
	            break;
 	        }
	    }
	    if (flag == false)
	        cout << "-1" << endl;
	}
	return 0;
}

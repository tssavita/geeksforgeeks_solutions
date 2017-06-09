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
        string str; 
        cin>>str;
        
        int count_dots = count(str.begin(), str.end(), '.');
        if (count_dots == 0) {
            cout << str << endl;
        }
        else {
            int end = str.length()-1;
            for (int j = str.length()-1; j >= 0; j--) {
                if (str[j] == '.') {
                    for (int k = j+1; k <= end; k++) 
                        cout << str[k];
                    cout << '.';
                    end = j-1;
                }
            }
        
            for (int j = 0; str[j] != '.'; j++) 
                cout << str[j];
            cout << endl;
        }
    }
	return 0;
}

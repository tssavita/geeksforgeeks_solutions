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
        for(int j = 0; j < n; j++)
            cin>>arr[j];
        
        int max_from_right = arr[n-1];
        
        for(int j = n-2; j >= 0; j--) {
            int temp = arr[j];
            arr[j] = max_from_right;
            if ( max_from_right < temp )
                max_from_right = temp;
        }
        arr[n-1] = -1;
        for (int j = 0; j < n; j++)
            cout << arr[j] << " ";
        cout << endl;
    }
	//code
	return 0;
}

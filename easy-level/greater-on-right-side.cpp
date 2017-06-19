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
        
        for(int j = 0; j < n-1; j++) {
            int max_of_rest = arr[j+1];
            for(int k = j+1; k < n; k++) {
                if (max_of_rest < arr[k]) 
                    max_of_rest = arr[k];
            }
            arr[j] = max_of_rest;
        }
        arr[n-1] = -1;
        for (int j = 0; j < n; j++)
            cout << arr[j] << " ";
        cout << endl;
    }
	//code
	return 0;
}

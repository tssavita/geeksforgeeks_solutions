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

void merge(int arr[], int A[], int B[], int n) {

    int i = 0, j = 0, k = 0; 
    while (i < n && j < n) {
        if (A[i] < B[j]) {
            arr[k] = A[i]; 
            i++;
        }
        else {
            arr[k] = B[j];
            j++;
        }
        k++;
    } 
    for (; i < n; i++) {
        arr[k] = A[i];
        k++;
    }
    for (; j < n; j++) {
        arr[k] = B[j];
        k++;
    }
    
}

int main() {
	int t; 
	cin>>t; 
	for (int i = 0; i < t; i++) {
	    int n; 
	    cin>>n; 
	    int A[n];
	    int B[n];
	    for (int j = 0; j < n; j++) 
	        cin>>A[j];
	    for (int j = 0; j < n; j++) 
	        cin>>B[j];
	    int arr[2*n];
	    merge(arr, A, B, n);
	    cout << arr[n-1] + arr[n] << endl;
	}
	return 0;
}

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

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b; 
	*b = temp; 
}

int main() { 
	
	int t;
	cin>>t; 
	
	for (int i = 0; i < t; i++) { 
		int n; 
		cin>>n;
		int arr[n];
		for (int j = 0; j < n; j++) 
			cin>>arr[j];
		
		int low = 0, high = n-1, mid = 0;
		
		while (mid <= high) {
			switch(arr[mid]) {
				case 0: swap(&arr[low++], &arr[mid++]);
						break;
				case 1: mid++; 
						break;
				case 2: swap(&arr[mid], arr[high--]);
						break; 
			}
		}
		
		for (int j = 0; j < n; j++)
			cout << arr[j] << " ";
		cout << endl;
	}


}

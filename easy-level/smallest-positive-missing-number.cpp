#include <stdio.h>
#include <iostream>
#include <vector>
#include <cstring>

using namespace std; 

int main() {
	
	int t; 
	cin>>t; 
	for (int i = 0; i < t; i++) {
	    int n;
	    cin>>n;
	    vector<int> arr(n);
	    bool *visited = new bool[101];
	    memset(visited, false, 101);
	    for (int j = 0; j < n; j++) {
	        int temp; 
	        cin>>temp;
	        arr.push_back(temp);
	        if (temp > 0)
	            visited[temp] = true; 
	    }
	    /* for (int j = 1; j < 100; j++)
	        cout << visited[j] << " ";
	    cout << endl; */
	    for (int j = 1; j <= 100; j++) {
	        if (visited[j] == false) {
	            cout << j << endl;
	            break;
	        }
	    }
	}
	return 0; 
}

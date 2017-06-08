#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <unordered_set>

using namespace std; 

int main() {
	int t;
	cin>>t;
	for (int i = 0; i < t; i++) { 
	    int n, m, x; 
	    cin>>n>>m>>x; 
	    vector<int> firstArray; 
	    unordered_set<int> complement;
	    string output;
	    
	    for (int j = 0; j < n; j++) {
	        int temp; 
	        cin>>temp;
	        firstArray.push_back(temp);
	    }
	    sort(firstArray.begin(), firstArray.end());
	    for (int j = 0; j < m; j++) {
	        int temp;
	        cin>>temp;
	        complement.insert(temp);
	    }
	    for (int j = 0; j < n; j++) {
	        if (complement.find(x - firstArray[j]) != complement.end()) {
	            output += to_string(firstArray[j]) + " "; 
	            output += to_string(x - firstArray[j]) + ", "; 
	        }
	    }
	    if ( output.size() != 0) {
	        output.erase(output.size()-1); 
	        output.erase(output.size()-1); 
    	    cout << output << endl;
	    }
	    else 
	        cout << "-1" << endl;
	}
	
	return 0;
}

#include <stdio.h>
#include <iostream>
#include <string>
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
	    for (int j = 0; j < m; j++) {
	        int temp;
	        cin>>temp;
	        complement.insert(temp);

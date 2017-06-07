#include <stdio.h>
#include <iostream>


using namespace std; 

int main() {
	
	int t, n;
	cin>>t; 
	
	for (int j = 0; j < t; j++) {
	    
	    cin>>n;
	    int bool_vector[n];
	    bool inMiddle = false; 
	    int maxCount = 0, countBegin = 0, countMiddle = 0, countEnd = 0, lastOne = n;
	
    	for (int i = 0; i < n; i++) 
    	    cin>>bool_vector[i];
    	
    	for (int i = n-1; i >= 0; i--) {
    	    if (bool_vector[i] == 0)
    	        countEnd++;
    	    else {
    	        lastOne = i;
    	        break;
    	    }
        }
        
    	for (int i = 0; i <= lastOne; i++) {
    	    if (bool_vector[i] == 0 && !inMiddle) 
    	        countBegin++;
    	    else if (bool_vector[i] == 1) {
    	        inMiddle = true;
    	        maxCount = (countMiddle < maxCount)? maxCount : countMiddle; 
    	        countMiddle = 0;
    	    }
    	    else {
    	        countMiddle++;
    	    }
    	    
    	}
    	maxCount = (maxCount % 2 == 0)? (maxCount/2): ((maxCount/2) + 1);
        
        if (!inMiddle)
            cout << -1 << endl;
        else
            cout << max(max(countBegin, countEnd), maxCount) << endl;
	}
}

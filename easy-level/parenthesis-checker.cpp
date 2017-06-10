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
	    bool flag = true;
	    stack<char> st;
	    for (int j = 0; j < str.size(); j++) {
	        //cout << str[j];
	        switch(str[j]) {
	            case '[': st.push(str[j]);
	                      break;
	            case '{': st.push(str[j]);
	                      break;
	            case '(': st.push(str[j]);
	                      break; 
	            case ']': if (!st.empty() && st.top() == '[') 
	                          st.pop();
	                      else 
	                          flag = false;
	                      break;
	            case '}': if (!st.empty() && st.top() == '{') 
	                          st.pop();
	                      else 
	                          flag = false;
	                      break;
	            case ')': if (!st.empty() && st.top() == '(')
	                          st.pop();
	                      else 
	                          flag = false;
	                      break;
	        }
	        if (flag == false)
	            break;
	    }
	        
        if(flag == false)
	        cout << "not balanced" << endl;
        else 
            cout << "balanced" << endl;
	}
	
	return 0;
}

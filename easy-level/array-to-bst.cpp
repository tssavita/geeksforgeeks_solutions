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

class node {
    int data;
    
    public:
    node *left; 
    node *right; 
    node(int d): data(d) {}
    void visit() {
        cout << data << " ";
    }
};

void preorder(node *n) {
    if (n != NULL) {
        n->visit();
        preorder(n->left);
        preorder(n->right);
    }
}

node *insert (int arr[], int low, int high) {
    if (low > high) {
        return NULL;
    }
    int mid = (low + high)/2;
    node *root = new node(arr[mid]);
    root->left = insert(arr, low, mid-1);
    root->right = insert(arr, mid+1, high);
    return root; 
}

int main() {
	int t; 
	cin>>t; 
	for (int i = 0; i < t; i++) {
	    int n;
	    cin>>n;
	    int arr[n];
	    for (int j = 0; j < n; j++) {
	        cin>>arr[j];
	    }
	    node *root = insert(arr, 0, n-1);
	    preorder(root);
	    cout << endl;
	}
	return 0;
}

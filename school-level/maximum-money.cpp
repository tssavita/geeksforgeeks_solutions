#include <iostream>

using namespace std;

int main(int argc, char ** argv) {
    int t, n, money;
    cin>>t; 
    for (int i = 0; i < t; i++) {
        cin>>n>>money;
        int num_houses = ((n & 1) == 0)? n/2 : (n/2 + 1);
        cout << money * num_houses << endl;
    }

    return 0;
}

#include<bits/stdc++.h>
#include <climits>
using namespace std;
class _stack{
stack<int> s;
int minEle;
public :
    _stack(); 
    int getMin();
    int pop();
    void push(int);
};

_stack :: _stack() {
    minEle = INT_MAX;
}
/*returns min element from stack*/
int _stack :: getMin()
{
   //Your code here
    if ( s.empty() == true)
        return INT_MAX; 
   
   return minEle; 
}

/*returns poped element from stack*/
int _stack ::pop()
{
   //Your code here
    int ele_to_pop = s.top();
    s.pop();
    if (s.top() == minEle) {
        int min_temp = INT_MAX;
        stack<int> temp; 
        
        while ( !s.empty() ) {
            if (min_temp > s.top())
                min_temp = s.top();
            temp.push(s.top());
            s.pop();
        }
        
        while ( !temp.empty() ) {
            s.push(temp.top());
            temp.pop();
        }
        
        minEle = min_temp;
    }
    return ele_to_pop;
}

/*push element x into the stack*/
void _stack::push(int x)
{
   //Your code here
    s.push(x);
    if (minEle > x)
        minEle = x; 
}


int main()
{
   int t;
   cin>>t;
   while(t--) {
       int q;
       cin>>q;
        _stack *a = new _stack();
       while(q--) {

           int qt;
           cin>>qt;

           if(qt==1) {
               //push
               int att;
               cin>>att;
               a->push(att);
           }
           else if(qt==2) {
               //pop
               cout<<a->pop()<<" ";
           }
           else if(qt==3) {
               //getMin
               cout<<a->getMin()<<" ";
           }
       }
       cout<<endl;
   }

}


#include<bits/stdc++.h>
using namespace std;

class MyQueue {

    stack<int> stk1;
    stack<int> stk2;

    public:
        MyQueue() {
            
        }
        
        void push(int x) {
            
            stk1.push(x);
        }
        
        int pop() {
            
            if(stk2.empty()){
                
                while(!stk1.empty()){
                    int t = stk1.top();
                    
                    stk2.push(t);
                    stk1.pop();
                }
            }

            int t = stk2.top();
            stk2.pop();

            return t;
        }
        
        int peek() {
            if(stk2.empty()){
                
                while(!stk1.empty()){
                    int t = stk1.top();
                    
                    stk2.push(t);
                    stk1.pop();
                }
            }

            int t = stk2.top();

            return t;
        }
        
        bool empty() {
            
            return (stk1.empty() && stk2.empty());
        }
};


/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue obj = new MyQueue();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.peek();
 * boolean param_4 = obj.empty();
 */
typedef pair<int,int> pii;
class MinStack {
public:
    stack<pii> a;
    MinStack() {
        
    }
    
    void push(int val) {
        if(a.empty()){
            a.push({val,val});
        }
        else{
            a.push({val,min(val,a.top().second)});
        }
    }
    
    void pop() {
        if(!a.empty()) a.pop();
    }
    
    int top() {
        return a.top().first;
    }
    
    int getMin() {
        return a.top().second;
        
    }
};

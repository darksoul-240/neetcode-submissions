class MinStack {
public:
stack<int> s;
vector<int>v;
int i=0;
int mn=INT_MAX;
    MinStack() {

    }
    
    void push(int val) {
        s.push(val);
        mn=min(mn,val);
        v.push_back(mn);
        i++;
    }
    
    void pop() {
        s.pop();
        v.pop_back();
        if(!v.empty()){
        mn=v.back();}
        else{
            mn=INT_MAX;
        }
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return v.back();
    }
};

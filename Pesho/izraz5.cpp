#include <bits/stdc++.h>
using namespace std;
int prio(char c){
    if(c == '+' || c == '-') return 2;
    if(c == '*' || c == '/') return 3;
    if(c == '(') return 0;
    if(c == ')') return 1;
}
int calc(int a, int b, char c){
    if(c == '+'){
        return a + b;
    }
    if(c == '-'){
        return a - b;
    }
    if(c == '*'){
        return a * b;
    }
    if(c == '/'){
        return a / b;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    s.push_back('+');
    stack<int> num;
    stack<char> op;
    char t;
    for(char c: s){
        if(isdigit(c)){
            if(isdigit(t)){
                num.top() = num.top()*10+(c-'0');
            }else {
                num.push(c-'0');
            }
        }else{
            if(c == '('){
                op.push('(');
                continue;
            }
            while(op.size() > 0 && prio(op.top()) >= prio(c)){
                int a = num.top();
                num.pop();
                int b = num.top();
                num.pop();
                int ans = calc(b,a,op.top());
                op.pop();
                num.push(ans);
            }
            op.push(c);
            if(op.top() == ')'){
                op.pop();
                op.pop();
            }
        }
        t = c;
    }
    cout << num.top();

    return 0;
}


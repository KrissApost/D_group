#include <bits/stdc++.h>
using namespace std;

int main(){
    string ss;
    getline(cin,ss);
    vector<string> vec;
    stringstream f1;
    f1 << ss;
    while(f1 >> ss){
        if(ss[ss.length()-1] == ',' || ss[ss.length()-1] == '.' ){
            ss.erase(ss.begin()+ss.length()-1);
        }
        sort(ss.begin(),ss.end());
        vec.push_back(ss);
//        cout << ss << " ";
    }
//    cout << endl << " ----------- "<< endl;
    string  st;
    int k = 0, ch = 0;
    while(cin >> st){
        sort(st.begin(),st.end());
        for(int i = 0; i < vec.size(); i++){
            if(vec[i] == st){
                k++;
                if(st.length() % 2 == 0){
                    ch++;
                }
                break;
            }
        }
    }
    cout << k << endl << ch << " " << k - ch;

    return 0;
}

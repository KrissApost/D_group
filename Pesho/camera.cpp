#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector <char> vec;
    char a;
    while(a != '#'){
        cin >> a;
        vec.push_back(a);
    }
    int t = (vec[7] - '0') + (vec[6] - '0')*10 + (vec[5] - '0')*60 + (vec[4] - '0')*600 - (vec[3] - '0') - (vec[2] - '0')*10 - (vec[1] - '0')*60 - (vec[0] - '0')*600;
    if (t < 0) t += 24*60;
    cout << t/60 << " " << t % 60;
    cout << endl;
    int i = 8, k = 0, l = 0;
    while(vec[i] != '#'){
        if(isupper(vec[i]) && (isupper(vec[i+1]) || vec[i+1] == '#')){
            l++;
            i++;
            continue;
        }
        if(isupper(vec[i]) && isdigit(vec[i+1])){
            int s = 0;
            i++;
            while (isdigit(vec[i])){
                s = s*10 + vec[i] - '0';
                i++;
            }
            l += s;
            continue;
        }
        if(isupper(vec[i]) && islower(vec[i+1]) && (isupper(vec[i+2]) || vec[i+1] == '#')){
            k++;
            i += 2;
            continue;
        }
        if(isupper(vec[i]) && islower(vec[i+1]) && isdigit(vec[i+2])){
            int s = 0;
            i +=2;
            while(isdigit(vec[i])){
                s = s*10 + vec[i] - '0';
                i++;
            }
            k += s;
            continue;
        }
    }
    cout << l << " " << k;
    return 0;
}

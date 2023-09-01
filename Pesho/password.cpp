#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    int n = s.size();
    int br[26];
    for(int i = 0; i < 26; i++){
        br[i] = n / 2;
    }

    for(int i = 0; i < n; i++){
        if(i > 1 && s[i-2] == s[i-1] && s[i-1] == s[i]){
            for(int y = 0; y < 26; y++){
                if(y == s[i] - 'a'){
                    continue;
                }
                if(br[y] > 0){
                    s[i] = 'a' + y;
                    break;
                }
            }
        }
        if(br[s[i] - 'a'] <= 0){
            for(int y = 0; y < 26; y++){
                if(br[y] > 0){
                    s[i] = 'a' + y;
                    break;
                }
            }
        }
        br[s[i] - 'a']--;
    }
    for(int i = 0; i < n; i++){
        if(i > 1 && s[i-2] == s[i-1] && s[i-1] == s[i]){
            for(int y = 0; y < 26; y++){
                if(y == s[i] - 'a'){
                    continue;
                }
                if(br[y] > 0){
                    s[i] = 'a' + y;
                    break;
                }
            }
        }
        br[s[i] - 'a']--;
    }
    cout << s;

    return 0;
}


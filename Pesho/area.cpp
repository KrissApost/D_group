#include <bits/stdc++.h>
using namespace std;

bool in0[501][501];
int main() {
    int n, m;
    cin >> n >> m;
    int matrix[n][m], l = 0, o = 0, in = 0, out = 0;
    for(int i = 0; i < n; i++) for(int y = 0; y < m; y++) cin >> matrix[i][y];
    for(int i = 0; i < n; i++){
        for(int y = 0; y < m; y++){
            if (matrix[i][y] != 0) l++;
            o += matrix[i][y];
            if((matrix[i][y] == 0) && (y - 1 >= 0 && matrix[i][y-1] != 0) &&(i - 1 >= 0 && matrix[i-1][y] != 0) &&(y + 1 <  m && matrix[i][y+1] != 0) &&(i + 1 <  n && matrix[i+1][y] != 0)){
                l++;
                in0[i][y] = true;
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int y = 0; y < m; y++){
            if(matrix[i][y]!=0){
                if((y - 1 < 0 || (matrix[i][y-1] == 0 && !in0[i][y-1]))&&(i - 1 < 0 || (matrix[i-1][y] == 0 && !in0[i-1][y]))) in++;
                if((y - 1 < 0 || (matrix[i][y-1] == 0 && !in0[i][y-1]))&&(i + 1 >= n || (matrix[i+1][y] == 0 && !in0[i+1][y]))) in++;
                if((y + 1 >= m || (matrix[i][y+1] == 0 && !in0[i][y+1]))&&(i - 1 < 0 || (matrix[i-1][y] == 0 && !in0[i-1][y]))) in++;
                if((y + 1 >= m || (matrix[i][y+1] == 0 && !in0[i][y+1]))&&(i + 1 >= n || (matrix[i+1][y] == 0 && !in0[i+1][y]))) in++;
//                cout << i << " " << y << " - " << matrix[i][y] << " " << in << endl;
            }
        }
    }
    cout << l << endl << o << endl << in;

    return 0;
}

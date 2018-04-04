#include <iostream>
#include <cstring>
using namespace std;
int a[6] = {1,5,10,20,50,100};
long long f[6][10001];
int main(){
    int n;
    cin >> n;
    memset(f, 0, sizeof(f));
    for(int j = 0; j <= n; j++){
        f[0][j] = 1;
    }

    for(int i = 1; i < 6; i++){
        for(int j = 1; j <= n; j++){
            for(int k = 0; k <= j/a[i]; k++){
                f[i][j] += f[i-1][j-k*a[i]];
            }
        }
    }
    cout << f[5][n] << endl;
    return 0;
}

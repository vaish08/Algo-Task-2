#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, q;
    int sum = 0, ans = INT_MIN;
    int b[100005], l[100005], r[100005], v[100005];
    std :: fill_n(b, 100005, 0);
    cin >> n >> q;
    for(int i = 0; i < q; i++){
        cin >> l[i] >> r[i] >> v[i];
    }
    for(int i = 0; i < q; i++){
        b[l[i]] += v[i];
        b[r[i] + 1] -= v[i];
    }

    sum = b[1];
    b[1] += 1;
    for(int i = 2; i <= n; i++){
        b[i] += sum;
        sum = b[i];
        b[i] += i;
        if(ans < b[i]){
            ans = b[i];
        }
    }

    cout << ans << endl;
}
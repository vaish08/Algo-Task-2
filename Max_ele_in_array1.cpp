#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    int arr[100005], l[100005], r[100005], v[100005];
    for(int i = 0; i < q; i++){
        cin >> l[i] >> r[i] >> v[i];
    }
    for(int i = 0; i < n; i++){
        arr[i] = i+1;
    }
    
    int max_val = n, max_val_sub = INT_MIN;
    for(int i = 0; i < q; i++){
        for(int j = l[i] - 1; j < r[i]; j++){
            arr[j] += v[i];
            if(max_val_sub < arr[j]){
                max_val_sub = arr[j];
            }
        }
        
        if(max_val_sub > max_val){
            max_val = max_val_sub;
        }
        max_val_sub = INT_MIN;
    }
    cout << max_val << endl;
}
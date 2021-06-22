#include<iostream>
#include<algorithm>
#define mod 1000000007

using namespace std;


int main(){
    int n, m;
    cin >> n >> m;

    bool arr[100005];
    unsigned long long int a[100005];
    std :: fill_n(arr, 100005, false);
    //std :: fill_n(a, 10005, -1);

    for(int i = 0; i < m; i++){
        int t;
        cin >> t;
        arr[t] = true;
    }

    a[0] = 0;
    if(arr[1] == true && arr[2] == true){
        a[1] = 0;
        a[2] = 0;
    }
    else if(arr[1] == true){
        a[1] = 0;
        a[2] = 1;
    }
    else if(arr[2] == true){
        a[1] = 1;
        a[2] = 0;
    }
    else{
        a[1] = 1;
        a[2] = 2;
    }

    for(int  i = 3; i <= n; i++){
        if(arr[i] == true){
            a[i] = 0;
        }
        else{
            a[i] = ((a[i-1] % mod) + (a[i-2] % mod)) % mod;
            
        }
    }
    cout << a[n] << endl;
}
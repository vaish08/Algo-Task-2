#include<iostream>

using namespace std;

int main(){
    int n;
    long long int sum = 0;
    cin >> n;
    int b[600];
    for(int i = 0; i < n-1; i++){
        cin >> b[i];
    }

    for(int i = 0; i < n-1; i++){
        if(b[i] < b[i+1] && (i + 1) < n - 1){
            sum += b[i];
        }
        else{
            if((i+1) < n - 1)
                sum += b[i+1];
            else{
                sum += b[i];
            }
        }
    }
    sum += b[0];
    cout << sum << endl;
    
}
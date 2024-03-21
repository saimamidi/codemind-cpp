#include<bits/stdc++.h>
using namespace std;
int lcm(int arr[], int n, int min){
    int k;
    int flag = 0;
    for(int i = min; i >0 ; i--){
        for(int j= 0; j< n; j++){
            if(arr[j]%i !=0){
                break;
            }
            if(j == n-1){
                flag = 1;
            }
        }
        if(flag){
            k = i;
            break;
        }
    }
    return k;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    int min = 32767;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(min > arr[i])
        min = arr[i];
    }
    int k = lcm(arr,n,min);
    printf("%d",k);
}
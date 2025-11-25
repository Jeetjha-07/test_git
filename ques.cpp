//Time limit of this code is O(n3)
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxProduct = INT_MIN;
    // 4 , 5 ,3 ,5 ,3
    for(int i=2; i<=n; i++){
       int k = 0;
       int j = i;
       while(j<=n){
        int f = k;
        int product = 1;
        while(k<j){
            product = product*arr[k];
            if(maxProduct<product){
                maxProduct = product;
            }
            k++;
        }
        k= f+1;
        j++;
       }
    }
    cout<<maxProduct;
}
// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int ,int> amn;
    for(int i=0;i<n;i++){
        amn[arr[i]]++;
         
    }
    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        
        cout<<amn[num]<<endl;
    }
    

    return 0;
}
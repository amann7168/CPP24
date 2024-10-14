#include<bits/stdc++.h>
using namespace std;
int maxconse(int arr[],int n) {
        int cnt=0;
        int maxi=0;
        for(int i=0;i<n;i++){
            if(arr[i]==1){
                cnt ++;
                maxi=max(maxi,cnt);

            }
            else{
                cnt=0;
            }
            
        }
        return maxi;
    }


int main(){
	int n;
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int ans =maxconse(arr,n);
	cout<<ans;
	
	
    
}  
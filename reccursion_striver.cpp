//Print subsequence whose sum is k:

#include<bits/stdc++.h>
using namespace std;


/*void prints(int ind,vector<int >&ds,int s,int sum,int arr[],int n){
	
	if( ind==n){
		if(s==sum){
			for(auto it : ds) cout <<it << " ";
			cout <<endl;
		}
		return;
		
	}  
	
	ds.push_back(arr [ind]);
	s+=arr[ind];
	
	prints(ind +1,ds,s,sum,arr,n);
	s-=arr[ind];
	ds.pop_back();
	
	//not pick
	prints(ind+1,ds,s,sum,arr,n);
	
	 
} */

//Print any/first subsequence whose sum is k:

bool prints(int ind,vector<int>&ds,int s,int sum,int arr[],int n){
	
	if( ind==n){
		if(s==sum){
			for(auto it : ds) cout <<it << " ";
			cout <<endl;
		return true;
		}
		else return false;
		
	}  
	
	ds.push_back(arr [ind]);
	s+=arr[ind];
	
	if(prints(ind +1,ds,s,sum,arr,n)==true){
		return true;
	}
	s-=arr[ind];
	ds.pop_back();
	
	//not pick
	if(prints(ind+1,ds,s,sum,arr,n)==true) return true;
	
	return false;
	
	
}


//COUNT NUMBER OF subsequence WITH SUM == K:

int prints(int ind,int s,int sum,int arr[],int n){
	
	//condition not satisfied 
	//strictly done if array contains  positives only
	
	if(s>sum) return 0;
	
	
	if( ind==n){
		if(s==sum){
 			return 1;  //condition satisfies
		}
		else return 0; // condition not satisfied
		
	}  
	
 	s+=arr[ind];
	
	int l=prints(ind +1,s,sum,arr,n);
		
		
		
	s-=arr[ind];
 	
	//not pick
	int r=prints(ind+1,s,sum,arr,n);
	
	return l+r;
	
	
}




int main(){
    int arr[]={1,2,1};
    int n=3;
    int sum=2;
    vector <int >ds;
    //prints(0,ds,0,sum,arr,n); //(this call is for first 2 cases)
    /*(IN CASE OF COUNT :)*/
    cout<< prints(0,0,sum,arr,n);

    
    return 0;
}  
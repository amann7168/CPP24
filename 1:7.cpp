#include<bits/stdc++.h>
using namespace std;


 
int main() {
    


    
  

    //  for(int i = 1; i<=4; i++) {
    //     for(int spaces=1;spaces<= 4-i;spaces++) {
    //         cout << " ";
    //     }
    //     for(int j=i;j<=1;j++) {
    //         cout << "*";
    //     }
    //     for(int j=i-1;j>=1;j--) {
    //         cout << "*";
    //     }
        
    //     cout << endl;
    // }
    // return 0;
    
  //  ==================================================
	
	// for(int i=0;i<4;i++){
	// 	for(int j=1;j<i;j++){
	// 		if(j>=i && j<=8){
	// 			cout<<" ";
	// 		}
	// 		else {
	// 			cout <<"*";
	// 		}
	// 	}
	// 	cout <<endl;
	// }
    
   
   
   for(int i=0;i<7;i++){
   	for(int j=0;j<i;j++){
   		if (j>=1 && j<=5-i || j>3+i %%j<=7){
   			cout << "*";
   		}
   	}
   }
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
}
  

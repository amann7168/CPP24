#include<bits/stdc++.h>
using namespace std;


int partitionArray(int arr[], int low, int high) {
 	int pivot=arr[low];
	int i=low;
	int j=high;
	while(i<j){
		while (arr[i]<=pivot &&i<=high-1){
			i++;
		}
		while(arr[j]>pivot &&j>=low+1){
			j--;
		}
		if(i<j){
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[low],arr[j]);
	return j;
}

void quickSort(int arr[], int low, int high) {
	  	if(low<high){
		int pid=partitionArray(arr,low, high);
		quickSort(arr,low,pid-1);
		quickSort(arr,pid+1,high);
	}
	
}


int main() {
    int size;

     cin >> size;

    int arr[size];

     for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

     quickSort(arr, 0, size - 1);

     cout << "Sorted array: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
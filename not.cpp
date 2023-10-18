#include <algorithm>
#include<iostream>
using namespace std;
int main(){
	int n,arr[100];
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	int count=0;
	int size = sizeof(arr) / sizeof(arr[0]);

	for(int i=0; i<n-2; i++){
		for(int j=i+1; j<n-1; j++){
			int k=j+1;
			while(k<n){
				if(arr[k]<arr[i]+arr[j]){
					count++;
				}
				k++;
				
			}
		}
	}
	cout<<count;
}
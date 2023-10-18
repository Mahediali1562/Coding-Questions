#include<iostream>
using namespace std;

int main(){
	int n,arr1[100],sum=0,msum=0,arr2[100],ans[100]={0},maxans=0;
	cin>>n;
	cout<<"Enter values of arrays : ";
	for(int i=0;i<n;i++){
		cin>>arr1[i];
	}
	for(int i=0;i<n;i++){
		cin>>arr1[i];
	}

	for(int k=1;k<=12; k++){
		for(int i=0;i<n; i++){
			if(arr1[i]<=k && arr2[i]>=k){
				ans[k]++;
			}
		}
	}

	for(int i=1; i<=12; i++){
		if(maxans<ans[i]){
			maxans=ans[i];
		}
	}
	cout<<maxans;
	return 0;
}
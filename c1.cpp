#include<iostream>
using namespace std;

int main(){
	int n,arr[100],sum=0,msum=0;
	cin>>n;
	cout<<"Enter values of arrays : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	for(int j=0; j<n; j++){
		sum=sum+arr[j];
		if(sum<0){
			sum=0;
		}
		if(sum>msum){
			msum=sum;
		}
	}
	cout<<sum;
	return 0;
}
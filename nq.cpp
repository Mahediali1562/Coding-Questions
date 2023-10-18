#include<iostream>
#include<algorithm>
using namespace std;

int is(int arr1[],int arr2[],int n,int m){
	sort(arr1,arr1+n);
	sort(arr2,arr2+m);
	int i=0,j=0,count=0;
	while(i<m && j<n){
		if(arr1[i]==arr2[j]){
			count++;i++;j++;
		}
		else if(arr1[i]<arr2[j]){
			i++;
		}
		else{
			j++;
		}
	}
	return count;
}

int main(){
	int n,m,arr1[100],arr[100];
	

}
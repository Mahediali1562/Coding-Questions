#include<iostream>
#include<bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;

class soln{
	public:
	vector<int> findMax(int arr1[],int arr2[],int n){
		sort(arr1,arr1+n);
	    sort(arr2,arr2+n);
	    int i=1,j=0;
	    int max=1,in=1,time=arr1[0];

	    while(i<n && j<n){
	    	if(arr1[i]<=arr2[j]){
	    		in++;
	    		
	    		if(in>max){
	    		    max=in;
	    		    time=arr1[i];
	    		}
	    		i++;
	    	}
	    	else{
	    		in--;
	    		j++;
	    	}
	    }
	    vector<int> res;
	    res.push_back(max);
	    res.push_back(time);
	    return res;
	}
};


int main(){
	int n;int arr1[100],arr2[100];
	cin>>n;
	for(int i=0;i<n; i++)
		cin>>arr1[i];

	for(int i=0;i<n; i++)
		cin>>arr2[i];

	soln ob;
	vector<int> p=ob.findMax(arr1,arr2,n);
	cout<<p[0]<<' '<<p[1];

}
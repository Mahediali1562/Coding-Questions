#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

minCost(int arr[],int n){
	priority_queue<int, vector<int>, greater<int> > pq(arr, arr + n);
	int res=0;
	while(pq.size()>1){
		int f=pq.top();
		pq.pop();
		int s=pq.top();
		pq.pop();

		res=res+(f+s);
		pq.push(f+s);
	}
	return res;

	

}

int main(){

	int len[] = { 4, 3, 2, 6 };
    int size = sizeof(len) / sizeof(len[0]);
    cout << "Total cost for connecting ropes is " << minCost(len, size);
    return 0;

}
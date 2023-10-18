#include <algorithm>
#include<iostream>
using namespace std;



int main(){
	int n;
	cin>>n;

	string str="1";
	for(int i=0; i<n; i++){
		string temp="";
		int c=1;
		for(int j=0; j<str.size()-1; j++){
			if(str[j]==str[j+1]){
				c++;
			}
			else{
				temp+= c + '0';
				temp+=str[j];
				c=1;
			}
		}
		temp += (c + '0');
		temp += str.back();

		str = temp;
	}

	cout<<str;
}
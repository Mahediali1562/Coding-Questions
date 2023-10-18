#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

int prec(char c){
	if(c=='^'){
		return 3;
	}
	else if(c=='*' || c=='/'){
		return 2;
	}
	else if(c=='+' || c=='-'){
		return 1;
	}
	else{
		return -1;
	}

}

string infixtoprefix(strig s){
	reverse(s.begin(),s.end())
}

int main(){


}
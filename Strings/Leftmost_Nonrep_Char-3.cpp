#include<bits/stdc++.h>

// 0(n+CHAR)
// 0(CHAR)
using namespace std;
const int CHAR = 256;

int nonRep(string &str){
	int fI[CHAR]; // fI : first char
	fill(fI, fI+CHAR, -1);
	
	for(int i=0; i<str.length(); i++){
		if(fI[str[i]]==-1)
			fI[str[i]]=i;
		else
			fI[str[i]]=-2;
	}
	int res=INT_MAX;
	for(int i=0; i<CHAR; i++){
		if(fI[i]>=0)
			res = min(res, fI[i]);
	}
	
	return (res==INT_MAX) ? -1 : res;
	
}

int main(){
	
	string str;
	cin>>str;
	
	cout<<nonRep(str);

	return 0;
}

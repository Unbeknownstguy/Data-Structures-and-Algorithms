#include<iostream>


using namespace std;

int main(){
	int n=15, res=0;
	
	while(n>0){
		n=(n&(n-1));
		res++;
	}
	cout<<res;
	

	return 0;
}

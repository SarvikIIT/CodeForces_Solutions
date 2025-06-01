#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	int k=0;
	cin>>a;
	//cout<<a<<endl; 
	string target="hello";
	int len=a.length();
	//cout<<len<<endl;
	for(int i=0;i<len;++i){
		if(a[i]==target[k]){
			++k;
		}

	}
	//cout<<k;
	if(k==5){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}

}

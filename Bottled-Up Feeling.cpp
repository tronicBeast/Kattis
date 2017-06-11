#include<iostream>
#include<iomanip>
#include<cmath>
#include<vector>
#include<cctype>
#include<algorithm>
#include<map>
#include<set>
#define PI 3.14159
using namespace std;

int main(){
	int s,a1,a2;
	cin>>s>>a1>>a2;

	int u=s/a1;
	if(s%a1==0){
		cout<<s/a1<<" "<<0;
		return 0;
	}

	while(u>=0&&(s-u*a1)%a2!=0){
		u--;
	}

	if(u<0){
		cout<<"Impossible";
		return 0;
	}

	cout<<u<<" "<<(s-u*a1)/a2;
return 0;
}

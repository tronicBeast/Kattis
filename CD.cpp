#include<iostream>
#include<map>
using namespace std;

int main(){
	int n,m,val;
	cin>>n>>m;
	int a[110000],b[110000];
	while(n!=0&&m!=0){
		int count=0;
		map<int,int> mp;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		for(int i=0;i<m;i++){
			cin>>b[i];
		}

		int i=0,j=0;
		while(i<n&&j<m){
			if(a[i]>b[j])
				j++;
			else if(a[i]<b[j])
				i++;
			else{
				i++;
				j++;
				count++;
			}
		}
		cout<<count<<"\n";
		cin>>n>>m;
	}
return 0;
}

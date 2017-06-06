#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int k=(int)sqrt(n)+2;
	vector<int> a(n);
	vector<int> b((n-1)/k+1);

	char c;
	int x,y;

	for(int j=0;j<m;j++){
		cin>>c;
		if(c=='F'){
			cin>>x;
			x--;
			if(a[x]){
				a[x]=0;
				b[x/k]--;
			}
			else{
				a[x]=1;
				b[x/k]++;
			}
		}
		else{
			cin>>x>>y;
			x--,y--;
			int sum=0;
			for(int i=0;i<b.size();i++){
				int a1=i*k;
				int b1=a1+k-1;

				if(x<=a1&&b1<=y){
					sum+=b[i];
				}
				else if(x>b1||y<a1){}
				else {
					for(int e=max(x,a1);e<=min(y,b1);e++){
						sum+=a[e];
					}
				}
			}
			cout<<sum<<"\n";
		}
	}
return 0;
}

#include<iostream>
#include<queue>
#include<vector>
#include<stack>
#define pb push_back
using namespace std;
vector<int> v[1100000];
int n;

bool checkStack(){
	stack<int> st;
	for(int i=0;i<n;i++){
		if(v[i][0]==2&&st.empty()){
			return false;
		}
		else if(v[i][0]==1){
			st.push(v[i][1]);
		}
		else{
			if(v[i][1]!=st.top()){
				return false;
			}
			else
				st.pop();
		}
	}
return true;
}

bool checkQueue(){
	queue<int> qu;
	for(int i=0;i<n;i++){
		if(v[i][0]==2&&qu.empty()){
			return false;
		}
		else if(v[i][0]==1){
			qu.push(v[i][1]);
		}
		else{
			if(v[i][1]!=qu.front()){
				return false;
			}
			else
				qu.pop();
		}
	}
return true;
}

bool checkPQueue(){
	priority_queue<int> pq;
	for(int i=0;i<n;i++){
		if(v[i][0]==2&&pq.empty()){
			return false;
		}
		else if(v[i][0]==1){
			pq.push(v[i][1]);
		}
		else{
			if(v[i][1]!=pq.top()){
				return false;
			}
			else
				pq.pop();
		}
	}
return true;
}

int main(){
	while(cin>>n){
		int x,y;
		for(int i=0;i<n;i++){
			cin>>x>>y;
			v[i].pb(x);
			v[i].pb(y);
		}

		bool st=checkStack();
		bool qu=checkQueue();
		bool pQu=checkPQueue();

		if(st+qu+pQu>1)
			cout<<"not sure\n";

		else if(st+qu+pQu==0)
			cout<<"impossible\n";

		else if(st)
			cout<<"stack\n";

		else if(qu)
			cout<<"queue\n";

		else
			cout<<"priority queue\n";

		for(int i=0;i<n;i++)
			v[i].clear();
	}
}

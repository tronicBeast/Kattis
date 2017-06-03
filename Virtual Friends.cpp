#include <map>
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#define pb push_back
using namespace std;

class UnionFind{
public:
    int parent[110000],size[110000];
    UnionFind(int n){
        for(int i=0;i<n;i++){
            size[i]=1;
            parent[i]=i;
        }
    }

    int find(int u){
        if(parent[u]!=u)
            parent[u]=find(parent[u]);
        return parent[u];
    }

    void merge(int x, int y){
        int rootX=find(x);
        int rootY=find(y);

        if(rootX==rootY)
            return;

            if(size[rootX]>size[rootY]){
                parent[rootY]=rootX;
                size[rootX]+=size[rootY];
            }
            else{
                parent[rootX]=rootY;
                size[rootY]+=size[rootX];
            }
        }
};

int main(){
    int t;
    cin>>t;

    while(t--){
        UnionFind u(110000);
        int n;
        cin>>n;
        map<string,int > mp;

        int x,y,high=0;

        string st1,st2;

        for(int i=0;i<n;i++){
            cin>>st1>>st2;

            if(!mp.count(st1))
                mp[st1]=mp.size();
            if(!mp.count(st2))
                mp[st2]=mp.size();

            u.merge(mp[st1],mp[st2]);

            cout<<u.size[u.find(mp[st1])]<<"\n";
        }
    }
return 0;
}

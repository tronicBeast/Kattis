#include<iostream>
#include<map>
using namespace std;

int main(){
    int n,m;
    cin>>m>>n;
    string str;
    int val;
    map<string,int> mp;
    for(int i=0;i<m;i++){
        cin>>str>>val;
        mp[str]=val;
    }
    cin.ignore();
    char c;
    string s="";

    for(int i=0;i<n;i++){
        int sum=0;
        cin>>str;
        while(str!="."){
            sum+=mp[str];
            cin>>str;
        }
        cout<<sum<<"\n";
    }

return 0;
}

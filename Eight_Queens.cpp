#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<pair<int,int> > v;

int main(){
    char a[8][8];
    string str;
    for(int i=0;i<8;i++){
        cin>>str;
        for(int j=0;j<8;j++){
            a[i][j]=str[j];
            if(a[i][j]=='*'){
                v.push_back(make_pair(i,j));
            }
        }
    }
    
    if(v.size()!=8){
        cout<<"invalid";
        return 0;
    }

    for(pair<int,int> p:v){
        for(int i=p.first+1;i<8;i++){
            if(a[i][p.second]=='*'){
                cout<<"invalid";
                return 0;
            }
        }

        for(int i=p.second+1;i<8;i++){
            if(a[p.first][i]=='*'){
                cout<<"invalid";
                return 0;
            }
        }

        for(int i=p.first+1,j=p.second+1;i<8&&j<8;i++,j++){
            if(a[i][j]=='*'){
                cout<<"invalid";
                return 0;
            }
        }
        
        for(int i=p.first+1,j=p.second-1;i<8&&j>=0;i++,j--){
            if(a[i][j]=='*'){
                cout<<"invalid";
                return 0;
            }
        }
    }

    cout<<"valid";
return 0;
}

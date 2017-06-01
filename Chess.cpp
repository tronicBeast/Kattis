#include<iostream>
#include<cmath>
#include<set>
using namespace std;
int main(){
    int t;
    cin>>t;
    char cX,dX;
    int cY,dY;
    while(t--){
        cin>>cX>>cY>>dX>>dY;
        cX-=64;
        dX-=64;

        set<pair<int,int> > s;
        for(int i=cX,j=cY;i<=8&&j<=8;i++,j++){
            s.insert(make_pair(i,j));
        }

        for(int i=cX,j=cY;i<=8&&j>0;i++,j--){
            s.insert(make_pair(i,j));
        }

        for(int i=cX,j=cY;i>0&&j>0;i--,j--){
            s.insert(make_pair(i,j));
        }

        for(int i=cX,j=cY;i>0&&j<=8;i--,j++){
            s.insert(make_pair(i,j));
        }

        int x=-1,y=-1;

        for(int i=dX,j=dY;i<=8&&j<=8;i++,j++){
            if(s.find(make_pair(i,j))!=s.end()){
                x=i;
                y=j;
                break;
            }
        }

        for(int i=dX,j=dY;i<=8&&j>0;i++,j--){
            if(s.find(make_pair(i,j))!=s.end()){
                x=i;
                y=j;
                break;
            }
        }

        for(int i=dX,j=dY;i>0&&j>0;i--,j--){
            if(s.find(make_pair(i,j))!=s.end()){
                x=i;
                y=j;
                break;
            }
        }

        for(int i=dX,j=dY;i>0&&j<=8;i--,j++){
            if(s.find(make_pair(i,j))!=s.end()){
                x=i;
                y=j;
                break;
            }
        }

        if(x==-1&&y==-1){
            cout<<"Impossible\n";
        }

        else if(cX==dX&&cY==dY){
            cout<<0<<" "<<(char)(cX+64)<<" "<<cY<<"\n";
        }

        else if(abs(cX-dX)==abs(cY-dY)){
            cout<<1<<" "<<(char)(cX+64)<<" "<<cY<<" "<<(char)(dX+64)<<" "<<dY<<"\n";
        }

        else{
            cout<<2<<" "<<(char)(cX+64)<<" "<<cY<<" "<<(char)(x+64)<<" "<<y<<" "<<(char)(dX+64)<<" "<<dY<<'\n';
        }
    }
return 0;
}

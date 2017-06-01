#include<iostream>
#include<iomanip>
using namespace std;

struct matches{
    int win,lose;
    matches():win(0),lose(0){}
}p[110];

int check(string s,string f,int m1,int m2){
    if((s.compare("rock")==0&&f.compare("scissors")==0)||(s.compare("scissors")==0&&f.compare("paper")==0)||(s.compare("paper")==0&&f.compare("rock")==0))
        return m1;

    else if((f.compare("rock")==0&&s.compare("scissors")==0)||(f.compare("scissors")==0&&s.compare("paper")==0)||(f.compare("paper")==0&&s.compare("rock")==0))
        return m2;

    return 0;
}


int main(){
    int n,k;
    int m1,m2;
    string str1,str2;
    while(cin>>n&&cin>>k){
        for(int e=0;e<k*(n-1)*n/2;e++){
            cin>>m1>>str1>>m2>>str2;

            if(check(str1,str2,m1,m2)==m1){
                p[m1].win++;
                p[m2].lose++;
            }
            else if(check(str1,str2,m1,m2)==m2){
                p[m2].win++;
                p[m1].lose++;
            }
        }

        for(int i=1;i<=n;i++){
            if(p[i].win+p[i].lose==0){
                cout<<"-"<<"\n";
            }
            else
                cout<<fixed<<setprecision(3)<<1.0*p[i].win/(p[i].win+p[i].lose)<<"\n";
        }
        for(int i=1;i<=n;i++){
            p[i].win=0;
            p[i].lose=0;
        }
        cout<<"\n";
    }

}

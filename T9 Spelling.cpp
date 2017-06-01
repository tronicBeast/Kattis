#include<iostream>
#include<set>
#include<algorithm>
#include<map>
using namespace std;
int main(){
	map<char,string> mp;
	mp['a']="2";
	mp['b']="22";
	mp['c']="222";
	mp['d']="3";
	mp['e']="33";
	mp['f']="333";
	mp['g']="4";
	mp['h']="44";
	mp['i']="444";
	mp['j']="5";
	mp['k']="55";
	mp['l']="555";
	mp['m']="6";
	mp['n']="66";
	mp['o']="666";
	mp['p']="7";
	mp['q']="77";
	mp['r']="777";
	mp['s']="7777";
	mp['t']="8";
	mp['u']="88";
	mp['v']="888";
	mp['w']="9";
	mp['x']="99";
	mp['y']="999";
	mp['z']="9999";
	mp[' ']="0";

	set<char> st[9];
	st[0].insert('a');
	st[0].insert('b');
	st[0].insert('c');
	st[1].insert('d');
	st[1].insert('e');
	st[1].insert('f');
	st[2].insert('g');
	st[2].insert('h');
	st[2].insert('i');
	st[3].insert('j');
	st[3].insert('k');
	st[3].insert('l');
	st[4].insert('m');
	st[4].insert('n');
	st[4].insert('o');
	st[5].insert('p');
	st[5].insert('q');
	st[5].insert('r');
	st[5].insert('s');
	st[6].insert('t');
	st[6].insert('u');
	st[6].insert('v');
	st[7].insert('w');
	st[7].insert('x');
	st[7].insert('y');
	st[7].insert('z');
	st[8].insert(' ');

	int t;
	cin>>t;
	cin.ignore();
	int k=1;
	while(t--){
		string str;
		getline(cin,str);
		cout<<"Case #"<<k++<<": "; 
		string s="";
		int n=str.length();
		for(int i=0;i<n;i++){
			if(i!=0){
				for(int j=0;j<9;j++){
					if(st[j].find(str[i])!=st[j].end()&&st[j].find(str[i-1])!=st[j].end()){
						s+=" ";
						break;
					}
				}
			}
			s+=mp[str[i]];
		}

		cout<<s<<"\n";
	}
return 0;
}

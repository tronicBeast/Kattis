#include<iostream>
#include<iomanip>
#include<vector>
#include<cctype>
#include<map>
using namespace std;

int main(){
	string str;
	getline(cin,str);
	map<char,string> mp;
	mp['a']="@";
	mp['b']="8";
	mp['c']="(";
	mp['d']="|)";
	mp['e']="3";
	mp['f']="#";
	mp['g']="6";
	mp['h']="[-]";
	mp['i']="|";
	mp['j']="_|";
	mp['k']="|<";
	mp['l']='1';
	mp['m']="[]\\/[]";
	mp['n']="[]\\[]";
	mp['p']="|D";
	mp['q']="(,)";
	mp['r']="|Z";
	mp['s']="$";
	mp['t']="']['";
	mp['o']="0";
	mp['u']="|_|";
	mp['v']="\\/";
	mp['w']="\\/\\/";
	mp['x']="}{";
	mp['y']="`/";
	mp['z']="2";

	int n=str.length();
	for(int i=0;i<n;i++){
		if(str[i]>=65&&str[i]<=90||str[i]>=97&&str[i]<=122){
			str[i]=tolower(str[i]);
			cout<<mp[str[i]];
		}
		else
			cout<<str[i];
	}
return 0;
}

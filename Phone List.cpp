#include<iostream>
#include<algorithm>
using namespace std;
#define Alpha 10

struct trieNode{
trieNode* children[Alpha];
bool isLeaf;//true if node represents the end of the word
};

trieNode* getNode(){
trieNode* temp=new trieNode;
temp->isLeaf=false;
for(int i=0;i<Alpha;i++){
temp->children[i]=NULL;
}

return temp;
}

void insert(trieNode *root,string str){
int len=str.length();
trieNode* pCrawl=root;

for(int i=0;i<len;i++){
if(!pCrawl->children[str[i]-'0']){
pCrawl->children[str[i]-'0']=getNode();
}
pCrawl=pCrawl->children[str[i]-'0'];
}

pCrawl->isLeaf=true;
}

bool search(trieNode *root,string str){
int len=str.length();
trieNode* pCrawl=root;

for(int i=0;i<len;i++){
if(pCrawl->isLeaf)
	return false;
pCrawl=pCrawl->children[str[i]-'0'];
}

return true;
}


int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		bool flag=true;
		trieNode* root=getNode();
		string str[n];
		for(int i=0;i<n;i++){
			cin>>str[i];
		}
		sort(str,str+n);
		for(int i=0;i<n;i++){
			insert(root,str[i]);
			if(!search(root,str[i]))
				flag=false;
		}
		if(!flag)
			cout<<"NO\n";
		else
			cout<<"YES\n";
	}
}

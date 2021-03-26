#include<iostream>

using namespace std;
void reverse(string &str){
	int n= str.size();
	int s=0,e=n-1;
	char t;
		while(s<e){
		t=str[s];
		str[s]=str[e];
		str[e]=t;
		s++;
		e--;
	}
	
}

int main(){
	string str="geeks";
	reverse(str);
	
	cout<<str;
  
  return 0;
}


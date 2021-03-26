#include<iostream>

using namespace std;
/*reverse(str.begin(), str.end());
or
string rev = string(str.rbegin(),str.rend()); [constructor method]
  
    cout<<rev<<endl; */
    
    
void reverse(string &str){
	int n= str.size();
	for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}
	


int main(){
	string str="geeks";
	reverse(str);
	
	cout<<str;
  
  return 0;
}

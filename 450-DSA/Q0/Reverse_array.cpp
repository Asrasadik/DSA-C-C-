string reverseWord(string str){
    
  //Your code here
  int start=0;
  int n=str.length();
  int end=n-1;
  char temp;
  while(start<end){
      temp=str[start];
      str[start]=str[end];
      str[end]=temp;
      start++;
      end--;
  }
  return str;
}

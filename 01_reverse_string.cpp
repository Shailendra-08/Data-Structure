#include<iostream>
#include<string.h>
using namespace std;

string reverse(string str){
    int n=str.length();

    int l=0,r=n-1;
    if (n == 0)
    {
        cout<<"Noting to reverse\n";
        return "";
    }else{

        while (l<r)
        {
            swap(str[l],str[r]);
            l++;
            r--;
        }
    }
      return str;
    
}
int main(){
 string s;
 cout<<"Enter the string -->";
 cin>>s;
 cout<<"Reverse String is-->"<<reverse(s)<<endl;
return 0;
}

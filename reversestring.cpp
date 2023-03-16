#include<bits/stdc++.h>
using namespace std;

string reversingString(string str){
    string reversed;
    int last=-1;
    int spacelocal[20];
    for(int i=(str.length()-1);i>=0;i--){
        if(str[i]='\0'){
            spacelocal[++str]=i;
        }
    }
    it=0;
    j=0;
    while(it<=last){

    for(int i=spacelocal[it];i<str.length();i++){
        if(str[i]!='\0')
            reversed[j]=str[i];
            j++;
     }
    }

}

int main(){
    string str;
    getline(cin,str);
    cout<<str;
    // cout<<reversingString(str);

return 0; }
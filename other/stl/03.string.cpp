#include <iostream>
#include <cmath>

using namespace std;

int main(){
    string a,b,c;
    cin>>a>>b;
    c = a + b;
    if(c.size() <= 10){
        cout<<c<<endl;
    }else{
        cout<< c.substr(0,10)<<endl;
    }

    string s;
    cin>>s;
    for(int i=0; i<s.size(); i+=2){
        s[i] = 'z';
    }
    cout<<s<<endl;
}
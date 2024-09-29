#include<iostream>
using namespace std ;

int main ()
{
    string str = "hello world" ;
    string pattern ;
    cout<<endl<<"Enter a string for search : " ;
    cin>>pattern ;

    int x = (int)str.find(pattern) ;
    if (x!=string::npos) //-1
        cout<<endl<<pattern<<" is found starting at index "<<x<<" in the given string." ;
    else 
        cout<<endl<<"not" ;
}

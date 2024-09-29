#include<iostream>
#include<algorithm>
using namespace std ;

int main ()
{
    string str = "Hello World! Welcome to C++ programming." ;

    cout<<str<<endl ;

    string temp, result ;
    for (auto s:str)
    {
        if (s!=' ')
            temp.push_back(s) ;
        else 
        {
            reverse(temp.begin(),temp.end()) ;
            result+=temp ;
            result.push_back(' ') ;
            temp.clear() ;
        }
    }
    reverse(temp.begin(),temp.end()) ;
    result+=temp ;
    
    cout<<result ;
    
}

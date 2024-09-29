#include<iostream>
#include<vector>
using namespace std ;

int main ()
{
    string str = "Hello   World! Welcome to C++ programming." ;

    vector<string> v ;

    string temp ;
    for (auto it=str.begin() ; it!=str.end() ; it++)
    {
        if (isalnum(*it)|| ispunct(*it))
            temp=temp+*it ;

        else if (!temp.empty())
        {
            v.push_back(temp) ;
            temp.clear() ;
        }
    }
    if (!temp.empty())
        v.push_back(temp) ;

    for(auto x:v)
        cout<<x<<endl ;
    
}

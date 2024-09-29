#include<iostream>
using namespace std ;

int main ()
{
    string str = " Hello    World!   " ;
    auto x=str.find_first_not_of(' ') ;
    auto y=str.find_last_not_of (' ') ;

    str = str.substr(x,y-x+1) ; //remove leading and tailing space

    cout<<str<<endl ;

    //remove extra spce btw two words
    for (auto it=str.begin()+1 ; it!=str.end() ; it++)
    {
        if (*it==' ' && *(it-1)==' ')
            it = str.erase(it) ;
    }

    cout<<str ;
}

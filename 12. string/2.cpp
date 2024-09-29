#include<iostream>
#include<stack>

using namespace std ;

int main ()
{
    string str = "oqpo" ;
    int i,j ;
    for (i=0,j=str.size()-1  ; i<j  ; i++,j--)
        if (str[i]!=str[j])
            break ;
    
    if (i>=j)
        cout<<"\nIt's a palindrome" ;
    else 
        cout<<endl<<"Not" ;


    /*
    string str = "1331" ;
    string temp ;
    stack<char> obj ;
    for (int i=0 ; i<str.size() ; i++)
        obj.push(str[i]) ;
    while (!obj.empty())
    {
        temp.push_back(obj.top()) ;
        obj.pop() ;
    }
    if (str == temp)
        cout<<"\nIt's a palindrome" ;
    else 
        cout<<endl<<"Not" ;
    */
}

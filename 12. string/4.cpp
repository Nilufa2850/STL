#include<iostream>
#include<algorithm>
using namespace std ;

int main ()
{
    string str = "welcome to Hello world" ;

    for (int i=0 ; i<str.size() ; i++)   //using algorithm
    {
        if (i==0  || str[i-1]==' ' )
            str[i] = toupper(str[i]) ;
    }
    cout<<str ;

    /*
    for (int i=0 ; i<str.size() ; i++)         my process
    {
        if (i==0 && str[i]>='a' && str[i]<='z')
            str[i]-=32 ;

        if (str[i-1]==' ' && str[i]>='a' && str[i]<='z' )
                str[i]+=(-32) ; 
    }
    cout<<str ;
    */
}

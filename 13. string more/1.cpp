#include<iostream>
#include<algorithm>
using namespace std ;


int main ()
{

    string str = "    My name is  a   nilufa     yasmin sahaji    " ;

    int c=0 ;
    for (int i=1 ; i<str.size() ; i++)      
    {
        if (str[i]!=' ')
        {
            if (i==0 || str[i-1]==' ')
                c++ ;
        }
    }
    cout<<c ;
    return 0 ;
}

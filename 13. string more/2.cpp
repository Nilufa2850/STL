#include<iostream>
#include<algorithm>
using namespace std ;


int main ()
{

    string str = "  Hello world! " ;

    int first_index = (int)str.find_first_not_of(' ') ;
    int last_index = (int)str.find_last_not_of(' ') ;

    int length = last_index-first_index+1 ;
    str=str.substr(first_index , length) ;

    /*string temp = str ;
    str.clear() ;
    str.resize(last_index-first_index+1) ;
    
    for (int i=first_index ; i<=last_index ; i++) //or use j , for str[0]
        str[i-first_index] = temp[i];*/

    cout<<str ;

}

#include<iostream>
#include<algorithm>
using namespace std ;

int main ()
{
    //2 approach using algorithm*******************************
    string obj = "Nilufa yasmin" ;

    cout<<endl<<"Before reverse : "<<obj ;

    reverse(obj.begin() , obj.end()) ;
    cout<<endl<<"After reverse  : "<<obj ;
    return 0 ;


    //1 approach***********************************************
    string str = "welcome to Hello World" ;
    string temp ; 
    temp.resize(str.size()) ;

    cout<<endl<<"Before reverse : "<<str ;
    int j=0 ;
    for (int i=str.size()-1; i>=0 ; i--)
        temp[j++] = str[i] ;
    str = temp ;
    cout<<endl<<"After reverse  : "<<str ;
}

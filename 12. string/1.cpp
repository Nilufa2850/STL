#include<iostream>
#include<string>
using namespace std ;

int main ()
{
    string s = "Nilufaa Yeasmin" , s1, s2;
    s1.assign("Abbu & Maa") ;

    //count vowels
    int c=0 ;
    for (auto x:s1)
    {
        if (x=='a'||x=='A'||x=='e'||x=='E'||x=='i'||x=='I'||x=='o'||x=='O'||x=='u'||x=='U')
            c++ ;
    }
    cout<<c;
}

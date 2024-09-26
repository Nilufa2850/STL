#include<iostream>
#include<string>
#include<forward_list>
using namespace std ;


class poly
{
    public :
        int co ;
        int power ;
    public :
        poly(int c, int p)
        {
            co=c ;
            power=p ;
        }
        void showPoly ()
        {
            cout<<endl ;
            cout<<co<<"X^"<<power ;
        }
} ;



int main ()
{
    forward_list<poly> obj ;

    obj.assign({ poly(5,3) , poly(7,2) }) ;

    for (auto x:obj)
        cout<<x.co<<"X^"<<x.power<<endl ;
    cout<<endl ;

}

#include<iostream>
#include<array>

#include<complex>
using namespace std ;


int main ()
{
    array <int,5> A ;
    int i=0,a ;
    for (auto it=A.begin() ; it!=A.end () ; it++)
    {
        cout<<endl<<++i<<". Enter element : " ;
        cin>>a ;
        *it = a ;
    }
    cout<<endl<<"Before sorting"<<endl ;
    for (auto x : A)
        cout<<x<<" " ;
    
    //sorting
    for (int r=1 ; r<A.size() ; r++)
        for (int i=0 ; i<=A.size()-1-r ; i++)
            if (A.at(i) > A.at(i+1))
            {
                int temp = A.at(i) ;
                A.at(i) = A.at(i+1) ;
                A.at(i+1) = temp ;
            }

    cout<<endl<<"After sorting"<<endl ;
    for (auto x =A.begin() ; x !=A.end () ; x++) 
        cout<<*x<<" " ;
    
}

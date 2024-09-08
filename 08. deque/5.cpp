#include<iostream>
#include<array>
#include<deque>
using namespace std ;

int maxFreq(deque <int> d)
{
    array<int,10> a {0} ;

    for (auto it=d.begin() ; it!=d.end() ; it++)
        a[*it]++ ;

    int max=0 ;

    for (int i=0 ; i<a.size() ; i++)
        if (a[i] > a[max])
            max = i ;

    return max ;
}

//5
int main ()
{
    deque<int> d1 ;
    d1.assign({1, 3, 2, 3, 4, 1, 3, 2, 1, 1}) ;
    for (auto x:d1)
        cout<<x<<" " ;
    cout<<endl ;

    cout<<maxFreq(d1)<<endl ;
}


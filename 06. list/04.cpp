#include<iostream>
#include<list>
#include<string>
#include<vector>
using namespace std ;

void modify_bubble_sort(list<int>& L) 
{
    list<int>::iterator it,it1 ;

    bool swapped=true ;
    int temp ;
    
    while (swapped)
    {
        swapped = false ;
        for (it=L.begin() ; it!=L.end() ; it++)
        {
            it1 = it ;
            it1++ ;
            if (it1!=L.end()  &&  *it > *it1)
            {
                temp = *it ;
                *it = *it1 ;
                *it1 = temp ;
                swapped = true ;
            }
        }
    }
}

void sort(list<int>& L) 
{
    list<int>::iterator it,it1 ;
    it1=L.begin() ;

    int temp ;

    for (it=L.begin() ; it!=L.end() ; it++)
        for (it1++ ; it1!=L.end() ; it1++)
            if (*it<*it1)
            {
                temp = *it ;
                *it = *it1 ;
                *it1 = temp ;
            }
}
int main ()
{
    list<int> L{5,1,8,9,7,12,0,4,2,7} ;

    for (auto x:L)
        cout<<x<<" " ;
    cout<<endl ;

    sort(L) ;
    
    for (auto x:L)
        cout<<x<<" " ;
    cout<<endl ;

}

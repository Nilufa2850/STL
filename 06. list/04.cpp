#include<iostream>
#include<list>
#include<string>
#include<vector>
using namespace std ;


/***********************************Sir's Process*******************************************************/
void q4()
{
    list <int> l1={90,30,80,100,20,10,50,60,20,40};
    vector <int> v1;
    for(auto x:l1)
        v1.push_back(x);
    
    sort(v1.begin(),v1.end());
    l1.clear();
    l1.insert(l1.begin(),v1.begin(),v1.end());
    for(auto x:l1)
        cout<<x<<" ";
    cout<<endl;
}

/**********************************************************************************************/



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


#include<iostream>
#include<vector>
#include<string>
using namespace std ;


int main ()
{
    vector <int> obj {2, 4,12, 10, 5, 7, 6, 15, 20,18, 3, 9} ; //main input
    for (auto x:obj)
        cout<<x<<" " ;
    cout<<endl ;

    vector<vector<int>> v ;
    int i,j ;

    for (i=0,j=0 ; i<obj.size() ; ) 
    {
        v.emplace_back() ;
        v[j].emplace_back(obj[i++]) ; 
        // now , i incremented by 1
        while (i < obj.size() && obj[i-1]<obj[i])
        {
            v[j].emplace_back(obj[i]) ;
            i++ ;
        }
        j++ ;
    }

    for(int m=0 ; m<v.size() ; m++)
    {
        for (auto n:v[m])
            cout<<n<<" " ;
        cout<<endl ;
    }
    
}

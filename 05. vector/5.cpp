#include<iostream>
#include<vector>
#include<string>
using namespace std ;

int main ()
{
    vector<vector<int>> v{{10, 20, 30, 40, 50},{5, 15, 25, 35, 45},{100, 200, 300}} ;

    vector<int> obj ;
    //obj.emplace_back() ;

    obj.insert(obj.begin(), v[0].begin(),v[0].begin()+3) ;
    obj.insert(obj.end() , v[1].end()-2,v[1].end()) ;
    obj.insert(obj.end() , v[2].begin(),v[2].end()) ;


    for (auto x:obj)
        cout<<x<<" " ;
    cout<<endl ;


}

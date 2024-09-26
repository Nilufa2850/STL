
int main ()
{
    //5
    vector<int> V {6,7,2,5,3,1,8,9,4} ;
    list <int> L ;

    for (auto x:V)
        cout<<x<<" " ;
    cout<<endl ;    

    for (auto it=V.begin() ; it!=V.end() ; it++)
    {
        if (*it%2 ==0)
            L.push_back(*it) ;
    }
    for (auto it=V.begin() ; it!=V.end() ; it++)
    {
        if (*it%2 )
            L.insert(L.end() , *it);
    }

    for (auto x:L)
        cout<<x<<" " ;
    cout<<endl ;
}

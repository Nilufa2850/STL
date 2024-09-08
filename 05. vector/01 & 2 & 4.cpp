//****************************************************************************************
    //4
    vector<int> v4 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10} ;
    for (auto x:v4)
        cout<<x<<" " ;
    cout<<endl ;

    delPrime(v4) ;

    for (auto x:v4)
        cout<<x<<" " ;
    cout<<endl ;
    
    return 0;*/
//**************************************************************************

    //2
    vector <int> v2{1,2,3} ;
    for(auto x:v2)
        cout<<x<<" " ;
    cout<<endl ;
    v2.insert(v2.end()-1 , 3,25 ) ;
    for(auto x:v2)
        cout<<x<<" " ;
    cout<<endl ;

//**************************************************************************

    //1
    vector<int> v1 = {5,9,4,-2,7,10,-15,3,9,20} ;

    for (auto x:v1)
        cout<<x<<" " ;
    cout<<endl ;

    for (auto it = v1.begin() ; it !=v1.end() ; ++it )
    {
        if (*it < 0)
        {
            v1.erase(it , v1.end()) ;
            break ;
        }
    }
    for (auto x:v1)
        cout<<x<<" " ;
    cout<<endl ;

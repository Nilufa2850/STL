//2
int main ()
{
    deque<int> d ;
    d.assign({8,9,4,15,12,3,26,3}) ;

    for (auto x:d)
        cout<<x<<" " ;
    cout<<endl ;
    
    int max = d.front() ;
    for (auto it=d.begin()+1 ; it!=d.end() ; it++)
        if (*it > max)
            max = *it ;

    cout<<"greatest element in the deque is : "<<max ;
}

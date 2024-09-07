
int main ()
{
    //1. Explicit iterator
    array <int,5> a1{3,8,9,12,15} ;
    array<int,5>:: const_reverse_iterator it ;
    for (it=a1.crbegin() ; it!=a1.crend() ; it++)
        cout<< *it <<"  " ;

    //2. Average number
    array <float,5> a2 = {5,3,4,3,.5} ;
    //i use implicit iterator
    float sum=0 ;
    for (auto x : a2)
        sum +=x ;
    cout<<endl<<"Average of a2 elements is : "<<sum/a2.size() ;

    //3. 
    array<int ,10> a3 ;
    array<int,10>::iterator it3 ;
    int i=0 , x ;
    for (it3 = a3.begin() ; it3 != a3.end() ; it3++)
    {
        cout<<endl<<"Enter "<<i++<<" no. element : " ;
        cin>>x ;
        *it3 = x ;
    }
    cout<<endl ;
    for (auto y : a3)
        cout<<y<<" " ;

    return 0 ;
}



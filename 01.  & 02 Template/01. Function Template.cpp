//Greater Value
template <typename X>
X greaterValue (X a , X b)
{
    return a>b?a:b ;
}
// Sorting 
template <typename X>
void Sort (X a[] , int size)
{
    int r , i ;
    for (r=1 ; r<size ; r++)
        for (i=0 ; i<=size-1-r ; i++)
            if (a[i]>a[i+1])
            {
                X temp = a[i] ;
                a[i] = a[i+1] ;
                a[i+1] = temp ;
            }  
}
//Print Array 
template<class Y>
void printArray (Y arr[] , int size)
{
    cout<<endl ;
    int i ;
    for (i=0 ; i<size ; i++)
        cout<<arr[i]<<" " ;
}

//print String
template<>
void printArray<char> (char arr[] , int size)
{
    cout<<endl ;
    int i ;
    for (i=0 ; arr[i] ; i++)
        cout<<arr[i]<<" " ;
}

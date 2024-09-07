template <class T>
class complex
{
    private :
        T real ;
        T img ;
    public :
        complex ()
        {
            real = img = 0 ;
        }
        void setReal (T m)
        {
            real = m ;
        }
        void setImg (T m)
        {
            img = m ;
        }
        T getReal ()
        {
            return real ;
        }
        T getImg ()
        {
            return img ;
        }
        
} ;
//using My own complex class
 
    array<complex<int> , 5> a4 ;
    //using explicit iterator 
    array<complex<int> , 5>:: iterator it4 ;
    int real , img , i=1 ;
    for (it4 = a4.begin() ; it4 != a4.end() ; ++it4)
    {
        cout<<endl<<i++<<". Enter real and img : " ;
        cin>>real>>img ;
        it4->setReal(real) ;
        it4->setImg(img) ;
    }
    //for (it4 = a4.begin() ; it4 != a4.end() ; ++it4)
        //cout<<endl<<it4->getReal()<<"+i"<<it4->getImg();
    for (auto X : a4)
        cout<<X.getReal()<<"+i"<<X.getImg()<<endl ;
    
    int sum=0 ;
    for (auto X: a4)
        sum = sum+X.getImg() ;
    cout<<endl<<sum ;

//******************************************************************************************************************************************************

    //using []
    int x, y ;
    for (int i=0 ; i<a4.size() ; i++)
    {
        cout<<endl<<i+1<<". Enter real and img : " ;
        cin>>x>>y ;
        a4[i].setReal(x) ;
        a4[i].setImg(y) ;
    }
    cout<<endl ;
    for (auto m : a4) 
        cout<<m.getReal()<<"+i"<<m.getImg()<<endl ;

    int sum=0 ;
    for (auto m: a4)
        sum = sum+m.getImg() ;
    cout<<endl<<"Sum of all imagianry no is : "<<sum;


    return 0 ;
}


//Array Template **********************************************************************************************************************************
template <class X>
class Array 
{
    private :
        int capacity ;
        int last_index ;
        X *ptr ;
    public :
        Array (int size)
        {
            capacity = size ;
            last_index = -1;
            ptr = new X [size] ;
        }
        Array (Array &obj)
        {
            capacity = obj.capacity ;
            last_index = obj.last_index ;
            ptr = new X [capacity] ;

            for (int i=0 ; i<=last_index ; i++)
                ptr[i] = obj.ptr[i] ;
        }
        Array& operator= (Array &obj)
        {
            capacity = obj.capacity ;
            last_index = obj.last_index ;

            if (ptr)
                delete [] ptr ;
            ptr = new X [capacity] ;

            for (int i=0 ; i<=last_index ; i++)
                ptr[i] = obj.ptr[i] ;

            return *this ;
        }
        
        bool isEmpty ()
        {
            return last_index==-1 ;
        }
        void append (X data)
        {
            if (!isEmpty())
                ptr[++last_index] = data ;
        }
        void insert (int index , X data)
        {
            if ((index>=0 && index<=last_index+1)  && (last_index < capacity-1))
            {
                for(int i=last_index ; i>=index ; i--)
                    ptr[i+1] = ptr[i] ;
                ptr[index] = data ;
            }
        }
        void edit (int index , X data)
        {
            if (index>=0 && index<=last_index)
                ptr[index] = data ;
        }
        int getIndex (X data)
        {
            for (int i=0 ; i<=last_index ; i++)
                if (ptr[i] == data)
                    return  i ;
        }
        ~Array ()
        {
            delete []ptr ;
        }
} ;

//Stack Template ***********************************************************************************************************************************
template <class Z>
class Stack 
{
    private : 
        SLL <Z> obj ;
    public :
        Stack () { } ;
        void push (Z data)
        {
            obj.insert1st(data) ;
        }
        void pop ()
        {
            obj.Del_1stNode() ;
        }
        Z peek ()
        {
            obj.get_1st_nodeValue() ;
        }
        ~Stack ()
        {

        }
        void showNode ()
        {
            obj.showNode() ;
        }

} ;
int main ()
{
    Stack <int> obj ; 
    obj.push(5) ;
    obj.push(10) ;
    obj.push(30) ;
    obj.showNode() ;
    obj.pop() ;
    obj.showNode() ;
    cout<<endl<<obj.peek() ;
}

//Singly Linked List*********************************************************************************************************************************
template <class X>
class node 
{
    public :
        X item ;
        node *next ;
} ;
template <typename Y>
class SLL
{
    node <Y> *start ;
    public :
        SLL () ;
        bool isEmpty() ;
        void insert1st(Y) ;
        void insertLast (Y) ;
        node<Y>* search (Y) ;
        void insert_spec (node<Y>* , Y) ;
        void Del_1stNode () ;
        void Del_lastNode () ;
        void Del_specNode (node<Y>*) ;
        ~SLL () ;  
        void showNode () ;
        Y get_1st_nodeValue ()
        {
            if (start)
                return start->item ;
        }
} ;
template<class Y>
void SLL<Y>:: showNode ()
{
    cout<<endl ;
    node <Y> *t = start ;
    while (t)
    {
        cout<<t->item ;
        if (t->next)
            cout<<"->" ;
        t = t->next ;
    }
}
template <class Y>
SLL<Y>:: ~SLL()
{
    while (start)
        Del_1stNode() ;
}
template<class Y>
void SLL<Y>:: Del_specNode (node<Y> *ptr)
{
    if (ptr)
    {
        if (start == ptr)
            start = start->next ;
        else 
        {
            node <Y> *t = start ;
            while (t->next != ptr)
                t = t->next ;
            t->next = ptr->next ;
        }
        delete ptr ;
    }
}
template <class Y>
void SLL<Y>:: Del_lastNode () 
{
    if (start == nullptr)
        return ;
    node <Y> *t = start , *p=NULL ;
    
    while (t->next)
    {
        p = t ;
        t = t->next ;
    }
    if (p)
        p->next = nullptr ;
    delete t ;
    
}
template<class Y>
void SLL<Y> :: Del_1stNode () 
{
    if (start)
    {
        node <Y> *t = start ;
        start = start->next ;
        delete t ;
    }
}
template<typename Y>
void SLL<Y>:: insert_spec (node<Y>* ptr, Y data) 
{
    if (ptr)
    {
        node <Y> *n = new node <Y> ;
        n->item = data ;
        n->next = ptr->next ;
        ptr->next = n ;
    }
}
template<typename Y>
node<Y>* SLL<Y>:: search (Y data)
{
    node <Y> *t = start ;
    while (t)
    {
        if (t->item == data)
            return t ;
        t = t->next ;
    }
    return nullptr ;
}
template<typename Y>
void SLL<Y>:: insertLast(Y data)
{
    node <Y> *n = new node <Y> ;
    n->item = data ;
    n->next = nullptr ;

    if (start == nullptr)
        start = n ;
    else 
    {
        node <Y> *t = start ;
        while (t->next)
            t= t->next ;
        t->next = n ;
    }
}
template<typename Y>
void SLL<Y>::insert1st(Y data)
{
    node <Y> *n = new node <Y> ;
    n->item = data ;
    n->next = start ;
    start = n ;
}
template<typename Y>
bool SLL<Y>::isEmpty ()
{
    return start==nullptr ;
}
template<typename Y>
SLL<Y>::SLL ()
{
    start = nullptr ;
}
/*int main ()
{
    SLL <float> obj ;
    obj.insert1st(4.6) ;
    obj.insertLast(8.0) ;
    obj.insert_spec(obj.search(8.0),10) ;

    obj.showNode () ;
    obj.Del_1stNode() ;
    obj.showNode() ;
}*/


//Queue Template ************************************************************************************************************************************
template <class M>
class Queue 
{
    private :
        int capacity ;
        int front , rear ;
        M *ptr ;
    public :

        void showQueue ()
        {
            if (front > -1)
            {
                cout<<endl ;
                int i ;
                for (i=front ; i!=rear ; i=(i+1)%capacity)
                    cout<<ptr[i]<<" " ;
                cout<<ptr[i]  ;
            }
        }
        M getRearElement ()
        {
            if (front != -1)
                return ptr[rear] ;
            return -1 ;
        }

        M getFrontElement ()
        {
            if (front != -1)
                return ptr[front] ;
            return -1 ;
        }

        void Delete ()
        {
            if (front ==-1)
                cout<<endl<<"Queue is empty" ;
            else 
            {
                if (front == rear)
                    front = rear = -1 ;
                else 
                    front = (front+1)%capacity ;
            }
        }

        void insert (M data)
        {
            if (front == (rear+1) % capacity )
                cout<<"\nQueue is full" ;
            else 
            {
                if (front == -1)
                    front = 0 ;
                rear = (rear+1) % capacity ;
                ptr[rear] = data ;
            }
        }
        
        Queue (int c)
        {
            capacity = c ;
            front = rear = -1 ;
            ptr = new M [c] ;
        }

        ~Queue ()
        {
            delete [] ptr ;
        }

} ;
int main ()
{
    Queue <int> obj(5) ;
    obj.insert(5) ;
    obj.insert(10) ;
    obj.insert(6) ;
    obj.insert(18) ;
    obj.insert(9) ;
    
    obj.showQueue() ;
    cout<<endl<<"Front && rear ="<<obj.getFrontElement()<<" & "<<obj.getRearElement() ;

    obj.Delete() ;
    obj.showQueue() ;


    cout<<endl<<"Front && rear ="<<obj.getFrontElement()<<" & "<<obj.getRearElement() ;

    obj.insert(100) ;
    obj.showQueue() ;
    cout<<endl<<"Front && rear ="<<obj.getFrontElement()<<" & "<<obj.getRearElement() ;
}



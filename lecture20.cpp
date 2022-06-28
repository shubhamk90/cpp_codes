// (ii)  STL Vector
//  ................................




// when we create vector its initial size is 0
// size......current element
// capacity.... storage space currently 
//allocated to the vector .....means kini memory assign hooi payyi aa









// pehle to paat hove kina size da vector babone


/*

# include<iostream>
# include<vector>
using namespace std;
int main()
{
    vector<int> a(5,1);
    for(int i:a)
    {
        // (5,1) means 5 size and initialize vector with 1
        // by default initializing start with 0
        cout<<i<<" ";

    }
}

*/









/*


# include<iostream>
# include<vector>
using namespace std;
int main()
{
    vector<int> a(5,1);
    cout<<"'a' vector with size 5 and initialize with 1 : "<<endl;
    for(int i:a)
    {
        cout<<i<<" ";

    }

    vector<int> last(a);
    cout<<"\nCopy 'a' vector elements in 'last' vector "<<endl;
    for(int i:last)
    {
        cout<<i<<" ";
    }

}


*/















// user input in vector 

/*

# include<iostream>
# include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    int value;
    cout<<"Enter no : ";
    cin>>n;

    cout<<"Enter "<<n<<" elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>value;
        v.push_back(value);
    }

    cout<<"values : ";
    for(int i:v)
    {
        cout<<i<<" ";
    }

}

*/







/*

erase(int position):

Removes the element present at position.  
Ex: v.erase(v.begin()+4); (erases the fifth element of the vector v)

*/






/*

erase(int start,int end):

Removes the elements in the range from start to end 
inclusive of the start and exclusive of the end.
Ex:v.erase(v.begin()+2,v.begin()+5);
(erases all the elements from the third element to the fifth element.)

*/











// (1)  capacity()  and  push_back()

/*

# include<iostream>
# include<vector>
using namespace std;
int main()
{
    vector<int> v;
    cout<<"capacity->> "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capacity->> "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity->> "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity->> "<<v.capacity()<<endl;


}

*/












// (2)  size()  and at()

/*
    
# include<iostream>
# include<vector>
using namespace std;
int main()
{
    vector<int> v;
    cout<<"capacity->> "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capacity->> "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity->> "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity->> "<<v.capacity()<<endl;

    cout<<"Size = "<<v.size()<<endl;

    cout<<"Element at 0 index = "<<v.at(0)<<endl;
    cout<<"Element at 1 index = "<<v.at(1)<<endl;
    cout<<"Element at 2 index = "<<v.at(2)<<endl;


}

*/


















// (3)  front()  and  back()


/*

# include<iostream>
# include<vector>
using namespace std;
int main()
{
    vector<int> v;
    cout<<"capacity->> "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capacity->> "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity->> "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity->> "<<v.capacity()<<endl;

    cout<<"Size = "<<v.size()<<endl;


    cout<<"Front = "<<v.front()<<endl;
    cout<<"back = "<<v.back()<<endl;

}

*/














// (4)  push_back()    and pop_back()


/*

# include<iostream>
# include <vector>
using namespace std;
int main()
{
    vector<int> a;
    cout<<"Capacity-> "<<a.capacity()<<endl;

    a.push_back(1);
    cout<<"Capacity-> "<<a.capacity()<<endl;

    a.push_back(4);
    cout<<"Capacity-> "<<a.capacity()<<endl;

    a.push_back(3);
    cout<<"Capacity-> "<<a.capacity()<<endl;


    cout<<"Size : "<<a.size()<<endl;


    cout<<"Before pop : "<<endl;
    for(int i:a)
    {
        cout<<i<<" ";
    }


    a.pop_back();

    cout<<"\nAfter pop : "<<endl;
    for(int i:a)
    {
        cout<<i<<" ";
    }

    
}

*/
















// (5)  clear()
// clear means size 0 hunde....capacity nahi

/*

# include<iostream>
# include <vector>
using namespace std;
int main()
{
    vector<int> a;
    cout<<"Capacity-> "<<a.capacity()<<endl;

    a.push_back(1);
    cout<<"Capacity-> "<<a.capacity()<<endl;

    a.push_back(4);
    cout<<"Capacity-> "<<a.capacity()<<endl;

    a.push_back(3);
    cout<<"Capacity-> "<<a.capacity()<<endl;


    


    cout<<"Before pop : "<<endl;
    for(int i:a)
    {
        cout<<i<<" ";
    }


    a.pop_back();

    cout<<"\nAfter pop : "<<endl;
    for(int i:a)
    {
        cout<<i<<" ";
    }


    cout<<"\nSize Before clear vector : "<<a.size()<<endl;

    a.clear();

    cout<<"Size after clear vector : "<<a.size()<<endl;

    
}

*/







































// (iii)  STL Deque
//  ................................




// (1)  push_back()  and push_front()   and pop_back()



/*

# include<iostream>
# include<deque>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);

    for(int i:d)
    {
        cout<<i<<" ";
    }



    cout<<endl;

    d.pop_back();
    for(int i:d)
    {
        cout<<i<<" ";
    }

}


*/














// // (2)  push_back()  and push_front()   and pop_front()


/*

# include<iostream>
# include<deque>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(8);
    d.push_front(6);

    for(int i:d)
    {
        cout<<i<<" ";
    }



    cout<<endl;

    d.pop_front();
    for(int i:d)
    {
        cout<<i<<" ";
    }
}

*/













// (3)  at() function


/*

# include<iostream>
# include<deque>
using namespace std;
int main()
{
    deque <int> d;

    d.push_back(5);
    d.push_front(4);
    d.push_back(1);
    d.push_front(7);

    for(int i:d)
    {
        cout<<i<<" ";
    }


    cout<<"\nFirst index element : "<<d.at(1)<<endl;
    cout<<"Second index element : "<<d.at(2)<<endl;
    cout<<"Third index element : "<<d.at(3)<<endl;

}

*/



















// (4)  front()  and   back()   and empty()

/*

# include<iostream>
# include<deque>
using namespace std;
int main()
{
    deque <int> d;

    d.push_back(5);
    d.push_front(4);
    d.push_back(1);
    d.push_front(7);

    for(int i:d)
    {
        cout<<i<<" ";
    }

    cout<<"\nFront = "<<d.front()<<endl;
    cout<<"back = "<<d.back()<<endl;

    
    cout<<"Empty or not = "<<d.empty();

}

*/











// (5)  erase ()
// max_size() remain same after or before erasing

/*

# include<iostream>
# include<deque>
using namespace std;
int main()
{
    deque <int> d;
    
    d.push_back(5);
    d.push_front(4);
    d.push_back(1);
    d.push_front(7);

    for(int i:d)
    {
        cout<<i<<" ";
    }

    cout<<"\nBefor erasing size : "<<d.size()<<endl;

    d.erase(d.begin(), d.begin()+1);

    cout<<"After erasing size : "<<d.size()<<endl;

    for(int i:d)
    {
        cout<<i<<" ";
    }

}


*/






















































// (iv)  STL List
//  ................................


// (1) push_back()  and  push_front()

/*

# include<iostream>
# include<list>
using namespace std;
int main()
{
    list<int>l;
    l.push_back(1);
    l.push_front(2);
    l.push_back(8);
    l.push_front(9);
    for(int i:l)
    {
        cout<<i<<" ";
    }
}

*/




















// (2) push_back()  and  push_front()  and   erase()   and size()

/*

# include<iostream>
# include<list>
using namespace std;
int main()
{
    list<int>l;
    l.push_back(1);
    l.push_front(2);
    l.push_back(8);
    l.push_front(9);
    for(int i:l)
    {
        cout<<i<<" ";
    }

    cout<<endl;
    cout<<"\nsize of list before erasing = "<<l.size()<<endl;


    // l.erase(l.begin());
    l.erase(l.begin());

    cout<<"after erasing  element remain = ";
    for(int i:l)
    {
        cout<<i<<" ";
    }

    cout<<"\nsize of list after erasing = "<<l.size()<<endl;

}

*/














// (3) push_back()  and  push_front() and pop_back()  and  pop_front()


/*

# include<iostream>
# include<list>
using namespace std;
int main()
{
    list<int>l;
    l.push_back(1);
    l.push_front(2);
    l.push_back(8);
    l.push_front(9);
    for(int i:l)
    {
        cout<<i<<" ";
    }

    cout<<"\n";

    l.pop_front();
    cout<<"After front pop = ";
    for(int i:l)
    {
        cout<<i<<" ";
    }

}


*/
















/*


# include<iostream>
#include<list>
using namespace std;
int main()
{
    list <int> l;
    l.push_back(5);
    l.push_back(7);
    l.push_back(1);
    l.push_back(9);
    l.push_back(12);

    list <int> :: iterator iter;
    iter=l.begin();
    cout<<*iter<<" ";

    iter++;
    cout<<*iter<<" ";

    iter++;
    cout<<*iter<<" ";

    iter++;
    cout<<*iter<<" ";

    iter++;
    cout<<*iter<<" ";


}



*/


















/*


# include<iostream>
#include<list>
using namespace std;
int main()
{
    list <int> l;
    l.push_back(5);
    l.push_back(7);
    l.push_back(1);
    l.push_back(9);
    l.push_back(12);

    list <int> :: iterator iter;
    for(iter=l.begin();iter!=l.end();iter++)
    {
        cout<<*iter<<" ";
    }


}


*/

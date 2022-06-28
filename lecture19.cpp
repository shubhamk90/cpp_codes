// (i) STL Arrays


// int arr[3]={1,2,3};               // simple array
// array <int,4> a = {1,2,3,4};          // stl array








// (1)  size() function



# include<iostream>
# include<array>
using namespace std;
int main()
{
    array <int,4> a = {1,2,3,4};          // stl array
    int size = a.size();
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }
}











// (2) max_size() function

/*

# include<iostream>
# include<array>
using namespace std;
int main()
{
    array <int,6> a = {1,2,3,4,8,9};          
    int size = a.max_size();
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }

}

*/




//  The size() and max_size() return the same value.







// (3) at() function 

/*

# include<iostream>
# include<array>
using namespace std;
int main()
{
    array <int,6> a = {1,2,3,4,8,9}; 
    cout<<"Element at 2 index of array = "<<a.at(2)<<endl;
    cout<<"Element at 5 index of array = "<<a.at(5)<<endl;

}

*/










/*

# include<iostream>
# include<array>
using namespace std;
int main()
{
    array <int,6> a = {1,2,3,4,8,9}; 
    for(int i=0;i<6;i++)
    {
        cout<<a.at(i)<<endl;
    }

}


*/











// (4) get() function 


/*

# include<iostream>
# include<array>
using namespace std;
int main()
{
    array <int,6> a = {1,2,3,4,8,9}; 
    cout<<"The elements using get() : "<<endl;
    cout<<get<0>(a)<<" "<<get<1>(a)<<endl;
    cout<<get<2>(a)<<" "<<get<3>(a)<<endl;
    cout<<get<4>(a)<<" "<<get<5> (a)<<endl;


}

*/










// (5)  operator[]

/*

# include<iostream>
# include<array>
using namespace std;
int main()
{
    array <int ,3> a ={4,5,6};
    for(int i=0;i<3;i++)
    {
        cout<<a[i]<<" ";
    }

}

*/



















// (6)  empty() function()]

// 1 if true
// 0 if false 

/*

# include<iostream>
# include<array>
using namespace std;
int main()
{
    array <int,4> arr = {3,5,6,8};
    cout<<"Array is empty or not-->> "<<arr.empty()<<endl;
}

*/



















// (7)  front() and back() function 

/*

# include<iostream>
# include<array>
using namespace std;
int main()
{
    array <int ,4> a = {2,4,6,8};
    cout<<"Front element = "<<a.front()<<endl;
    cout<<"Back element = "<<a.back()<<endl;
}

*/














// (8) fill () function

/*

# include<iostream>
# include<array>
using namespace std;
int main()
{
    array <int , 4> a = {};
    a.fill(0);
    cout<<"Array after filling operation : "<<endl;
    for(int i=0;i<4;i++)
    {
        cout<<a[i]<<" ";
    }
}

*/



















// (9)   swap () function

/*

# include<iostream>
# include<array>
using namespace std;
int main()
{
    array <int , 4> a ={1,2,3,4};
    array <int , 4> a2 ={5,6,7,8};

    cout<<"First array befoe swapping : "<<endl;
    for(int i=0;i<4;i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<endl;

    cout<<"Second array before swapping : "<<endl;
    for(int j=0;j<4;j++)
    {
        cout<<a2[j]<<" ";
    }

    cout<<endl;




    a.swap(a2);


    
    cout<<"\nFirst array after swapping : "<<endl;
    for(int i=0;i<4;i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<endl;

    cout<<"Second array after swapping : "<<endl;
    for(int j=0;j<4;j++)
    {
        cout<<a2[j]<<" ";
    }


}

*/


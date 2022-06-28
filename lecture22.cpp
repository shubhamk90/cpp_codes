// (viii)  STL Set 
//  ................................






// insert()    size()    find()


/*

# include<iostream>
# include<set>
using namespace std;
int main()
{
    set <int> s;
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(5);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(6);

    cout<<s.size()<<endl;

    for(int i:s)
    {
        cout<<i<<" ";
    }

    cout<<"\nElements after erasing "<<endl;
    s.erase(s.begin()); 

    for(int i:s)
    {
        cout<<i<<" ";
    }

}


*/

















// erase iterator position

/*

# include<iostream>
# include<set>
using namespace std;
int main()
{
    set <int> s;
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(5);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(6);


    for(int i:s)
    {
        cout<<i<<" ";
    }

    cout<<"\nElements after erasing "<<endl;
    set <int>::iterator it=s.begin();
    it++;
    s.erase(it); 

    for(int i:s)
    {
        cout<<i<<" ";
    }
}


*/

















// count()
// return 1 if number is present
// return 0 if number is not present 

/*

# include<iostream>
# include<set>
using namespace std;
int main()
{
    set <int> s;
    s.insert(5);
    s.insert(6);
    s.insert(1);
    s.insert(0);

    for(int i : s)
    {
        cout<<i<<" ";
    }

  //  count() whether 5 is present or not

    cout<<"\n5 is present or not-->>>> "<<s.count(5);
    cout<<"\n-5 is present or not-->>>> "<<s.count(-5);


}


*/











































// (ix)  STL Map 
//  ................................


// insert()    erase() 



/*

# include<iostream>
# include<map>
using namespace std;
int main()
{
   map<int,string> m;
   m[1]="babbar";
   m[13]="kumar";
   m[8]="love";

   m.insert({5,"bheem"});

   cout<<"Before erase"<<endl;
   for(auto i:m)
   {
       cout<<i.first<<" "<<i.second<<endl;
   }



   cout<<"\nAfter erase"<<endl;
   m.erase(13);
   for(auto i:m)
   {
       cout<<i.first<<" "<<i.second<<endl;
   }
}

*/









/*


# include<iostream>
#include <map>
using namespace std;
int main()
{
    map<int, int> gquiz1;
 
    // insert elements in random order
    gquiz1.insert(pair<int, int>(1, 40));
    gquiz1.insert(pair<int, int>(2, 30));
    gquiz1.insert(pair<int, int>(3, 60));
    gquiz1.insert(pair<int, int>(4, 90));
    gquiz1.insert(pair<int, int>(5, 50));
    gquiz1.insert(pair<int, int>(6, 50));
    gquiz1.insert(pair<int, int>(7, 10));

    map<int, int>::iterator itr;
    cout << "\nThe map gquiz1 is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) 
    {
        cout<<"\t"<<(*itr).first<<"\t"<<(*itr).second<< '\n';
    }
    cout << endl;

}


*/
































// (x)  STL Algorithims 
//  ................................

/*

# include<iostream>
# include<algorithm>
# include<vector>
using namespace std;
int main()
{
    vector <int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    
    for(int i:v)
    {
        cout<<i<<" ";
    }

    cout<<"\nFinding 6--->>> "<<binary_search(v.begin() , v.end() , 6)<<endl;
    cout<<"lower bound--->>"<<lower_bound(v.begin() , v.end() , 6) -v.begin()<<endl;
    cout<<"Upeer bound-->>"<<upper_bound(v.begin() , v.end() , 6) -v.begin()<<endl;



    int a=3;
    int b=5;
    cout<<"Max-->>"<<max(a,b)<<endl;
    cout<<"Min-->>"<<min(a,b);

    cout<<"\nA before swap= "<<a<<endl;
    cout<<"B before swap="<<b<<endl;


    swap(a,b);
    cout<<"\nA after swap = "<<a<<endl;
    cout<<"B after swap ="<<b<<endl;



    string y="abcd";
    cout<<"Before reverse y = "<<y<<endl;

    reverse(y.begin() , y.end());

    cout<<"After reverse y = "<<y<<endl;


    rotate(v.begin() , v.begin()+1 , v.end());
    cout<<"after rotate "<<endl;

    for(int i:v)
    {
        cout<<i<<" ";
    }


    sort(v.begin() , v.end());
    cout<<"\n Sorting "<<endl;
    for(int i:v)
    {
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
    vector<int> v;
    int n;
    int value;
    int ele;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        v.push_back(value);
    }

    for(int i:v)
    {
        cout<<i<<" ";
    }

    cout<<"\n";


    for(int j=0;j<5;j++)
    {
        cin>>ele;

        if(ele==lower_bound(v.begin(),v.end(),7)-v.begin()+1);
        {
            cout<<"Yes "<<ele<<endl;
        }
        
    }
}

*/




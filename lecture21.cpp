// (v)  STL Stack (LIFO)
//  ................................



// push()   pop()   size()   top()  empty()


/*

# include<iostream>
# include<stack>
using namespace std;
int main()
{
    stack<string> s;
    s.push("Love");
    s.push("babbar");
    s.push("Kumar");

    cout<<"Top element = "<<s.top()<<endl;

    cout<<"size of stack before pop = "<<s.size()<<endl;




    s.pop();
    cout<<"Top element after pop = "<<s.top()<<endl;


    cout<<"size of stack after pop = "<<s.size()<<endl;

    cout<<"Empty or not = "<<s.empty();

}

*/


































// (vi)  STL Queue (FIFO)
//  ................................



// push()   pop()   size()   front()   back()    empty()


/*

# include<iostream>
# include<queue>
using namespace std;
int main()
{
    queue<string> q;
    q.push("shubham");
    q.push("Kumar");
    q.push("sharma");

    cout<<"first element = "<<q.front()<<endl;
    cout<<"last element = "<<q.back()<<endl;

    cout<<"size of queue before pop = "<<q.size()<<endl;

    q.pop();
    cout<<"first element after pop = "<<q.front()<<endl;
    cout<<"size of queue after pop = "<<q.size()<<endl;

    cout<<"empty or not = "<<q.empty()<<endl;


}



*/






























// (vii)  STL Priority Queue
//  ................................



// push()   pop()    top()    size()    empty()


/*

# include<iostream>
#include<queue>
using namespace std;
int main()
{
   // max heap
    priority_queue <int> maxi;

    // min heap
    priority_queue <int , vector <int> , greater <int> > mini;


    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    cout<<maxi.size()<<endl;
    cout<<"TOP----->>>>> "<<maxi.top()<<endl;

    int n=maxi.size();
    for(int i=0;i<n;i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;

    cout<<"Maxi is Empty or not = "<<maxi.empty()<<endl;




    
    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);

    cout<<"\n";
    cout<<mini.size()<<endl;
    cout<<"TOP----->>>>> "<<mini.top()<<endl;

    int g=mini.size();
    for(int i=0;i<g;i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;


    cout<<"Mini is Empty or not = "<<mini.empty()<<endl;


}



*/












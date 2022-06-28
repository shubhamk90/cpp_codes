// C++ HackerRank Solutions






//  (1) Hello world

/*
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    cout<<"Hello, World!";
} 
*/







// (2) input and output

/*
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a,b,c;
    cin>>a>>b>>c;
    cout<<a+b+c;   
}
*/










// (3) Basic data types

/*  
#include <iostream>
#include<bits/stdc++.h>
#include <cstdio>
using namespace std;

int main() {
    int a;
    long b;
    char c;
    float d;
    double e;
    cin>>a>>b>>c>>d>>e;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<fixed<<setprecision(3)<<d<<endl;              //  Library: iomanip
    cout<<fixed<<setprecision(9)<<e<<endl;
}
*/







// (4)  Conditional Statements

/*
int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    
    cin>>n;
    if(n==1)
    {
        cout<<"one";
    }
    
    else if(n==2)
    {
        cout<<"two";
    }
    
    else if(n==3)
    {
        cout<<"three";
    }
    
    else if(n==4)
    {
        cout<<"four";
    }
    
    else if(n==5)
    {
        cout<<"five";
    }
    
    else if(n==6)
    {
        cout<<"six";
    } 
    
    else if(n==7)
    {
        cout<<"seven";
    }
    
    else if(n==8)
    {
        cout<<"eight";
    }
    
    else if(n==9)
    {
        cout<<"nine";
    }
    
    
    else{
        cout<<"Greater than 9";
    }
    
}
*/  











// (5) For loop

/*
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b,n;
    cin>>a;
    cin>>b;
    
    for(n=a;n<=b;n++)
    {
        if(n==1)
    {
        cout<<"one"<<endl;
    }
    
    else if(n==2)
    {
        cout<<"two"<<endl;
    }
    
    else if(n==3)
    {
        cout<<"three"<<endl;
    }
    
    else if(n==4)
    {
        cout<<"four"<<endl;
    }
    
    else if(n==5)
    {
        cout<<"five"<<endl;
    }
    
    else if(n==6)
    {
        cout<<"six"<<endl;
    } 
    
    else if(n==7)
    {
        cout<<"seven"<<endl;
    }
    
    else if(n==8)
    {
        cout<<"eight"<<endl;
    }
    
    else if(n==9)
    {
        cout<<"nine"<<endl;
    }
    
    else {
        if(n>9 && n%2==0)
        {
            cout<<"even"<<endl;
        }
        else {
            cout<<"odd"<<endl;
        }
    }
    
    }
}
*/








// (6) Functions
// 1 st Approach By Using Function



/*

#include <iostream>
#include <cstdio>
using namespace std;
int main() 
{
    int a,b,c,d,i;
    cin>>a>>b>>c>>d;
    int arr[4]={a,b,c,d};
    
     for(i=0;i<4;i++)
    {
        cin>>arr[i];
    }
    
    int max=arr[0];
    
     for(i=0;i<4;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<max;
}

*/






// 2nd Approach By using array in a function

/*

#include <iostream>
#include <cstdio>
using namespace std;

int maxi(int a,int b,int c, int d)
{
    int i;
    int arr[4]={a,b,c,d};
    
    for(i=0;i<4;i++)
    {
        cin>>arr[i];
    }
    
    int max=arr[0];
    
     for(i=0;i<4;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
    
  
}




int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<maxi(a,b,c,d);
    
    
    
}

*/











// (7)  Array

/*
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int n,i;
    cin>>n;
   int arr[n];
    
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    for(i=n-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
}

*/









// (8) Strings

/*

#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string a,b; 
    cin>>a>>b;
    
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<a+b<<endl;
    
    swap(a[0],b[0]);
    cout<<a<<" "<<b;
    
    
      
}

*/







// (9) Structs

/*

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct student
{
    int age;
    string first_name;
    string last_name;
    int standard;
};

int main()
 {
    struct student st;
    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
    return 0;
}

*/












// (10) Pointers

/*

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int a,b;
    cin>>a>>b;
    int*pa=&a;
    int*pb=&b;
    
    int c= *pa + *pb;
    int d= *pa - *pb;
    cout<<c<<endl;
    cout<<abs(d)<<endl;
    
}
*/










// (11)  Vector erase

/*

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    vector<int> v;
    int n;
    cin>>n;
    int values;
    
    for(int i=0;i<n;i++)
    {
        cin>>values;
        v.push_back(values);
    }
    int a;
    cin>>a;
    v.erase(v.begin()+a-1);
    
    int b,c;
    cin>>b>>c;
    
    v.erase(v.begin()+b-1 , v.begin()+c-1);
    
    cout<<v.size()<<endl;
    
    for(int i:v)
    {
        cout<<i<<" ";
    }
    
}


*/










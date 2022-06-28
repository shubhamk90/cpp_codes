// Arithmetic operator

/*

#include <iostream>
using namespace std;
int main()
{
    double a;
    int b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Sum of numbers is: "<<a+b;
    cout<<"\nSub of numbers is: "<<a-b;
    cout<<"\nmul of numbers is: "<<a*b;
    cout<<"\ndiv of numbers is:  "<<a/b;
   cout<<"\nre of numbers is:  "<<a%b;
} 

*/






/*

int/int=int
float/int=float
double/int=double


*/















// Relational Operators 

/*

# include <iostream>
using namespace std;
int main() 
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"\na is greater than b "<<(a>b);
    cout<<"\na is less than b "<<(a<b);
    cout<<"\na is less than equal to b "<<(a<=b);
    cout<<"\na is greater than equal to b "<<(a>=b);
    cout<<"\na is equal to  b "<<(a==b);
    cout<<"\na is not equal to than b "<<(a!=b);
}

*/
















/*

# include <iostream>
using namespace std;
int main() 
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;

    if(a==b) {
        cout<<"a is equal to b \n";
    }
    else {
        cout<<" a is not equal to b ";
    }
    return 0;
}

*/

















/*

# include<iostream>
using namespace std;
int main() 
{
    int a,b;
    cout<<"Enter two numbers :";
    cin>>a>>b;
    if(a<b) {
        cout<<a<<" is less than "<<b;
    }
    else {
        cout<<a<<" is not less than "<<b;
    }
}

*/














/*


# include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter the age: ";
    cin>>age;

    if(age>=18) {
        cout<<"Eligible for voting \n";
    }
    else {
        cout<<"Not eligible";
    }
} 

*/




















// Logical operators

/*

# include<iostream>
using namespace std;
int main() 
{
    int x=5,y=3;
    cout<<(x>3 && x<10);
} 

*/








/*

# include<iostream>
using namespace std;
int main() 
{
    int x=5,y=3;
    cout<<(x>3 || x<2);
}

*/










/*

# include<iostream>
using namespace std;
int main() 
{
    int x=5,y=3;
    cout<<(!(x>3 && x<20));
} 

*/











// Assignment operator.



/*

#include <iostream>
using namespace std;
int main() {
  int x = 3;
  cout << x;
  return 0;
}

*/









/*

#include <iostream>
using namespace std;
int main() {
  int x = 5;
  x += 3;
  cout << x;
  return 0;
}

*/









/*

#include <iostream>
using namespace std;

int main() {
  int x = 5;
  x -= 3;
  cout << x;
  return 0;
}

*/









/*

#include <iostream>
using namespace std;

int main() {
  int x = 5;
  x *= 3;
  cout << x;
  return 0;
}

*/









/*

#include <iostream>
using namespace std;

int main() {
  float x = 5;
  x /= 3;
  cout << x;
  return 0;
}

*/






/*

#include <iostream>
using namespace std;
int main() {
  int x = 5;
  x %=3;
  cout << x;
  return 0;
}

*/





















// Conditional operators.
// variable = (condition) ? expressionTrue : expressionFalse;


// Write a program to find out greatest of two numbers using conditional operator..............


/*

#include<iostream>
using namespace std ;
int main()
{
    int x,y,z;
    cout<<"enter two numbers :";
    cin>>x>>y;
    z=(x>y)?x:y;
    cout<<"greater no. is :"<<z;
}

*/











// Write a program to find out greatest of three numbers using conditional operator..............



/*

#include<iostream>
using namespace std;
int main()
{
    int x,y,z,r;
    cout<<"enter three no.s :";
    cin>>x>>y>>z;
    r=(x>y)?(x>z?x:z):(y>z?y:z);
    cout<<"greatest no. is :"<<r;
} 

*/

























// unary operators

/*

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    a=20;
    b=++a;
    cout<<"value of a :"<<a<<endl;
    cout<<"value of b :"<<b;
 
}

*/




















// other operators

/*

#include<iostream>
using namespace std ;
int main()
{
    float d=1.56;
    char c='h';
    cout<<"size of char :"<<sizeof(c)<<endl;
    cout <<"size of d :"<<sizeof(d)<<endl;
    cout<<"address or memory location of d :"<<&d<<endl;
    cout<<"address or memory location of c :"<<&c;
}

*/




















// Typecsating.........from one data type into another.


/*

# include<iostream>
using namespace std;
int main()
{
	int c=45;
	float b=67.89;
	cout<<"Value of c is: "<<c<<endl;
	cout<<"Value of b is: "<<(int)b;

}

*/











/*

# include<iostream>
using namespace std;
int main()
{
    int a='a';
    cout<<a<<endl;

    char ch=98;
    cout<<ch;
}


*/












// Implicit Type Conversion

// IN THE BELOW EXAMPLE      the data type of the expression evaluated on the 
// right hand side of assignment operator is converted into the data type 
// of operand on the left hand side

/*

# include<iostream>
using namespace std;
int main()
{
	float a=6.75;
	float b=7.9;
	int c;
	c=a+b;
	cout<<c;
}

*/









// Explicit Type Conversion

// Now when we run the program and enter the value of temperature
// the result of any value entered gives us 0 as Celsius.
// This is because (5/9) gives us 0 instead of 0.555556 since both are
// integers and result of integer division will gives the result in 
// integer and ignore the fractional part.
// But if we write    c=(float)5/9*(f-32)  this will give correct result in float value .


/*

# include<iostream>
using namespace std;
int main()
{
    float c,f;
    cout<<"Enter temperature in fahrenheit: ";
    cin>>f;
    
    c=(float)5/9*(f-32);
    cout<<c;
}

*/












// bitwise operators

/*

#include<iostream>
using namespace std ;
main()
{int a=4;
int b=6;
cout<<"\nbitwise and :"<<(a&b);
cout<<"\nbitwise or :"<<(a|b);
cout<<endl<<"btwise 1's comp :"<<(~a);
cout<<"\nbitwise XOR :"<<(a^b);
cout<<endl<<"left shift :"<<(a<<1);

}

*/

















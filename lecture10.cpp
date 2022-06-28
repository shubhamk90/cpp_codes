// Functions
// built in functions



// Math functions

/*

# include<iostream>
# include<math.h>
using namespace std;
int main()
{
	int a;
	cout<<"Enter a: ";
	cin>>a;
	
	cout<<"Square root: "<<sqrt(36);
	cout<<"\nSquare root: "<<sqrt(a);
	cout<<"\nPower: "<<pow(2,3);
	cout<<"\nAbsolute Value: "<<abs(-9);   
	cout<<"\nValue: "<<ceil(5.6);
	cout<<"\nValue: "<<floor(5.4);	
}

*/

// abs.......negative nu positive
// ceil....returns the smallest possible integer value which is greater than or equal to the given argument.
// floor...It rounds the value to the nearest integer which is not greater than the given value.












// ctype functions

/*

# include<iostream>
# include<ctype.h>
using namespace std;
int main()
{
	char ch=' ';
	cout<<"Enter character: ";
	cin>>ch;
	
	if(isdigit(ch))
	cout<<"It is a digit";
	
	else if(isalpha(ch))
	cout<<"It is alpha";
	
	else if(isspace(ch))
	cout<<"It is a space";
	
	else 
	{
		cout<<"It is a symbol";
	}	
}

*/










// isspace 

/*

# include<iostream>
# include<ctype.h>
using namespace std;
int main()
{
	char ch=' ';
	
	if(isspace(ch))
	cout<<"It is a space";
	
	else 
	{
		cout<<"It is a symbol";
	}	
}

*/

















// User defined function


// Type 1

/*

# include<iostream>
using namespace std;

void sum();                    // declare
int main()
{
	sum();                    // call
	sum();
}
 
void sum()                   // define
{
	int a,b;
	cout<<"\nEnter a and b: ";
	cin>>a>>b;
	cout<<"Sum "<<(a+b);	
}

*/










/*

# include<iostream>
using namespace std;

void sum()                   // declare and define
{
	int a,b;
	cout<<"\nEnter a and b: ";
	cin>>a>>b;
	cout<<"Sum "<<(a+b);	
}

int main()
{
	sum();                    // call
	sum();
}

*/














// Average of three numbers by using functions



/*

# include<iostream>
using namespace std;

void average()
{
	int a,b,c;
	cout<<"\nEnter three numbers: ";
	cin>>a>>b>>c;
	
	cout<<(float)(a+b+c)/3;
}

int main()
{
	average();
	average();
}

*/









// Greatest of two numbers by using functions

/*

# include<iostream>
using namespace std;

void greatest()
{
	int a,b;
	cout<<"\nEnter two numbers: ";
	cin>>a>>b;
	
	if(a>b)
	cout<<a<<" is greater";
	
	else {
		cout<<b<<" is greater";
	}
	
}

int main()
{
	greatest();
	greatest();
}

*/












// Type 2............. With parameters and no return value



// sum of numbers


/*

# include<iostream>
using namespace std;
void sum(int x,int y)
{
	cout<<"Sum of "<<x<<" and "<<y<<" ="<<(x+y);
}

int main()
{
	int a,b;
	cout<<"Enter a and b: ";
	cin>>a>>b;
	
	sum(a,b);
	sum(a,b);
}


*/








// Average of three numbers


/*


# include<iostream>
using namespace std;
void average(int x,int y,int z)
{
	cout<<"Average of "<<x<<"+"<<y<<"+"<<z<<" = "<<(float)(x+y+z)/3;
}

int main()
{
	int a,b,c;
	cout<<"Enter three numbers: ";
	cin>>a>>b>>c;
	
	average(a,b,c);
}


*/










// factorial of number

/*

# include<iostream>
using namespace std;
void fact(int n)
{
	int i,factorial=1;
	for(i=1;i<=n;i++)
	{
		factorial=factorial*i;
	}
	cout<<"Factorial= "<<factorial;
	
}

int main()
{
	int n;
	cout<<"Enter n: ";
	cin>>n;
	
	fact(n);
	
}

*/

























// Type 3............. Withouot parameters and with return value


/*

# include<iostream>
using namespace std;
int sum()
{
	int a,b;
	cout<<"Enter a and b: ";
	cin>>a>>b;
	return (a+b);
}

int main()
{
	cout<<"Sum="<<sum();
}


*/










/*


# include<iostream>
using namespace std;
int fact()
{
	int n,i,factorial=1;
	cout<<"Enter n: ";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		factorial=factorial*i;
	}
	return(factorial);
}

int main()
{
	cout<<"Factorial="<<fact();
}


*/


























// Type 4............. With parameters and with return value


/*


# include<iostream>
using namespace std;
int sum(int x, int y)
{
	return(x+y);
}

int main()
{
	int a,b;
	cout<<"Enter two numbers: ";
	cin>>a>>b;
	
	cout<<"Sum="<<sum(a,b);
}


*/









/*


# include<iostream>
using namespace std;
int greatest(int x,int y)
{
	if(x>y)
	{
		return(x);
	}
	
	else{
		return(y);
	}
}

int main()
{
	int a,b;
	cout<<"Enter a and b: ";
	cin>>a>>b;
	
	cout<<"Greatest Number= "<<greatest(a,b);
}


*/

















// To find sum multiple times.....

/*

# include<iostream>
using namespace std;
int sum(int a,int b)
{
	return(a+b);
}

int main()
{
	int a,b;
	cout<<"Enter two numbers: ";
	cin>>a>>b;
    cout<<"Sum="<<sum(a,b);



    int c,d;
	cout<<"\nEnter two numbers: ";
	cin>>c>>d;
    cout<<"Sum="<<sum(c,d);




}

*/








// OR






/*

# include<iostream>
using namespace std;
int sum()
{
    int a,b;
    cout<<"\nEnter a and b: ";
    cin>>a>>b;
    return(a+b);
}

int main()
{
    int c;
    c=sum();
    cout<<"Sum="<<c;

    c=sum();
    cout<<"Sum="<<c;

    c=sum();
    cout<<"Sum="<<c;

    c=sum();
    cout<<"Sum="<<c;
}

*/








// I PREFER 4th TYPE TO SOLVE FUNCTION PROBLEMS;











// Multiple  functions in one program
// Function da name same nhi ho sakde 


/*

# include<iostream>
using namespace std;
int run(int a,int b)
{
    return (a+b);
}


int gun( int a, int b)
{
    return (a-b);
}


int main()
{
    int a=5,b=2;
    cout<<run(a,b)<<endl;
    cout<<gun(a,b);

}

*/














//  CALL BY VALUE

/*

# include<iostream>
using namespace std;
void pass(int a)
{
	a=a*a;
	cout<<"A in function: "<<a;

}

int main()
{
	int a;
	cout<<"Enter a: ";
	cin>>a;

	pass(a);
	cout<<"\nA in main: "<<a;


}

*/











// CALL BY REFERENCE

/*

# include<iostream>
using namespace std;
void pass(int &a)
{
	a=a*a;
	cout<<"A in function: "<<a;

}

int main()
{
	int a;
	cout<<"Enter a: ";
	cin>>a;

	pass(a);
	cout<<"\nA in main: "<<a;


}

*/








// CALL BY ADDRESS

/*

#include <iostream>
using namespace std;
void increment(int *a)
{
    (*a)++;
    cout << "Value in Function increment: "<< *a <<endl;
}
 
int main()
{
    int x = 5;
    increment(&x); 
    cout << "Value in Function main: "<< x <<endl;
    return 0;
}

*/



// power of number

/*
# include<iostream>
using namespace std;
float power(float a,int b)
{
    int i;
    float ans=1;
    for(i=1;i<=b;i++)
    {
        ans=ans*a;
    }
    return(ans);

}

int main()
{
    float a;
    int b;
    cout<<"Enter a and b: ";
    cin>>a>>b;

    cout<<"Power="<<power(a,b);

}

*/




// counting of a number

/*

# include<iostream>
using namespace std;
void count(int n)
{
    int i;
    for(i=1;i<=n;i++)
    cout<<i<<" ";

}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    count(n);
}

*/


// nCr program 
// nCr = n! / (r! * (n - r) ! )


/*

# include<iostream>
using namespace std;
int fact(int n)
{
    int i=1,factorial=1;
    for(i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }

    return(factorial);
    
}

int main()
{
    int n,r,ans;
    cout<<"Enter n and r: ";
    cin>>n>>r;

    ans=fact(n)/(fact(r)*fact(n-r));
    cout<<ans;

}

*/















// Function overloading

/*

# include<iostream>
using namespace std;

int sum(int x, int y)
{
	return (x+y);
}


int sum(int x,int y,int z)
{
	return (x+y+z);
}


double sum(int x, double y)
{
	return (x+y);
}


double sum(double x,double y)
{
	return(x+y);
}

int main()
{
	cout<<"Sum="<<sum(10,20)<<endl;
	cout<<"Sum="<<sum(10,20,30)<<endl;
	cout<<"Sum="<<sum(10,20.6)<<endl;
	cout<<"Sum="<<sum(10.4,20.4)<<endl;
}

*/










/*


# include<iostream>
using namespace std;

int area(int l,int b)
{
	return (l*b);
}


double area(double a,int b,int h)
{
	return(a*b*h);
}


double area(double p,int r)
{
	return (p*r*r);
}


int main()
{
	cout<<"Area of rectangle="<<area(10,8)<<endl;
	cout<<"Area of triangle="<<area(0.5,8,2)<<endl;
	cout<<"Area of circle="<<area(3.14,2)<<endl;
}


*/







// Inline function
// Compile hun to pehle...getmax...di jagah...return (a>b)?a:b...ajuga
// function di body 1 line di aa ta inline work kruga
// 2 to 3 line di a inline di marzi
// 3 to jyade ah ta work nhi kruga


/*

# include<iostream>
using namespace std;
inline int getmax(int &a, int &b)
{
    return (a>b)?a:b;
}


int main()
{
    int a=1,b=2;
    int ans=0;
    ans=getmax(a,b);
    cout<<ans<<endl;

    a=a+3;
    b=b+1;
    ans=getmax(a,b);
    cout<<ans<<endl;


}

*/












// Passing array to a function

/*

# include<iostream>
using namespace std;

void sum(int b[],int l)
{
	int sum=0,i;
	for(i=0;i<l;i++)
	{
		sum=sum+b[i];
	}
	cout<<"Sum="<<sum;
}

int main()
{
	int a[30],i,n;
	cout<<"Enter n: ";
	cin>>n;
	
	cout<<"Enter array elements: ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	sum(a,n);
	
}

*/








/*



#include<iostream>
using namespace std;
void display(int b[][30],int r,int c)
{
	int i,j;
	cout<<"Array elements are: \n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<b[i][j]<<"\t";
		}
		cout<<endl;
	}
}


int main()
{
	int a[30][30],r,c,i,j;
	cout<<"Enter rows and columns: ";
	cin>>r>>c;
	
	cout<<"Enter array elements: ";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
		
	}
	display(a,r,c);
}


*/




















// Recursion
// Factorial

/*

# include<iostream>
using namespace std;
int fact(int n)
{
	if(n==1 || n==0)
		return 1;
		else {
			return n*fact(n-1);
		}
}

int main()
{
	int n;
	cout<<"Enter n: ";
	cin>>n;
	cout<<"Factorial: "<<fact(n);
}

*/




// fibonacci series of nth term

/*

# include<iostream>
using namespace std;
int fib(int n)
{
	if(n==1)
	return 0;

	else if(n==2)
	return 1;

	else {
		return fib(n-1) + fib(n-2);
	}

}

int main()
{
	int n;
	cout<<"Enter n: ";
	cin>>n;
	cout<<fib(n);
}

*/







// fibonacci series

/*

# include<iostream>
using namespace std;
int fib(int n)
{
	if(n==1)
	return 0;

	else if(n==2)
	return 1;

	else {
		return fib(n-1) + fib(n-2);
	}
}

int main()
{
	int n,i;
	cout<<"Enter n: ";
	cin>>n;

	for(i=1;i<=n;i++)
	{
		cout<<" "<<fib(i);
	}
}

*/






















// Storage classes

// without staticvalue starts from 0
// static takes old value


/*

# include<iostream>
using namespace std;

void func()
{

static int count=0;
count++;

cout<<"Function="<<count<<"\n";

}

int main()
{
	func();
	func();
	func();
	
	return 0;
}

*/








/*

# include<iostream>
# include"file2.cpp"
using namespace std;

extern int count;

int main()
{
	cout<<"Count="<<count<<endl;
	count=1;
	cout<<"Count="<<count;
	
}

*/









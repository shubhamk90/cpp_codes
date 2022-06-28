// CH=1....cin and cout


// ....Single line comments

/*
  Multiline
  comments
*/

// Single quote written by....\'     \' or '  '
// Double quote written by....\''     \''
// For new line.........\n
// For new line.........<<endl
// For tab.........\t
// Print backslash...\\   //





/*


# include<iostream>
using namespace std;
int main() 
{
	cout<<"Hello World!"<<endl;
	cout<<"Welcome to \''Programming\''! \nHave a nice day!"<<endl;
	cout<<"Welcome to Programming ! \tMen"<<endl;
	cout<<"Hello\\Shubham\\";

	return 0;
}

*/











// Two \n characters after each other will create a blank line:

/*

#include <iostream>
using namespace std;

int main() {
  cout << "Hello World! \n\n";
  cout << "I am learning C++";
  return 0;
}

*/










// Programm to calculate area of rectangle.........

/*

#include<iostream>
using namespace std;
int main() 
{
	int l,b;
	l=10,b=20;
	cout<<"Area of Rectangle is "<<l*b;
} 

*/



/*

#include<iostream>
using namespace std;
int main() 
{
	int a,b;
	a=10,b=20;
	cout<<"Sum of two numbers= "<<a+b;
}

*/








/*

#include<iostream>
using namespace std;
int main() 
{
	int a,b,sum;
	a=10,b=20;
	sum=a+b;
	cout<<"Sum of "<<a<<" and "<<b<<" = "<<sum;
}

*/
















/*

#include<iostream>
using namespace std;
int main() 
{
	int a,b;
	a=10,b=20;
	cout<<"Sum of two numbers:a="<<a<<",b="<<b<<"="<<a+b;
}

*/












/*

#include<iostream>
using namespace std;
int main() 
{
	int a,b;
	a=10,b=20;
	cout<<"Sum of two numbers:\n"<<"("<<a<<"+"<<b<<")="<<a+b<<endl;
	cout<<"Sum of two numbers\n"<<"("<<a<<"+"<<b<<")"<<"="<<a+b;
}
 
*/















// Note that if you assign a new value to an existing variable, it will overwrite the previous value:

/*

# include<iostream>
using namespace std;
int main()
{
int myNum = 15;  
myNum = 10;  
cout << myNum;  
} 

*/










// You should always declare the variable as constant when you have values that are unlikely to change:
// pie will always be 3.14 you cannot overwrite the value:


/*

# include<iostream>
using namespace std;
int main() 
{
	const float pie=3.14;
	int r=3;
	float area=pie*r*r;
	cout<<"Area of Circle is:"<<area;
}  

*/














/*

#include<iostream>
using namespace std;
int main()
{
	int a,b,c,average;
	a=10,b=10,c=10;
	average=(a+b+c)/3;
	cout<<"Average of three numbers is :"<<average;
}

*/








/*

# include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	float average;
	a=10,b=10,c=11;
	average=float(a+b+c)/3;
	cout<<"Average of three numbers is :"<<average;
}

*/










// User input.....Take input from the user.

/*
	
# include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter the value of a and b: ";
	cin>>a>>b;
	cout<<"Sum of a and b: "<<a+b;
}

*/











/*

# include<iostream>
using namespace std;
int main()
{
	int a,b,c,average;
	cout<<"Enter the value of a b c: ";
	cin>>a>>b>>c;
	average=(a+b+c)/3;
	cout<<"Average= "<<average;

}

*/












/*

# include<iostream>
using namespace std;
int main() 
{
	float pie,area;
	int r;
	cout<<"Enter the value of pie: ";
	cin>>pie;
	cout<<"Enter the value of r: ";
	cin>>r;
	area=pie*r*r;
	cout<<"Area="<<area;
	
}

*/
















/*

# include<iostream>
using namespace std;
int main()
{
	int p,n,r;
	int si;

	cout<<"Enter the principal: ";
	cin>>p;
	
	cout<<"Enter no. of years: ";
	cin>>n;
	
	cout<<"Enter rate of intrest: ";
	cin>>r;
	
	si=(float)(p*n*r)/100;
	cout<<"Simple interest= "<<si;
	
}

*/









// Program to swap two numbers

/*

# include<iostream>
using namespace std;
int main()
{
    int a,b;
    int temp;

    cout<<"Enter a and b: ";
    cin>>a>>b;
    cout<<"A="<<a<<" B="<<b;

    temp=a;
    a=b;
    b=temp;
    cout<<"\nA="<<a<<" B="<<b;
    
}

*/
// Loops






// While loop.............



// print n natural numbers.


/*

# include<iostream>
using namespace std;
int main() 
{
	int i=1,n;
	cout<<"Enter n: ";
	cin>>n;

	while(i<=n)
	{
		cout<<i<<endl;
		i++;
	}
}

*/
















// print n natural numbers in reverse order.

/*

# include<iostream>
using namespace std;
int main() 
{
	int i=1,n;
	cout<<"Enter n: ";
	cin>>n;

	while(n>=i)
	{
		cout<<n<<endl;
		n--;
	}
}


*/
















// Sum of natural numbers.

/*


# include<iostream>
using namespace std;
int main() 
{ 
	int i=1;
	int n;
	int sum=0;
	cout<<"Enter value of n: ";
	cin>>n;
	while(i<=n) { 
	sum=sum+i;
	i++;
	} 	
	cout<<sum;		
} 


*/













// even numbers between 1-10.

/*

# include<iostream>
using namespace std;
int main() 
{
	int a=2;
	int n;
	cout<<"Enter value of n: ";
	cin>>n;
	
	while(a<=n) {
		cout<<a<<endl;
		a=a+2;
	} 
	
}

*/







// second method........

/*

# include<iostream>
using namespace std;
int main() 
{
	int a=2;
	int n;
	cout<<"Enter n: ";
	cin>>n;
	
	while(a<=n) {
		if(a%2==0) {
			cout<<a<<endl;
		} 
		a++;
	}
		
}

*/


















// odd numbers between 1-10.

/*

# include<iostream>
using namespace std;
int main()
{
    int i=1,n=10;
    while(i<=n)
    {
        if(i%2!=0)
        {
            cout<<i<<endl;
        }
        i++;
    }
}

*/







// second method

/*

# include<iostream>
using namespace std;
int main()
{
    int i=1,n=10;
    while(i<=n)
    {
        if(i%2!=0)
        {
            cout<<i<<endl;
        }
        i++;
    }
}

*/
















// Sum of digits

/*

# include <iostream>
using namespace std;
int main()
{
	int num,rem,sum=0;
	cout<<"Enter the number: ";
	cin>>num;
	while(num>0) 
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	cout<<"Sum of digits= "<<sum;
	
}

*/












// Subtract the product and sum of a digit

/*

# include<iostream>
using namespace std;
int main()
{
    int n,sum=0,product=1,rem,ans;
    cout<<"Enter n: ";
    cin>>n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        product=product*rem;
        n=n/10;
    }
    ans=product-sum;
    cout<<ans;
}

*/













// Armstrong number.....

/*

# include<iostream>
using namespace std;
int main() 
{
	int num,rem,cube,sum=0;
	cout<<"Enter the number: ";
	cin>>num;
	int a=num;
	
	while(num>0)
	{
		rem=num%10;
		cube=rem*rem*rem;
		sum=sum+cube;
		num=num/10;
		
	}
	if(a==sum) {
		cout<<"Armstrong";
	}
	else {
		cout<<"Not amrstrong";
	}

}


*/

















// Palindrome Number.......

/*

#include <iostream>  
using namespace std;  
int main()  
{  
  int n,r,sum=0,temp;    
  cout<<"Enter the Number=";    
  cin>>n;    
 temp=n;    
 while(n>0)    
{    
 r=n%10;    
 sum=(sum*10)+r;    
 n=n/10;    
}    
cout<<"sum: "<<sum<<endl;

if(temp==sum)    
cout<<"Number is Palindrome.";    
else    
cout<<"Number is not Palindrome.";   
  return 0;  
}

*/











// Reverse an integer.........

/*

# include<iostream>
using namespace std;
int main()
{
    int n,rem,sum=0;
    cout<<"Enter n: ";
    cin>>n;

    while(n>0)
    {
        rem=n%10;
        sum=(sum*10)+rem;
        n=n/10;
    }
    cout<<sum;
}

*/














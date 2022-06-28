// for loop


// print n natural numbers in reverse order.

/*

# include<iostream>
using namespace std;
int main()
{
	int i,n;
	cout<<"Enter n: ";
	cin>>n;
	
	for(i=n;i>=1;i--)
	{
		cout<<i<<endl;
	}
}

*/

















// print n natural numbers.

/*

# include<iostream>
using namespace std;
int main()
{
	int i;
	i=1;
	
	for(i=1;i<=10;i++)
	{
		cout<<i<<endl;
	}
}

*/















// Prime Number


/*

# include<iostream>
using namespace std;
int main()
{
	int count=0,i,n;
	cout<<"Enter n: ";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		if(n%i==0) {
			count++;
		}
	}
	
	if(count==2) {
		cout<<"Prime";
	}
	
	else {
		cout<<"Not Prime";
	}
}


*/










// Fibonacci series 


/*


# include<iostream>
using namespace std;
int main()
{
	int n1=0,n2=1,n3,t,i;
	cout<<"Enter t: ";
	cin>>t;
	
	cout<<"Fibonacci series:"<<n1<<" "<<n2;
	
	for(i=3;i<=t;i++) 
	{
		n3=n1+n2;
		cout<<" "<<n3;
		n1=n2;
		n2=n3;
		
	
	}
}


*/















// Factorial



/*

# include<iostream>
using namespace std;
int main()
{
	int i,n,factorial=1;
	cout<<"Enter n: ";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
	
	factorial=factorial*i;
	if(i==n) {
		cout<<i<<"=";
	}
	else{

	cout<<i<<"*";
}
	
	}
	
	cout<<factorial;
	
}


*/













// print sum of  even number series:-
// 2+4+6......


/*

# include <iostream>
using namespace std;
int main()
{
	int i,n,sum=0;
	cout<<"Enter n: ";
	cin>>n;
	
	for(i=2;i<=n;i=i+2)
	{
		sum=sum+i;
		if(i==n)
		{
			cout<<i<<"=";
		}
		
		else {
			cout<<i<<"+";
		}
		
	}
	
	cout<<sum;

}

*/











// print sum of odd number series
// 1+3+5


/*

# include <iostream>
using namespace std;
int main()
{
	int i,n,sum=0;
	cout<<"Enter n: ";
	cin>>n;
	
	for(i=1;i<=n;i=i+2)
	{
		sum=sum+i;
		if(i==n)
		{
			cout<<i<<"=";
		}
		
		else {
			cout<<i<<"+";
		}
		
	}
	
	cout<<sum;

}

*/














// print this series square of number
// 1+4+9+16+25.....

/*

# include <iostream>
using namespace std;
int main()
{
	int i,n,sum=0;
	cout<<"Enter n: ";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		sum=sum+i*i;
			
		
		if(i==n)
		{
			cout<<i*i<<"=";
		}
		
		else {
			cout<<i*i<<"+";
		}	
	}
	cout<<sum;
}

*/













// Multipliction Table of given number

/*

# include<iostream>
using namespace std;
int main()
{
	int i,n;
	cout<<"Enter the number: ";
	cin>>n;

	for(i=1;i<=10;i++)
	{
		cout<<n<<"X"<<i<<"="<<n*i<<endl;
	}
}

*/











// sum of odd number

/*

# include<iostream>
using namespace std;
int main()
{
	int i=1,n,sum=0;
	cout<<"Enter n: ";
	cin>>n;

	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			sum=sum+i;
		}
	}
	cout<<sum;
}

*/













// sum of even number

/*

# include<iostream>
using namespace std;
int main()
{
	int i=1,n,sum=0;
	cout<<"Enter n: ";
	cin>>n;

	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			sum=sum+i;
		}
	}
	cout<<sum;
}

*/
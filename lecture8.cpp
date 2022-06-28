// Print this pattern

/*

A
BC
DEF
GHIJ

*/



/*

# include<iostream>
using namespace std;
int main()
{
	char ch='A';
	int i,j;

	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<ch;
			ch++;
		}
		cout<<"\n";
	}
}


*/















// Print this pattern

/*

A
BB
CCC
DDDD


*/



/*

# include<iostream>
using namespace std;
int main()
{
	int i,j;
	char ch='A';
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
		cout<<ch;
		}
		ch++;
		cout<<"\n";
	}
}

*/
	
	
	










// Print this pattern

/*

AAA
BBB
CCC


*/
	

/*


# include<iostream>
using namespace std;
int main()
{
	int i,j;
	char ch='A';

	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			cout<<ch;
		}
		ch++;
		cout<<"\n";
	}
}

*/

















// Print this pattern

/*

ABC
DEF
GHI

*/



/*

# include<iostream>
using namespace std;
int main()
{
	int i,j;
	char ch='A';
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			cout<<ch;
			ch++;
		}
		
		cout<<"\n";
	}

}

*/


















// Print this pattern

/*

   *
  **
 ***
****

*/



/*

#include <iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++)
		{
			if(j<=4-i)
			{
				cout<<" ";
			}
			else {
				cout<<"*";
			}
		}
		cout<<endl;
	}
}

*/













// Print this pattern

/*

****
 ***
  **
   *

*/



/*


#include <iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=4;i>=1;i--)
	{
		for(j=1;j<=4;j++)
		{
			if(j<=4-i)
			{
				cout<<" ";
			}
			else {
				cout<<"*";
			}
		}
		cout<<endl;
	}
}


*/



















// do while loop

/*

# include<iostream>
using namespace std;
int main()
{
	int i=1,n=5;
	do {
		if(i%2==0)
		{
			cout<<i<<endl;
		}
		i++;
	}
	while(i<=n);
}

*/














// Multiplication Table of a given number

/*

# include<iostream>
using namespace std;
int main()
{
	int i=1,n;
	cout<<"Enter n: ";
	cin>>n;

	do{
		cout<<n<<"X"<<i<<"="<<n*i<<endl;
		i++;
	}
	while(i<=n);
}

*/
















// break statement

/*

# include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter n: ";
	cin>>n;

	for(i=1;i<=n;i++)
	{
		
		if(i==5)
		{
			break;
		}
		cout<<i;
	}
}

*/







//            OR




/*

# include<iostream>
using namespace std;
int main()
{
	int n,i=1;
	cin>>n;

	while(i<=n)
	{
		cout<<i;
		i++;

		if(i==5)
		{
			break;
		}
	}
}
	
*/
























// continue statement

/*

# include<iostream>
using namespace std;
int main()
{
	int i=1;
	for(i=1;i<=20;i++)
	{
		if(i%2!=0)
		{
			continue;
		}
		cout<<i<<endl;
	}
}

*/








//            OR








/*

# include<iostream>
using namespace std;
int main()
{
	int i=1;
	while(i<=20)
	{
		if(i%2!=0)
		{
		i++;
		continue;
		}
		cout<<i<<endl;	
		i++;
		
	}
}


*/





// Strings

//.....'\0'.....terminating character of a string









// Declare string

/*

# include<iostream>
using namespace std;
int main()
{
	string str;
	cout<<"Enter the string: ";
	cin>>str;

	cout<<str;
}

*/








// input multiple word string

/*

# include<iostream>
using namespace std;
int main()
{
	string str;
	cout<<"Enter the string: ";
	getline(cin,str);
	cout<<str;
}

*/









// kise vv 1 character nu print krona hhove 

/*

# include<iostream>
using namespace std;
int main()
{
	string str;
	string str1(5,'n');
	cout<<str1;
}

*/

















/*

# include<iostream>
using namespace std;
int main()
{
	char str[20]="Hello";
	cout<<str;
	
}

*/












/*

# include<iostream>
using namespace std;
int main()
{
	char str[20];
	cout<<"Enter string: ";
	cin>>str;
	
	cout<<str;
}

*/














// input multiple word string
// cin.getline  same as cin.get

/*

# include<iostream>
using namespace std;
int main()
{
	char str[20];
	cout<<"Enter string: ";
	cin.get(str,20);          // cin.get.......for input multiple word string
	
	cout<<str;
}

*/










// multiple line 
// cin.getline  same as cin.get

/*

# include<iostream>
using namespace std;
int main()
{
	char str[40];
	cout<<"Enter string: ";
	cin.get(str,40,'$');        
	cout<<"\nString output\n"<<str;
}

*/











// String Methods

// (i) strlen()
// using input function

  
/*

# include<iostream>
# include<string.h>
using namespace std;
int main()
{
	char str[20];
	int count;
	cout<<"Enter string: ";
	cin.get(str,20);
	count=strlen(str);
	cout<<"Length of string="<<count;
	
}

*/






// without function

/*

# include<iostream>
using namespace std;
int main()
{
	char str[20];
	int i;
	
	cout<<"Enter string: ";
	cin.get(str,20);
	
	for(i=0;str[i]!='\0';i++);
	cout<<i;
	
	
}

*/







// (ii) strrev()
// using input function



/*

# include<iostream>
# include<string.h>
using namespace std;
int main()
{
	char str[20]="Hello";
	strrev(str);
	cout<<str;
}

*/











// (iii) strcpy()
// using input function


/*

# include<iostream>
# include<string.h>
using namespace std;
int main()
{
	char st1[20]="Hello";
	char st2[20];
	strcpy(st2,st1);
	cout<<st2;
}
*/



// without function

/*

# include<iostream>
using namespace std;
int main()
{
	int i;
	char st1[20]="Hello";
	char st2[20];
	
	for(i=0;st1[i]!='\0';i++)
	{
		st2[i]=st1[i];
	}
	
	st2[i]='\0';
	
	cout<<"Copied String= "<<st2;
}

*/










// (iv) strcat()
// using input function


/*

# include<iostream>
# include<string.h>
using namespace std;
int main()
{
	char st1[20]="Hello";
	char st2[20]=" World";
	
	strcat(st1,st2);
	cout<<st1;
}

*/





// without function

/*

# include<iostream>
using namespace std;
int main()
{
	int i,j;
	char st1[20]="Hello";
	char st2[20]=" World";
	
	for(i=0;st1[i]!='\0';i++);
	for(j=0;st2[j]!='\0';j++,i++)
	{
	st1[i]=st2[j];
	}
	st1[i]='\0';
	cout<<"After concatenation= "<<st1;
	
}

*/









// (v) strcmp()
// using input function

/*

# include<iostream>
# include<string.h>
using namespace std;
int main()
{
	char st1[20]="hello";
	char st2[20]="world";
	
	if(strcmp(st1,st2)==0)
	cout<<"Strings are equal";
	
	else if(strcmp(st1,st2)>0)
	cout<<"First string is greater than second";
	
	else {
		cout<<"First string is smaller than second";
	}
		
}

*/















//  without function

/*

# include<iostream>
using namespace std;
int main()
{
	int i,j;
	
	char st1[20]="Hello";
	char st2[20]="World";
	
	while(st1[i]==st2[i] && st1[i]!=0)
	{
		i++;
	}
	
	if(st1[i]>st2[i])
	cout<<"First string is greater than second";
	
	else if(st1[i]<st2[i])
	cout<<"First string is smaller than second";
	
	else {
		cout<<"First string is equal to second string";
	}
		
}

*/












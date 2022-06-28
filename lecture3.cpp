// if statement 


/*

# include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter the value of a : ";
	cin>>a;

	if(a%2==0)
	{
		cout<<"Even number";
	}
}


*/









/*

# include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter the value of a : ";
	cin>>a;

	if(a%2==0)
	{
		cout<<"Even number"<<endl;
	}
	cout<<"End of program";
}


*/































// if - else  statement 



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



























// nested if


// Find the  Greatest of three numbers.............

/*

# include<iostream>
using namespace std;
int main() 
{
	int n1,n2,n3;
	cout<<"Enter n1,n2,n3: ";
	cin>>n1>>n2>>n3;
	
	if(n1>n2) {
		
		if(n1>n3) {
		cout<<n1<<" is greater";} 
		else {
		cout<<n3<<" is greater";
		}
			
	}
	else {
		if(n2>n3) {
			cout<<n2<<" is greater";
		}
		
		else{
		
			cout<<n3<<" is greater";
	
		}
	}
		
}

*/








 //  (2).....
// Program to check number entered by the user is positive or negative and
// if number is positive check it is even or odd   and if number is 
// negative check even or odd using nested if.




/*

#include<iostream>
using namespace std;
int main() 
{
	int a;
	cout<<"Enter value of a: ";
	cin>>a;
	
	if(a>0) {
		if(a%2==0) {
			cout<<"No is positive even";
		} 
		else {
			cout<<"No is positive odd";	
		}
		
	}
	
	else {
		
		if(a%2==0) {
			cout<<"No is negative even";
		}
		
		else{
		cout<<"No is negative odd";
	}
	
	}	
}

*/












// (3)....
// program to check number is divisible by 3 or 7 or both using nested if


/*


# include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter the value of a: ";
	cin>>a;
	
	if(a%3==0) {
		
		if(a%7==0) {
			cout<<"No is divisible by 7 and 3";
		}
		else {
			cout<<"No is divisible by 3";
		} 
		
		
	} else {
		
		if(a%7==0) {
			cout<<"divisible by 7";
		} 
		else{
			cout<<"not Divisible by 3 and 7";
		}
	}
	
		
} 


*/













// (4)....
// Program to check age of user according to following conditions using nested if
// (i) less than 18=minor not eligible
// (ii) equal or greater to 18 and lss than or equal to 55=eligible for job
// (iii) more than 55=too old not eligible for job




/*

# include<iostream>
using namespace std;
int main() 
{
	int age;
	cout<<"Enter the age: ";
	cin>>age;
	
	if(age>=18) { 
	
		if(age<=55) {
			cout<<"Eligible for job";
		}
		else {
			cout<<"too old not eligible for job";
		}
		
		
		
	}
	
	else {
		
		if(age<0) {
			cout<<"invalid age";	
		}
		else {
			cout<<"Minor not eligible";
		}
		
	}
	
	
	
	}	
	
	

*/















// (5)....
// Program to check year entered by the user is leap year or not.Firstly check it is century
// year(which is divisible by 100) or non century year.if it is century check it is
// leap(divisible by 400)or not and if non century check leap (divisible by 4) or not.




/*


# include<iostream>
using namespace std;
int main() 
{
    int a;
    cout<<"Enter the value of a: ";
    cin>>a;

    if(a%100==0) {

        if(a%400==0) {
            cout<<"It is leap year";
        }
        else {
            cout<<"No leap year";
        }
 
 
    } 
    else {

        if(a%4==0) {
            cout<<"Leap year";
        }

        else {
            cout<<"Not leap year";
        }
    }




}


*/














// (6)......
// Program to check two numbers are greater,equal or less than using nested if 




/*

# include <iostream>
using namespace std;
int main() 
{
    int a,b;
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;

    if(a>b) {
        cout<<"a is greater";
    } 
    else{ 

        if(a==b) {
            cout<<"a is equal to b";
        } 
        else {
            cout<<"a is smaller";
        }

    }



}



*/







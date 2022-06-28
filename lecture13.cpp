// POINTERS


// Pointer are variables that stores the address of other variable 
// &....Address of operator
// *....Dereference of operator

/*

# include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *aptr=&a; 

    cout<<"Value of variable a =  "<<a<<endl;                 
    cout<<"The address of a =  "<<&a<<endl;                     
    cout<<"variable stores the address of a =  "<<aptr<<endl;              

}

*/


// *aptr....pointer variable
//  &a......address of a       
//  aptr....stores address of a












/*

# include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *aptr=&a;

    cout<<"Value of variable a =  "<<a<<endl;                 
    cout<<"The address of a =  "<<&a<<endl;                     
    cout<<"variable stores the address of a =  "<<aptr<<endl;
    cout<<"access the value of the variable whose address is stored in it = "<<*aptr;

}

*/

// * aptr.....access the value of the variable whose address is stored in it (i.e *aptr=a)


















/*

# include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *aptr=&a;

    cout<<*aptr<<endl;

    *aptr=20;              // We can also Overwrite the value of the variable 

    cout<<*aptr;


}

*/













/*

# include<iostream>
using namespace std;
int main()
{
    int i=5,j=2;
    int *ptr=&i;

    cout<<&i<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    *ptr=10;
    cout<<"Value of i = "<<*ptr<<endl;

    j=*ptr;
    cout<<"Value of j = "<<j;


}

*/


















// Pointers Arithmetic.....++ -- + -

/*

# include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *ptr=&a;

    cout<<ptr<<endl;

    ptr++;                  //  increment ch 4 da gap hune bcoz int 4 bytes lende 
    cout<<ptr<<endl;

}

*/







/*

# include<iostream>
using namespace std;
int main()
{
    int num=10;
    int a=num;
    a++;
    cout<<a<<endl;
    cout<<num;
}

*/






/*

# include<iostream>
using namespace std;
int main()
{
    int num=5;
    int *p=&num;
    int a=*p;
    a++;
    cout<<a<<endl;
    cout<<num;

}

*/






/*

# include<iostream>
using namespace std;
int main()
{
    int num=5;
    int *p=&num;
    (*p)++;
    cout<<num<<endl;
    cout<<*p;
}

*/






/*

# include<iostream>
using namespace std;
int main()
{
    int i=3;
    int *t=&i;

    cout<<*t<<endl;
    (*t)++;
    cout<<*t++<<endl;

    cout<<"\n";

    cout<<t<<endl;
    t++;
    cout<<t++;

}

*/







// BAD PRACTICE....NEVER DO THIS....FOR NULL POINTER

/*

# include<iostream>
using namespace std;
int main()
{
    int *p=0;
    int first=110;
    *p=first;
    cout<<first<<endl;
    cout<<*p<<endl;
    cout<<p;   
}

*/




// RIGHT WAY....FOR NULL POINTER

/*

# include<iostream>
using namespace std;
int main()
{
    int *p=0;
    int first=110;
    p=&first;
    cout<<first<<endl;
    cout<<*p<<endl;
    cout<<p;
}

*/









// character array
// In character array it prints whole string 

/*

# include<iostream>
using namespace std;
int main()
{
    char ch[6]="abcde";
    char *ptr=&ch[0];
    cout<<ch;                 // Prints entire string 

}

*/













// Pointers and arrays

/*

Simple Pointers vich apa address store karida ss variable da
int a=10;
int *ptr=&a......with the help of (&) 

Array pointers vich address store krida array elements da
int arr[3]={6,7,8}
int *ptr=arr.....without (&)
because in C++, the name of an array is considered às a pointer, i.e. 
C++ considers the array name as the address of the first element.


*/




/*

# include<iostream>
using namespace std;
int main()
{
    int arr[3]={6,5,9};
    int *ptr=arr;
    cout<<arr<<endl;             // address of first element of array...or.... &arr[0]
    cout<<ptr<<endl;             // variable store address of first element of array
    cout<<*arr<<endl;            // access the first element of array 
    cout<<*ptr<<endl;            // access the first element of array 

}

*/










// Print all elements of array
// using *ptr...ptr++
// and by using *(aray name + i)  OR  array name[i]


/*

# include<iostream>
using namespace std;
int main()
{
    int arr[5]={8,5,2,6,9};
    int *ptr=arr;
    for(int i=0;i<5;i++)
    {
       cout<<"Array element at "<<i<<" = "<<*ptr<<endl;
        ptr++;

    }

    
}

*/







/*

# include<iostream>
using namespace std;
int main()
{
    int arr[30],n,i;
    int *ptr=arr;
    cout<<"Enter n: ";
    cin>>n;

    cout<<"Enter array elements: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"displaying array elements:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"Array element at "<<i<<" = "<<*(arr+i)<<endl;
    }

}

*/











//Print the address of each element of array by array and pointer

/*

# include<iostream>
using namespace std;
int main()
{
    int arr[5]={9,4,1,3,7};
    int *ptr=arr;
    cout<<"Address using Array:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"At arr["<<i<<"]="<<&arr[i]<<endl;
    }

    cout<<"\nAddress using pointers: "<< endl;
    for(int i=0;i<5;i++)
    {
        cout<<"At arr["<<i<<"]="<<ptr+i<<endl;
    }


}

*/










/*

# include<iostream>
using namespace std;
int main()
{
    int arr[3]={2,5,6};
    int *ptr=arr; 
    cout<<*arr<<endl;
    cout<<*arr+1<<endl;
    cout<<*(arr+1)<<endl;
    cout<<(*arr)+1<<endl;

}

*/






/*

# include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    // arr++;..........not possible to increment address 
    int *ptr=arr;
    cout<<ptr<<endl;
    ptr++;              // possible to increment address
    cout<<ptr<<endl;
}

*/






// Pointers in 2-D Array

/*

# include<iostream>
using namespace std;
int main()
{
    int a[2][3]={10,20,30,40,50,60};
    cout<<"Elements are:\n";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<*(*(a+i)+j)<<" ";
        }
        cout<<"\n";
    }

}

*/
















// Pointers and functions


/*

# include<iostream>
using namespace std;
void print(int *ptr)
{
    cout<<*ptr<<endl;
}

int main()
{
    int a=5;
    int *ptr=&a;
    print(ptr);
}

*/










// update address of ptr can be done inside function only

/*

# include<iostream>
using namespace std;
void print(int *ptr)
{
    cout<<*ptr<<endl;
}

void update(int *ptr)
{
    ptr=ptr+1;
    cout<<ptr<<endl;
}


int main()
{
    int a=5;
    int *ptr=&a;
    cout<<"Before ptr: "<<ptr<<endl;
    update(ptr);
    cout<<"After ptr: "<<ptr<<endl;
}

*/








// update value of ptr can be done in  int main() 

/*

# include<iostream>
using namespace std;
void print(int *ptr)
{
    cout<<*ptr<<endl;
}

void update(int *ptr)
{
    *ptr=*ptr+1;
}


int main()
{
    int a=5;
    int *ptr=&a;
    cout<<"Before ptr: "<<*ptr<<endl;
    update(ptr);
    cout<<"After ptr: "<<*ptr<<endl;
}

*/















// pointer to pointer.......ONLY DOUBLE
// store the address of pointer variable


/*

# include<iostream>
using namespace std;
int main()
{
    int a=8;
    int *ptr=&a;

    cout<<&a<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    cout<<"\n";

    int **q=&ptr;

    cout<<&ptr<<endl;
    cout<<q<<endl;
    cout<<*q<<endl;
    cout<<**q<<endl;

}

*/


/*

int a=8 hagi value
&a = address of a......i.e 2000
ptr = points to a....stores address of a.....i.e 2000
*ptr = dereference....can access the value of a.... i.e 8

int **q = &ptr....means,
q points to ptr
& ptr = address of ptr.....i.e 4000
q stores the address of ptr....i.e 4000
*q = dereference...can access the value of ptr.... i.e 2000
**q = double dereference....first access the value of ptr.... i.e 2000
then access the value of a....i.e 8

*/







// For Understanding Only 


/*

# include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *ptr=&a;

    cout<<"Address of a= "<<&a<<endl;
    cout<<"variable stores the address of a= "<<ptr<<endl;
    cout<<"access the value of the variable whose address is stored in it= "<<*ptr<<endl;

    cout<<"\n";

    int **q=&ptr;
    cout<<"Address of ptr= "<<&ptr<<endl;
    cout<<"variable stores the address of ptr= "<<q<<endl;
    cout<<"dereference= "<<*q<<endl;
    cout<<"Double dereference= "<<**q<<endl;

    cout<<"\n";

    int ***i=&q;
    cout<<"Address of q= "<<&q<<endl;
    cout<<"variable stores the address of q= "<<i<<endl;
    cout<<"dereference= "<<*i<<endl;
    cout<<"Double dereference= "<<**i<<endl;
    cout<<"Triple dereference= "<<***i<<endl;

}

*/




















// Double Pointers and Functions



/*

# include<iostream>
using namespace std;
void update(int **p2)
{
    p2=p2+1;
}
int main()
{
    int i=5;
    int *p=&i;
    int **p2=&p;
    cout<<"Before: "<<i<<endl;
    cout<<"Before: "<<p<<endl;
    cout<<"Before: "<<p2<<endl;
    update(p2);
    cout<<"After: "<<i<<endl;
    cout<<"After: "<<p<<endl;
    cout<<"After: "<<p2<<endl;

}

*/







/*

# include<iostream>
using namespace std;
void update(int**p2)
{
    *p2=*p2+1;
}

int main()
{
    int i=5;
    int *p=&i;
    int **p2=&p;
    cout<<"Before: "<<i<<endl;
    cout<<"Before: "<<p<<endl;
    cout<<"Before: "<<p2<<endl;
    update(p2);
    cout<<"After: "<<i<<endl;
    cout<<"After: "<<p<<endl;
    cout<<"After: "<<p2<<endl;
}

*/











/*

# include<iostream>
using namespace std;
void update(int**p2)
{
    **p2=**p2+1;
}

int main()
{
    int i=5;
    int *p=&i;
    int **p2=&p;
    cout<<"Before: "<<i<<endl;
    cout<<"Before: "<<p<<endl;
    cout<<"Before: "<<p2<<endl;
    update(p2);
    cout<<"After: "<<i<<endl;
    cout<<"After: "<<p<<endl;
    cout<<"After: "<<p2<<endl;
}

*/
































// pointers MCQ;s




/*
# include<iostream>
using namespace std;
int main()
{
    int first=8;
    int second=18;
    int *ptr=&second;
    *ptr=9;
    cout<<first<<" "<<second<<endl;
}
*/




/*
# include<iostream>
using namespace std;
int main()
{
    int first=6;
    int *p=&first;
    int *q=p;
    (*q)++;
    cout<<first<<endl;

}
*/







/*

# include<iostream>
using namespace std;
int main()
{
    int first=8;
    int *p=&first;
    cout<<(*p)++<<endl;
    cout<<first<<endl;
}

*/






/*
# include<iostream>
using namespace std;
int main()
{
    int *p=0;
    int first=110;
    *p=first;
    cout<<first<<endl;
    cout<<*p<<endl;
    cout<<p;


}
*/

// ANSWER....BAD  PRACTICE





/*
# include<iostream>
using namespace std;
int main()
{
    int first=8;
    int second=11;
    int *third=&second;
    first=*third;
    *third=*third+2;
    cout<<first<<" "<<second<<endl;

}
*/








/*
# include<iostream>
using namespace std;
int main()
{
    float f=12.5;
    float p=21.5;
    float *ptr=&f;
    (*ptr)++;
    *ptr=p;
    cout<<*ptr<<" "<<f<<" "<<p<<endl;
}
*/







/*
# include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int *ptr;
    cout<<sizeof(arr)<<endl;
    cout<<sizeof(ptr);

}
*/








/*
# include<iostream>
using namespace std;
int main()
{
    int arr[]={11,21,13,14};
    cout<<*arr<<" "<<*(arr+1)<<endl;
}
*/



/*
# include<iostream>
using namespace std;
int main()
{
    int arr[6]={11,21,31};
    cout<<arr<<" "<<&arr;
}
*/




/*
# include<iostream>
using namespace std;
int main()
{
    int arr[6]={11,21,31};
    cout<<(arr+1)<<endl;

}
*/






/*
# include<iostream>
using namespace std;
int main()
{
    int arr[6]={11,21,31};
    int *p=arr;
    cout<<p[2]<<endl;

}
*/






/*
# include<iostream>
using namespace std;
int main()
{
    int arr[]={11,12,13,14,15};
    int *ptr=arr;
    cout<<*(arr)<<" "<<*(arr+3)<<endl;


}
*/







/*
# include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,8,6,4,5};
    int *ptr=arr;
    cout<<*ptr<<endl;
    arr++;
    cout<<*ptr;
}
*/

// ANSWER.....it gives error as...arr++...not possible to increment address 




/*
# include<iostream>
using namespace std;
int main()
{
    char ch='a';
    char *ptr=&ch;
    ch++;
    cout<<*ptr;
}
*/







/*
# include<iostream>
using namespace std;
int main()
{
    char arr[]="abcde";
    char *ptr=&arr[0];
    cout<<ptr<<endl;
}
*/






/*
# include<iostream>
using namespace std;
int main()
{
    char arr[]="abcde";
    char *ptr=&arr[0];
    ptr++;
    cout<<ptr<<endl;

}
*/

// ptr points to first element i.e 'a' than increases by 1
// then prints whole string 





/*
# include<iostream>
using namespace std;
int main()
{
    char str[]="babbar";
    char *ptr=str;
    cout<<ptr[0]<<" "<<str[0]<<endl;

}
*/





/*
# include<iostream>
using namespace std;
void update(int *p)
{
    *p=(*p) * 2;
}

int main()
{
    int i=10;
    update(&i);
    cout<<i<<endl;

}
*/
// It is Call by Address







/*

# include<iostream>
using namespace std;
int main()
{
    int first=110;
    int *p=&first;
    int **q=&p;
    int second=(**q)++ + 9;
    cout<<first<<" "<<second<<endl;

}
*/









/*
# include<iostream>
using namespace std;
int main()
{
    int first=110;
    int *p=&first;
    int **q=&p;
    int second=++(**q) + 9;
    cout<<first<<" "<<second<<endl;

}
*/





/*
# include<iostream>
using namespace std;
int main()
{
    int first=100;
    int *p=&first;
    int **q=&p;
    int second=++(**q);

    cout<<first<<" "<<second<<endl;
    
    int *r=*q;
    ++(*r);

    cout<<first<<" "<<second<<endl;
}
*/








/*
# include<iostream>
using namespace std;
void increment(int **p)
{
    ++(**p);
}

int main()
{
    int num=110;
    int *ptr=&num;
    increment(&ptr);
    cout<<num<<endl;
}
*/








/*
# include<iostream>
using namespace std;
int main()
{
    int a = 7;
    int *c = &a;
    cout<<"Before: "<<a<<" "<<*c<<endl;
    c = c + 1;
    cout<<"After: "<<a<<"  "<<*c<< endl;
}
*/
// before...a=7, c=address of a, *c=7
// c=c+1.....address of a incremented 
// after...a=7, c=address of incremented a, *c=garbage value


















// Static Memory allocation

/*

# include<iostream>
using namespace std;
int  getsum(int a[] , int s)
{
    int sum=0;
    for(int i=0;i<s;i++)
    {
        sum=sum+a[i];
    }
    return sum;
}


int main()
{
    int n;
    int arr[30];
    cout<<"Enter n: ";
    cin>>n;
    
    cout<<"Enter "<<n<<" array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Array Elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<"\nSum= "<<getsum(arr,n);

}

*/













// Dynamic Memory allocation

/*

# include<iostream>
using namespace std;
int  getsum(int a[] , int s)
{
    int sum=0;
    for(int i=0;i<s;i++)
    {
        sum=sum+a[i];
    }
    return sum;
}


int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int *arr=new int[n];
    
    cout<<"Enter "<<n<<" array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Array Elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<"\nSum= "<<getsum(arr,n);

}

*/


// In stack memory atomattically release 
// In dynamic memory can be released manually by using 'delete' Keyword

/*

For variable deletion
int n;
cin>>n;
int *i = new int[n]
delete i;

*/




/*

For array deletion
int n;
cin>>n;
int *arr = new int [n]
delete [] arr ;

*/











// Dynamic Memory allocation of 2-D array


/*


# include<iostream>
using namespace std;
int main()
{
    int row,column;
    cout<<"Enter row: ";
    cin>>row;
    cout<<"Enter column: ";
    cin>>column;

    int **arr=new int *[row];
    for(int i=0;i<row;i++)
    {
        arr[i]=new int [column];                                      // har row ka liye column
    }

    cout<<"Enter "<<row*column<<" array elements: ";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"Array elements:\n";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<row;i++)
    {
        delete [] arr[i];
    }

    delete [] arr;

}

*/















// Macros

// A piece of code in a program that is 
// replaced by value of macro.
// value update not posiible like pi=pi+1....not possible 

/*
# include<iostream>
using namespace std;
# define pi 3.14                     // Macro created....jithe pi otha value compile hun to pehle ah jani                                      
int main()                           // new variable bana ka karaga ta memory use huni efficient way to use macro  
{
	int r=5;
	// double pi=3.14;
	double area=pi*r*r;
	cout<<area<<endl;

	int s=4;
	int gear=pi*s*s*s;
	cout<<gear<<endl;

}
*/




// Object-like Macros

/*
#include <iostream>
using namespace std;
#define DATE 31

int main()
{

	cout << "Lockdown will be imposed from " << DATE<< "-MARCh-2020"<<endl;
	cout << "Lockdown will be extended upto " << DATE<< "-JUNE-2020";
	return 0;
}
*/







// Multi-line Macros

/*
#include <iostream>
using namespace std;
#define ELE 3,\
			5,\
			9
int main()
{
	int arr[] = { ELE };
	cout<<"Elements of Array1 are:\n";
	for (int i = 0; i < 3; i++) 
	{
		cout << arr[i] <<" ";
	}

	int ar[] = { ELE };
	cout<<"\nElements of Array2 are:\n";
	for (int i = 0; i < 3; i++) 
	{
		cout << ar[i] <<" ";
	}



}
*/





/*

# include<iostream>
using namespace std;
int main()
{
    cout<<"Hello";
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















// NESTED IF PROBLEMS....................




// (1) .......
// Find the  Greatest of three numbers.......


/*


# include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cout<<"Enter the value of n1,n2,n3: ";
    cin>>n1>>n2>>n3;

    if(n1>n2)
    {
        if(n1>n3)
        {
            cout<<"n1 is greater";
        }
        else {
            cout<<"n3 is greater";
        }


    }

    else {

        if(n2>n3) 
        {
            cout<<"n2 is greater";
        }
        else {
            cout<<"n3 is greater";
        }


    }


}



*/












 //  (2).....
// Program to check number entered by the user is positive or negative and
// if number is positive check it is even or odd   and if number is 
// negative check even or odd using nested if.....



/*


# include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the value of a: ";
    cin>>a;

    if(a>0)
    {
        if(a%2==0) 
        {
            cout<<"Number is even positive";
        }
        else {
            cout<<"No is odd positive";
        }


    }
    else{
        if(a%2==0) 
        {
            cout<<"Number is even negative";
        }
        else {
            cout<<"Number is odd negative  ";
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
    cout<<"Enter the number: ";
    cin>>a;

    if(a%3==0) 
    {
        if(a%7==0) 
        {
            cout<<"No is divisible by 3 and 7";
        }
        else {
            cout<<"No is divisible by 3";
        }

    } 
    else {
        if(a%7==0) 
        {
            cout<<"No is divisible by 7";
        }
        else {
            cout<<"No is not divisible by 3 and 7";
        }
    }



}


*/




















// (4)....
// Program to check age of user according to following conditions using nested if
// (i) less than 18=minor not eligible 
// (ii) less than 0 invalid age
// (iii) equal or greater to 18 and less than or equal to 55=eligible for job
// (iv) more than 55=too old not eligible for job


/*

# include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter the age: ";
    cin>>age;

    if(age>=18) 
    {
        if(age<=55)
        {
            cout<<"Eligible for job";
        }
        else {
            cout<<"too old not eligible for job";
        }

    }
    else {
        if(age<0)
        {
            cout<<"Invalid age";
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
    cout<<"Enter a: ";
    cin>>a;

    if(a%100==0)
    {
        if(a%400==0)
        {
            cout<<"Leap year";
        }
        else {
            cout<<"Not leap year";
        }

    }
    else {
        if(a%4==0) 
        {
            cout<<"leeap year";
        }
        else {
            cout<<"Nott leap year";
        }
    }


}


*/











// (6)......
// Program to check two numbers are greater,equal or less than using nested if 

/*

# include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter a and b: ";
    cin>>a>>b;

    if(a>b)
    {
        cout<<"A is greater than b";
    }
    else {
        if(a==b)
        {
            cout<<"A is equal to b";
        }
        else {
            cout<<"A is less than b";
        }
    }
}

*/

























// IF - ELSE - IF LADDER....................






// (1) 
// Write a program to check to the day of the week
// number is entered by th user


/*

# include<iostream>
using namespace std;
int main()
{
    int day;
    cout<<"Enter day: ";
    cin>>day;

    if(day==1)
    cout<<"Monday";

    else if(day==2)
    cout<<"Tuesday";

    else if(day==3)
    cout<<"Wednesday";

    else if(day==4)
    cout<<"Thursday";

    else if(day==5)
    cout<<"Friday";

    else if(day==6)
    cout<<"Saturday";

    else if(day==7)
    cout<<"Sunday";

    else {
        cout<<"Inavlid day";
    }

}

*/










// (2) program to check number is divisible by 3 or 7 or both

/*

# include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the num: ";
    cin>>num;

    if(num%3==0 && num%7==0)
    cout<<"Number is divisible by both 3 and 7";

    else if(num%3==0)
    cout<<"Number is divisible by 3";

    else if(num%7==0)
    cout<<"Number is divisible by 7";

    else {
    cout<<"Not divided by both";
    }
}

*/












// (3) Write a program to check the grade of the student
// 0 to 29.....Fail
// 30 to 49....D
// 50 to 69....C
// 70 to 89....B
// 90 to 100...A


/*


# include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the num: ";
    cin>>num;

    if(num>=90 && num<=100)
    cout<<"Grade A";

    else if(num>=70 && num<=89)
    cout<<"Grade B";

    else if(num>=50 && num<=69)
    cout<<"Grade C";

    else if(num>=30 && num<=49)
    cout<<"Grade D";

    else {
        cout<<"fail";
    }

}

*/












// (4)
// Program to check age of user according to following conditions 
// (i) less than 18=minor not eligible
// (ii) equal or greater to 18 and less than or equal to 55=eligible for job
// (iii) more than 55=too old not eligible for job


/*

# include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter the age: ";
    cin>>age;

    if(age>=18 && age<=55)
    cout<<"Eligible for job";

    else if(age>55)
    cout<<"Too old not eligible for job";

    else if(age<18 && age>0)
    cout<<"Minor not eligible";

    else {
        cout<<"Inavalid age";
    }

}

*/























// SWITCH STATEMENT............
// (1) 
// Write a program to check to the day of the week



/*

# include<iostream>
using namespace std;
int main()
{
    int day;
    cout<<"Enter the day";
    cin>>day;

    switch (day)
    {
        case 1:
        cout<<"Monday";
        break;

        case 2:
        cout<<"Tuesday";
        break;

        case 3:
        cout<<"Wednesday";
        break;

        case 4:
        cout<<"Thursday";
        break;

        case 5:
        cout<<"Friday";
        break;

        case 6:
        cout<<"Saturday";
        break;

        case 7:
        cout<<"Sunday";
        break;

        default:
        cout<<"Invalid number";
        break;

    }



}

*/








// (2)
// Write a program to check whether the character entered
// by the user is vowel or not.

/*

# include <iostream>
using namespace std;
int main() 
{
	char vowel;
	cout<<"Enter the vowel: ";
	cin>>vowel;
    vowel=toupper(vowel);
	
	switch(vowel) 
	{
		case 'A':
		case 'E':
		case 'I':	
		case 'O':
		case 'U':
        cout<<"Vowel";
        break;
        default :
        cout<<"NOT VOWEL";
        break;

	}


}

*/

// tolower....small character......big character also vowel
// toupper....big character......smaal character also vowel













// WHILE LOOP.................


// (1)
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






// (2)
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






// (3)
// Sum of natural numbers.

/*


# include<iostream>
using namespace std;
int main()
{
    int i=1,sum=0,n;
    cout<<"Enter n: ";
    cin>>n;

    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    cout<<"Sum= "<<sum;
}

*/











// (4)
// even numbers between 1-10.

/*

# include<iostream>
using namespace std;
int main()
{
    int i=2,n=10;
    while(i<=n)
    {
        cout<<i<<endl;
        i=i+2;
    }
    
}

*/




//        OR


/*

# include<iostream>
using namespace std;
int main()
{
    int i=2,n=10;
    while(i<=n)
    {
        if(i%2==0)
        {
            cout<<i<<endl;
        }
        i++;
    }
}

*/













// (5) 
// odd numbers between 1-10.


/*

# include<iostream>
using namespace std;
int main()
{
    int i=1,n=10;
    while(i<=n)
    {
        cout<<i<<endl;
        i=i+2;
    }
}

*/





//          OR


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











// (6)
// Sum of digits.

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
        sum=sum+rem;
        n=n/10;
    }
    cout<<"Sum of digits: "<<sum;
}

*/












// (7)
// Pallindrome Number
// Pallindrome Number is the number that remains the same when its digits get reversed. 

/*

# include<iostream>
using namespace std;
int main()
{
    int n,rem,temp,sum=0;
    cout<<"Enter n: ";
    cin>>n;
    temp=n;
    while(n>0)
    {
        rem=n%10;
        sum=(sum*10)+rem;
        n=n/10;
    }
    cout<<sum<<endl;
    if(sum==temp)
    cout<<"Number is pallindrome";

    else {
        cout<<"Not";
    } 

}

*/















// (8)
// Armstrong number
// Armstrong number is a number that is equal to the sum of cubes of its digits. 

/*


# include<iostream>
using namespace std;
int main()
{
    int n,rem,cube,temp,sum=0;
    cout<<"Enter n: ";
    cin>>n;
    temp=n;
    while(n>0)
    {
        rem=n%10;
        cube=rem*rem*rem;
        sum=sum+cube;
        n=n/10;
    }

    if(temp==sum)
    {
        cout<<"armstrong";
    }
    else{
        cout<<"Not ";
    }
}

*/













// (9)
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












// (10)
// Reverse an integer

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




















//  FOR LOOP..........

// (1)
// print n natural numbers.

/*


# include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter n: ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cout<<i<<" ";
    }

}

*/














// (2)
// print n natural numbers in reverse order.

/*

# include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter n= ";
    cin>>n;
    for(i=n;i>=1;i--)
    {
        cout<<i<<endl;
    }
}

*/











// (3)
// Prime Number

/*

# include<iostream>
using namespace std;
int main()
{
    int i,n,count=0;
    cout<<"Enter n: ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }

    if(count==2)
    {
        cout<<"Prime Number";
    }

    else {
        cout<<"Not Prime";
    }

}

*/

















// (4)
// Fibonacci series 

/*

# include<iostream>
using namespace std;
int main()
{
    int n,a=0,b=1,c,i;

    cout<<"Enter n: ";
    cin>>n;

    cout<<a<<" "<<b<<" ";

    for(i=2;i<=n;i++)
    {
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }

}


*/















// (5)
// factorial of a number

/*

# include<iostream>
using namespace std;
int main()
{
    int n,i,factorial=1;
    cout<<"Enter n: ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        factorial = factorial*i;
        cout<<factorial<<" ";
    }
}

*/

















// (6)
// print factorial of a number in this way:-
// 1*2*3*4*5=120


/*


# include<iostream>
using namespace std;
int main()
{
    int n,i,factorial=1;

    cout<<"Enter n: ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        factorial=factorial*i;

        if(i==n)
        cout<<i<<"=";

        else{
            cout<<i<<"*";
        }
    }
    cout<<factorial;


}

*/














// (7)
// print sum of  even number series:-
// 2+4+6......

/*

# include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;

    cout<<"Enter n: ";
    cin>>n;

    for(i=2;i<=n;i=i+2)
    {
        sum=sum+i;
        if(i==n)
        cout<<i<<"=";

        else {
            cout<<i<<"+";
        }
    }
    cout<<sum;
}

*/



















// (8) 
// print sum of odd number series
// 1+3+5......

/*

# include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"Enter n: ";
    cin>>n;

    for(i=1;i<=n;i=i+2)
    {
        sum=sum+i;

        if(i==n)
        cout<<i<<"=";

        else {
            cout<<i<<"+";
        }
    }
    cout<<sum;
}

*/




















// (9)
// print this series square of number
// 1+4+9+16+25.....

/*

# include<iostream>
using namespace std;
int main()
{
    int n,i,sqr,sum=0;
    cout<<"Enter n: ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        sqr=i*i;
        sum=sum+sqr;
        if(i==n)
        cout<<sqr<<"=";
        else {
            cout<<sqr<<"+";
        }
    }
    cout<<sum;
}

*/








//  ANOTHER WAY







/*


# include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"Enter n: ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        sum=sum+i*i;
        if(i==n){
            cout<<i*i<<"=";
        }
        else{
            cout<<i*i<<"+";
        }
    }
    cout<<sum;
}  

*/































// NESTED LOOP




// (1)
// Print this pattern



/*


*
**
***
****


*/







// outer loop for ROWS
// inner loop for COLUMNS
// Here COLUMNS depends on ROWS



/*

# include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter n: ";
    cin>>n;

    for(i=1;i<=n;i++)              
    {
        for(j=1;j<=i;j++)         
        {
            cout<<"*";             
        }
        cout<<"\n";
    }
}

*/

















// (2)
// Print this pattern

/*

****
***
**
*

*/




/*

# include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter n: ";
    cin>>n;

    for(i=4;i>=n;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}

*/




















// (3)
// Print this pattern
 
/*
 
****
****
****
****

*/




/*

# include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter n: ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}

*/




















// (4)
// Print this pattern


/*

1
12
123
1234

*/



/*

# include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;

    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<"\n";
    }
}

*/




















// (5)
// Print this pattern

/*

1234
123
12
1

*/




/*

# include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    
    for(i=4;i>=n;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<"\n";
    }
}

*/






















// (6)
// Print this pattern

/*

1
22
333
4444
 
*/




/*


# include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<"\n";
    }
}

*/
























// (7)
// Print this pattern

/*

4444
333
22
1
 
*/




/*

# include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;

    for(i=4;i>=n;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<"\n";
    }
}

*/




















// (8)
// Print this pattern


/*

4321
4321
4321
4321

*/
















// ARRAYS


// (1)
/*

# include<iostream>
using namespace std;
int main()
{
    int arr[5]={2,3,6,7,9};
    cout<<arr[3];
    
}

*/










// (2)

/*


# include<iostream>
using namespace std;
int main()
{
    int i,arr[5]={2,4,6,8,9};
    for(i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
        }
}

*/








// (3)
// Sum of array

/*


# include<iostream>
using namespace std;
int main()
{
    int i,arr[5]={1,2,3,4,5};
    int sum=0;
    for(i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
        sum=sum+arr[i];
    }
    cout<<"\n";
    cout<<sum;

}

*/






// (4)

/*

# include<iostream>
using namespace std;
int main()
{
    int n,i,arr[30];
    cout<<"Enter array max size 30: ";
    cin>>n;

    cout<<"Enter"<<n<<"array elements: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Array elements are: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i];
        cout<<" ";
    }
}

*/







// (5) 
// Maximum Array Element

/*

# include<iostream>
using namespace std;
int main()
{
    int i,n,arr[30];
    cout<<"Enter array max sixe 30: ";
    cin>>n;

    cout<<"Enter "<<n<<" array elements: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int max=arr[0];

    cout<<"Array elements: ";
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        cout<<arr[i]<<" ";
    }

    cout<<"\nMaximum array element="<<max;
}

*/














// (6)
// Minimum Array Element

/*

# include<iostream>
using namespace std;
int main()
{

    int i,n,arr[30];
    cout<<"Enter array max size 30: ";
    cin>>n;

    cout<<"Enter "<<n<<" array element: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int min=arr[0];

    cout<<"Array element: ";
    for(i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
        cout<<arr[i]<<" ";
    }
    cout<<"\nMinimum array element="<<min;

}


*/








// 2-d ARRAYS


// (1)
/*

# include<iostream>
using namespace std;
int main()
{
    int a[4][2]={ {7,8},{5,7},{3,9},{3,1} };
    int i,j;

    for(i=0;i<4;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }

}

*/






// (2)

/*

# include<iostream>
using namespace std;
int main()
{
    int a[30][30],i,j,r,c;

    cout<<"Enter rows and columns: ";
    cin>>r>>c;

    cout<<"Enter "<<r*c<<" elements: ";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"Matrix: \n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }



}

*/













// (3)
// Transpose of a matrix

/*

# include<iostream>
using namespace std;
int main()
{
    int a[30][30],i,j,r,c;
    cout<<"Enter rows and columns: ";
    cin>>r>>c;

    cout<<"Enter "<<r*c<<" elements: ";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"Matrix :\n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }

    cout<<"Transpose of a matrix:\n";
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            cout<<a[j][i]<<"\t";
        }
        cout<<"\n";
    }

}

*/








// (4)
// Sum of matrix

/*

# include<iostream>
using namespace std;
int main()
{
    int a[30][30],b[30][30],i,j,r,c,sum;

    cout<<"Enter rows and columns: ";
    cin>>r>>c;

    cout<<"Enter "<<r*c<<" elements: ";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }


    cout<<"Matrix:\n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";

    }



    cout<<"Enter "<<r*c<<" elements: ";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>b[i][j];
        }
    }

    cout<<"Matrix:\n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<b[i][j]<<"\t";
        }
        cout<<"\n";
    }


    cout<<"Sum of a matrix :\n";

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum=a[i][j]+b[i][j];
            cout<<sum<<"\t";
        }
        cout<<"\n";
    }




}

*/




















// FUNCTIONS


//(1)
// sum of two integers

/*

# include<iostream>
using namespace std;
int sum(int x,int y)
{
    return(x+y);

}

int main()
{
    int x,y;
    cout<<"Enter x and y: ";
    cin>>x>>y;
    cout<<"Sum="<<sum(x,y);

    int a,b;
    cout<<"\nEnter a and b: ";
    cin>>a>>b;
    cout<<"Sum="<<sum(a,b);

}

*/













// (2)
// Greatest of two numbers

/*

# include<iostream>
using namespace std;
int greatest(int a,int b)
{
    if(a>b)
    {
        return(a);
    }

    else {
        return(b);
    }


}

int main()
{
    int a,b;
    cout<<"Enter a and b: ";
    cin>>a>>b;
    cout<<"Greatest Number: "<<greatest(a,b);


    int c,d;
    cout<<"\nEnter c and d: ";
    cin>>c>>d;
    cout<<"Greatest Number: "<<greatest(c,d);


}

*/





// (3)
// Average of three numbers

/*

# include<iostream>
using namespace std;
float average(float a, float b, float c)
{
    return(a+b+c)/3;

}

int main()
{
    float a,b,c;
    cout<<"Enter a,b,c: ";
    cin>>a>>b>>c;
    cout<<"Average of three numbers: "<<average(a,b,c);

    float d,e,f;
    cout<<"\nEnter d,e,f ";
    cin>>d>>e>>f;
    cout<<"Average of three numbers: "<<average(d,e,f);

}

*/













// (4)
// Fcatorial of number

/*

# include<iostream>
using namespace std;
int fact(int a)
{
    int i=1,factorial=1;
    for(i=1;i<=a;i++)
    {
        factorial=factorial*i;
    }
    return(factorial);
    
}

int main()
{
    int a;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Factorial="<<fact(a);


    int b;
    cout<<"\nEnter b: ";
    cin>>b;
    cout<<"Factorial="<<fact(b);

}

*/







// (5)
// even odd number

/*

# include<iostream>
using namespace std;
int num(int a)
{
    if(a%2==0)
    {
        return(true);
    }

    else {
        return(false);
    }


}

int main()
{
    int a;
    cout<<"Enter a: ";
    cin>>a;
    cout<<num(a);

    int b;
    cout<<"\nEnter b: ";
    cin>>b;
    cout<<num(b);


}

*/














// (5)
// prime number

/*

# include<iostream>
using namespace std;
int num(int a)
{
    int i,count=0;
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        count++;
    }

    if(count==2)
    {
        return(true);
    }

    else {
        return(false);
    }
}


int main()
{
    int a;
    cout<<"Enter a: ";
    cin>>a;
    cout<<num(a);


    int b;
    cout<<"\nEnter b: ";
    cin>>b;
    cout<<num(b);


}


*/










//                        OR








/*


# include<iostream>
using namespace std;
void prime(int a)
{
    int i,count=0;
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            count++;
        }
    }

    if(count==2)
    {
        cout<<a<<" is Prime number";
    }

    else {
        cout<<a<<" is not prime number";
    }



}

int main()
{
    int a;
    cout<<"Enter a: ";
    cin>>a;

    prime(a);
}


*/


















// (6)
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












// (7)
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










// (8)
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








//  CALL BY VALUE 

/*

# include<iostream>
using namespace std;
void dummy(int n)
{
    n++;
    cout<<"n is "<<n<<endl;
}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    dummy(n);
    cout<<"n is "<<n<<endl;
}

*/
















/*

# include<iostream>
using namespace std;
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"By Swapping A="<<a<<" and B="<<b;

}

int main()
{
    int a=5;
    int b=10;

    swap(a,b);
    cout<<"\nA="<<a<<" and B="<<b;

}

*/
















// CALL BY REFERENCE

/*

# include<iostream>
using namespace std;
void dummy(int &n)
{
    n++;
    cout<<"n is "<<n<<endl;
}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    dummy(n);
    cout<<"n is "<<n<<endl;
}


*/









/*

# include<iostream>
using namespace std;
void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"By Swapping A="<<a<<" and B="<<b;

}

int main()
{
    int a=5;
    int b=10;

    swap(a,b);
    cout<<"\nA="<<a<<" and B="<<b;

}

*/









// Multiple  functions in one program
// Function da name same nho ho sakde 



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












// FUNCTION OVERLOADING

// MULTIPLE FUNCTION BANA SAKDE WITH SAME NAME BUT WITH 
// DIFFERENT ARGUMENTS OR PARAMETERS

/*

# include<iostream>
using namespace std;
int run(int a,int b)
{
    return (a+b);
}


int run(int b)
{
    return (b);
}




char run( char c)
{
    return (c);
}



float run( float d)
{
    return (d);
}


float run( float d , int a)
{
    return (a+d);
}



int main()
{
    int a=5,b=2;
    char c='a';
    float d=9.6;

    cout<<run(a,b)<<endl;
    cout<<run(b)<<endl;
    cout<<run(c)<<endl;
    cout<<run(d)<<endl;
    cout<<run(d,a)<<endl;

}

*/



// Inline function

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

// Compile hun to pehle...getmax...di jagah...return (a>b)?a:b...ajuga











// Passing Array to a function
// sum of array using function

/*

# include<iostream>
using namespace std;
int arr(int b[30],int n)
{
    int i;
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+b[i];
    }
    return sum;
}

int main()
{
    int a[30],n,i;
    cout<<"Enter array elements max 30: ";
    cin>>n;

    cout<<"Enter "<<n<<" array elements: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"sum="<<arr(a,n);


}

*/














// RECURSION

// (1) Factorial

/*

# include<iostream>
using namespace std;
int fact(int n)
{
    if(n==1 || n==0)
    {
        return 1;
    }

    else {
        return n*fact(n-1);
    }

}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    cout<<"Factorial of "<<n<<" : "<<fact(n);
}

*/









// (2) Fibonacci series

/*

# include<iostream>
using namespace std;
int fib(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }

    else {
        return fib(n-1)+fib(n-2);
    }

}

int main()
{
    int i,n;
    cout<<"Enter n: ";
    cin>>n;

    for(i=0;i<=n;i++)
    {
        cout<<fib(i)<<" ";
    }
}


*/











// (3) fibonacci series of nth term

/*

# include<iostream>
using namespace std;
int fib(int n)
{
    if(n==0)
    {
        return 0;
    }

    else if(n==1){
        return 1;
    }

    else{
        return fib(n-1)+fib(n-2);
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



























// STRINGS


/*

# include<iostream>
using namespace std;
int main()
{
    string st;
    cout<<"Enter string: ";
    cin>>st;
    cout<<st;
}

*/






// OR




/*

# include<iostream>
using namespace std;
int main()
{
    char str[40];
    cout<<"Enter the string: ";
    cin>>str;
    cout<<str;
}

*/







// Access particular word of a string
/*

# include<iostream>
using namespace std;
int main()
{
    string st1="Shub";
    string st2="ham";
    cout<<st1[3];

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







// OR





/*

# include<iostream>
using namespace std;
int main()
{
    char str[40];
    cout<<"Enyer string: ";
    cin.get(str,40);          // cin.getline  same as cin.get
    cout<<str;
}

*/
















// multiple line 

/*

# include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter the string: ";
    getline(cin,str,'$');
    cout<<"\n"<<str;
}

*/








// OR






/*

# include<iostream>
using namespace std;
int main()
{
    char str[100];
    cout<<"Enter string: ";
    cin.get(str,100,'$');
    cout<<"\nString: "<<str;             // cin.getline  same as cin.get
}

*/












// String Methods


// ( ) strcmp......compare

/*

# include<iostream>
# include<string.h>
using namespace std;
int main()
{
    char st1[40]="Shubham";
    char st2[40]="Kumar";
    if(strcmp(st1,st2)==0)
    {
        cout<<"equal";
    }

    else if(strcmp(st1,st2)>0)
    {
        cout<<"First  is greater than 2";
    }

    else
    {
        cout<<"First is smaller than 2";
    }

}

*/









// ( ) strlen......length

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








// ( ) strrev.....Reverse

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











// strcpy.......copy

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












// ( ) strcat....concatenation,,,string add krni

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









// ( strupr)....convert into upper case

/*

# include<iostream>
# include<string.h>
using namespace std;
int main()
{
    char s1[20]="shubham";
    cout<<"MAGIC: "<<strupr(s1);
}

*/











// ( strlwr)....convert into lower case

/*

# include<iostream>
# include<string.h>
using namespace std;
int main()
{
    char s1[20]="SHUBHAM";
    cout<<"MAGIC: "<<strlwr(s1);
}

*/








// ( )  Append....add karna

/*

# include<iostream>
using namespace std;
int main()
{
    string st1="Shub";
    string st2="ham";
    st1.append(st2);                  // st1 main append krana st2
    cout<<st1;

}

*/



// OR



/*

# include<iostream>
using namespace std;
int main()
{
    string str1="abcd";
    string str2="ef";
    string str3=str1 + str2;
    cout<<str3;

}

*/








// ()  clear......saaf karna

/*

# include<iostream>
# include<string>
using namespace std;
int main()
{
    string st1="abndewjwew";
    st1.clear();
    cout<<st1;
}

*/








// ( ) erase.....// str.erase(index no , kina delete krna word)

/*

# include<iostream>
# include<string.h>
using namespace std;
int main()
{
    string str="Shubhamkumar";
    str.erase(4,5);                                       // str.erase(index no , kina delete krna word)
    cout<<str;
}

*/









// ( ) Find.... to find string

/*

# include<iostream>
# include<string.h>
using namespace std; 
int main()
{
    string str="Shubhamkumar ";
    cout<<str.find("kumar");
    
}

*/








// ( )  insert....... // str.insert(index no , insert string )

/*

# include<iostream>
# include<string.h>
using namespace std; 
int main()
{
    string str="Shubhamkumar";
    str.insert(4,"lol");                                // str.insert(index no , insert string )
    cout<<str;
}

*/










// ( ) length or size...........to find length 

/*

# include<iostream>
# include<string.h>
using namespace std;
int main()
{
    string str="shubhamkumar";
    cout<<str.size();
}

*/






// OR




/*

# include<iostream>
# include<string.h>
using namespace std;
int main()
{
    string str="shubhamkumar";
    int i;
    for(i=0;i<str.length();i++)
    {
        cout<<str[i]<<endl;
    }
}

*/









// ( ) substring.........   //  st.substr( index no , kina word lene as a substring)

/*

# include<iostream>
# include<string.h>
using namespace std;
int main()
{
    string st="Shubham";
    cout<<st.substr(2,4);             //  st.substr( index no , kina word lene as a substring)
}

*/











// ( ) sort.........alphabetically sort string

/*

# include<iostream>
# include<algorithm>
# include<string.h>
using namespace std;
int main()
{
    string s="shubham";
    sort(s.begin(),s.end());
    cout<<s;

}

*/










// ( )   swap

/*

# include<iostream>
# include<string.h>
using namespace std;
int main()
{
    string str1,str2;
    cout<<"Enter string1 and str2: ";
    cin>>str1>>str2;
    str1.swap(str2);               //  swap(a[5],b[0])...to swap particular word

    cout<<"After swapping str1: "<<str1<<endl;
    cout<<"After swapping str2: "<<str2;

}

*/








// ( ) push_back

/*

# include<iostream>
# include<string.h>
using namespace std;
int main()
{
    string str;
    cout<<"Initial string: ";
    getline(cin,str);

    str.push_back('s');

    cout<<"The string after push_back operation is: ";
    cout<<str<<endl;
}

*/









// ( ) pop_back

/*

# include<iostream>
# include<string.h>
using namespace std;
int main()
{
    string str;
    cout<<"Initial string: ";
    getline(cin,str);

    str.pop_back();

    cout<<"The string after push_back operation is: ";
    cout<<str<<endl;
}

*/



















// Find out vowels, characters, digits and spaces in the string


/*

# include<iostream>
using namespace std ;
int main()
{
    char str[40];
    cout<<"Enter string: ";
    cin.get(str,40);

    int vowel,constants,digits,spaces;
    vowel=constants=digits=spaces=0;

    for(int i=0;str[i]!='\0';i++)
    { 
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'
        || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            vowel++;
        }


        else if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
        {
            constants++;
        }


        else if(str[i]>='0' && str[i]<='9')
        {
            digits++;
        }


        else if(str[i]==' ')
        {
            spaces++;
        }   

    }

    cout<<"Vowels: "<<vowel<<endl;
    cout<<"constants: "<<constants<<endl;
    cout<<"digits: "<<digits<<endl;
    cout<<"spaces: "<<spaces<<endl;

}


*/













// OR........by using built in fuctions







/*


# include<iostream>
# include<ctype.h>
using namespace std ;
int main()
{
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);

    int vowels,constants,digits,spaces;
    vowels=constants=digits=spaces=0;

     for(int i=0;str[i]!='\0';i++)
    { 
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'
        || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            vowels++;
        }

        else if(isalpha(str[i]))
        {
            constants++;
        }

        else if(isdigit(str[i]))
        {
            digits++;
        }

        else if(isspace(str[i]))
        {
            spaces++;
        }

    }

    cout<<"Vowels: "<<vowels<<endl;
    cout<<"constants: "<<constants<<endl;
    cout<<"digits: "<<digits<<endl;
    cout<<"spaces: "<<spaces<<endl;




}



*/










// STRUCTURE AND UNION


/*

# include<iostream>
using namespace std;
struct employee
{
    string name;
    int age;
    float salary;
};

int main()
{
    struct employee e1,e2;
    e1.name="Shubham";
    e1.age=20;
    e1.salary=80000;

    e2.name="Rahul";
    e2.age=17;
    e2.salary=50000;

    cout<<"Name of Employee 1: "<<e1.name<<endl;
    cout<<"Age of Employee 1: "<<e1.age<<endl;
    cout<<"Salary of Employee 1: "<<e1.salary<<endl;

    cout<<"\nName of Employee 2: "<<e2.name<<endl;
    cout<<"Age of Employee 2: "<<e2.age<<endl;
    cout<<"Salary of Employee 2: "<<e2.salary<<endl;

}

*/













/*


# include<iostream>
using namespace std;
struct employee
{
    string name;
    int age;
    float salary;
};

int main()
{
    struct employee e1,e2;
    cout<<"Enter the name,age and salary of employee 1: ";
    cin>>e1.name>>e1.age>>e1.salary;

    cout<<"Enter the name,age and salary of employee 2: ";
    cin>>e2.name>>e2.age>>e2.salary;

    cout<<"\nDisplaying Details of employee 1:\n";
    cout<<"Name: "<<e1.name<<endl;
    cout<<"Age: "<<e1.age<<endl;
    cout<<"Salary: "<<e1.salary<<endl;

    cout<<"\nDisplaying Details of employee 2:\n";
    cout<<"Name: "<<e2.name<<endl;
    cout<<"Age: "<<e2.age<<endl;
    cout<<"Salary: "<<e2.salary<<endl;

}



*/










// Initializing Structure variables

/*

# include<iostream>
using namespace std;
struct student
{
    string name;
    int age;
    float salary;
} ;

int main()
{
    student s1={"Shubham",20,75000.00};
    student s2={"Rahul",19,55000.00};

    cout<<"Displaying Details of Student 1: ";
    cout<<"\nName: "<<s1.name<<endl;
    cout<<"Age: "<<s1.age<<endl;
    cout<<"Salary: "<<s1.salary<<endl;

    cout<<"\nDisplaying Details of Student 2: ";
    cout<<"\nName: "<<s2.name<<endl;
    cout<<"Age: "<<s2.age<<endl;
    cout<<"Salary: "<<s2.salary<<endl;

}

*/














// s2=s1 is valid 

/*

# include<iostream>
using namespace std;
struct student
{
    string name;
    int age;
    float salary;
};

int main()
{
   struct student s1={"Shubham",20,75000.00};
   struct student s2;
    s2=s1;

    cout<<"\nDisplaying Details of Student 2: ";
    cout<<"\nName: "<<s2.name<<endl;
    cout<<"Age: "<<s2.age<<endl;
    cout<<"Salary: "<<s2.salary<<endl;
}

*/















// Display Marks of Student in 5 subjects

/*

# include<iostream>
using namespace std;
struct student 
{
    string name;
    int rollno;
    int marks[5];
};

int main()
{
    student s1;
    cout<<"Enter the Name: ";
    cin>>s1.name;

    cout<<"Enter the Roll No: ";
    cin>>s1.rollno;

    cout<<"Enter the marks: ";
    for(int j=0;j<5;j++)
    {
        cin>>s1.marks[j];
        cout<<"Marks="<<s1.marks[j]<<" ";
    }
    cout<<"\nName = "<<s1.name<<endl;
    cout<<"Roll No = "<<s1.rollno<<endl;

}

*/









// Display Marks of 2 Student in 5 subjects

/*

# include<iostream>
using namespace std;
struct student
{
    string name;
    int rollno;
    float marks[5];
};

int main()
{
    student s1[2];
    int sum=0;
    for(int i=0;i<2;i++)
    {
        cout<<"\nEnter the Name of Student: ";
        cin>>s1[i].name;

        cout<<"Enter the Rollno of Student: ";
        cin>>s1[i].rollno;

        cout<<"Enter the marks of student in 5 subjects: ";
        for(int j=0;j<5;j++)
        {
            cin>>s1[i].marks[j];
            sum=sum+s1[i].marks[j];
        }
        cout<<"\nDisplaying Details of a Student: ";
        cout<<"\nName="<<s1[i].name;
        cout<<"\nRollno="<<s1[i].rollno;
        cout<<"\nSum="<<sum<<endl;

    }


}

*/













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
    cout<<*t<<endl;

    cout<<"\n";

    cout<<t<<endl;
    t++;
    cout<<t;

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










//Print the address of each elemnt of array by array and pointer

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
#include <iostream>
using namespace std;
int main()
{ 
  char *ptr; 
  char Str[] = "abcdefg";
  ptr = Str;
  ptr=ptr+2;
  cout << ptr;
  return 0;
}
*/








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






// if else-if ladder.........





// (1) 
// Write a program to check to the day of the week



# include<iostream>
using namespace std;
int main() 
{
	int day;
	cout<<"Enter number between 1-7: ";
	cin>>day;
	
	if(day==1) {
		cout<<"Monday";
	}
	
	else if(day==2) {
		cout<<"Tuesday";
	}
	
	else if(day==3) {
		cout<<"Wednesday";
	}
	
	else if(day==4) {
		cout<<"Thursday";
	}
	
	else if(day==5) {
		cout<<"Friday";
	}
	
	
	else if(day==6) {
		cout<<"Saturday";
	}
	
	
	else if(day==7) {
		cout<<"Sunday";
	}
	
	else {
		cout<<"Inavlid Input";
	}
	
	
		
}














// (2) Check if the number is positive or negative.



/*

# include<iostream>
using namespace std;
int main() 
{
	int a;
	cout<<"Enter the value of a: ";
	cin>>a;
	
	if(a>0) {
		cout<<"No is positive";
	}
	
	else if(a<0) {
		cout<<"No is negative";
	}
	
	else {
		cout<<"No is zero";
	}
		
	
}


*/










// (3) program to check number is divisible by 3 or 7 or both using nested if




/*

# include<iostream>
using namespace std;
int main() 
{
	int a;
	cout<<"Enter the value of a: ";
	cin>>a;
	
	if(a%3==0 && a%7==0) {
		cout<<"By Both";
	}
	
	else if(a%3==0) {
		cout<<"Divisible by 3";
	}
	
	else if(a%7==0) {
		cout<<"Divisible by 7";
	}
	
	else {
		cout<<"Invalid no";
	}
	
		
} 

*/












// (4) Write a program to check the grade of the student
// 0 to 29.....Fail
// 30 to 49....D
// 50 to 69....C
// 70 to 89....B
// 90 to 100...A



/*

# include<iostream>
using namespace std;
int main() 
{
	int a;
	cout<<"Enter the value of a: ";
	cin>>a;
	
	if(a>=90 && a<=100) {
		cout<<"Grade is A";
	}
	
	else if(a>=70 && a<=89) {
		cout<<"Grade is B";
	}
	
	else if(a>=50 && a<=69) {
		cout<<"Grade is C";
	}
	
	else if(a>=30 && a<=49) {
		cout<<"Grade is D";
	}
	
	else if(a>=0 && a<=29) {
		cout<<"You ara fail";
	}
	
	else {
		cout<<"Invalid no";
	}
	
		
}

*/












// (5)
// Program to check age of user according to following conditions using nested if
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
	
	if(age>=18 && age<=55) {
		cout<<"Eligible for job";
	}
	
	else if(age<18 && age>0) {
		cout<<"Minor not eligible";
	}
	
	else if(age>55 && age<100) {
		cout<<"Too old not eligible for job";
	}
	
	else {
		cout<<"Invalid age";
	}
	
	
		
}


*/
























// Switch statement....................

// (1) 
// Write a program to check to the day of the week


/*

# include <iostream>
using namespace std;
int main() 
{
	int day;
	cout<<"Enter the Number (1-7): ";
	cin>>day;
	switch(day) 
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
		cout<<"Invalid Number";
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
	vowel=tolower(vowel);
	
	switch(vowel) 
	{
		case 'a':
			
		case 'e':
			
		case 'i':

			
		case 'o':
			
		case 'u':
			cout<<"Vowel";
			break;
			
		default :
			cout<<"NOT VOWEL";
			break;
			
			
	}


}

*/

// to lower....small character......big character also vowel
// toupper....big character......smaal character also vowel


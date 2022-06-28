// structure and union

/*

# include<iostream>
using namespace std;
struct student
{
	int rollno;
	char name[20];
};


int main()
{
	struct student s1={2301,"Amit"};
	struct student s2={2308,"Anil"};
	cout<<"Dislplaing Student S1:"<<endl;
	cout<<"Roll no: "<<s1.rollno<<endl;
	cout<<"Student Name: "<<s1.name<<endl<<"\n";
	
	cout<<"Dislaying Student S2: "<<endl;
	cout<<"Roll no: "<<s2.rollno<<endl;
	cout<<"Student Name: "<<s2.name<<endl;	
}

*/





// Take input from user

/*

# include<iostream>
using namespace std;
struct student
{
	int rollno;
	char name[20];
} s1,s2;

int main()
{
	cout<<"Enter Rollno and Name of student 1: "<<endl;
	cin>>s1.rollno>>s1.name;
	
	cout<<"Dislplaing Student S1:"<<endl;
	cout<<"Roll no: "<<s1.rollno<<endl;
	cout<<"Student Name: "<<s1.name<<endl<<"\n";
	
	
	cout<<"Enter Rollno and Name of student 2: "<<endl;
	cin>>s2.rollno>>s2.name;
	
	cout<<"Dislplaing Student S2:"<<endl;
	cout<<"Roll no: "<<s2.rollno<<endl;
	cout<<"Student Name: "<<s2.name<<endl<<"\n";
	
}


*/










/*

# include<iostream>
using namespace std;
struct student
{
    int rollno;
    int marks[5];
};

int main()
{
    student s1;
    cout<<"Enter the roll no: ";
    cin>>s1.rollno;

    cout<<"Enter the marks in 5 subjects : ";
    for(int j=0;j<5;j++)
    {
        cin>>s1.marks[j];
    }
}

*/










// Array structure

/*

# include<iostream>
using namespace std;
struct employee
{
	int id;
	char name[20];
	int age;
	int salary;
};

int main()
{
	int i;
	struct employee Emp[3];
	for(i=0;i<3;i++)
	{
		cout<<"\nEnter details of "<<i+1<<" Employee";
		cout<<"\nEnter Employee id: "<<endl;
		cin>>Emp[i].id;
		
		cout<<"\nEnter employee name: "<<endl;
		cin>>Emp[i].name;
		
		cout<<"\nEnter employee age: "<<endl;
		cin>>Emp[i].age;
		
		cout<<"\nEnter employee salary: "<<endl;
		cin>>Emp[i].salary;
	}
	
	for(i=0;i<3;i++)
	{
		cout<<"\n"<<Emp[i].id<<"\n"<<Emp[i].name<<"\n"<<Emp[i].age<<"\n"<<Emp[i].salary;
	}
}

*/










/*



# include<iostream>
using namespace std;
struct student
{
    int rollno;
    int marks[5];
    float sum;
    float per;
};

int main()
{
    struct student s1[3];
    for(int i=0;i<3;i++)
    {
        cout<<"\nEnter Rollno of student "<<i+1<<" : ";
        cin>>s1[i].rollno;

        s1[i].sum=0;

        cout<<"Enter marks of student "<<i+1<<" : ";
        for(int j=0;j<5;j++)
        {
            cin>>s1[i].marks[j];
            s1[i].sum=s1[i].sum + s1[i].marks[j];
            s1[i].per=s1[i].sum/5;
        }
        
    }

    cout<<"\nDisplaying details of student ";
    for(int i=0;i<3;i++)
    {
        cout<<"\nRoll no: "<<s1[i].rollno;

        for(int j=0;j<5;j++)
        {
            cout<<"\nMarks= "<<s1[i].marks[j];
        }
        cout<<"\nSum="<<s1[i].sum;
        cout<<"\nPercentage="<<s1[i].per<<endl;
    }


}




*/







// employee with minimum salary 

/*

# include<iostream>
using namespace std;
struct employee
{
    int employeecode;
    int salary;
};

int main()
{
    struct employee e1[5];
    for(int i=0;i<5;i++)
    {
        cout<<"Enter employee code: ";
        cin>>e1[i].employeecode;

        cout<<"Enter employee salary: ";
        cin>>e1[i].salary; 

        cout<<"\n";
    }

    int min=e1[0].salary;
    for(int i=0;i<5;i++)
    {
        if(e1[i].salary<min)
        {
            min=e1[i].salary;
        }
    }

    cout<<"Minimum Salary: "<<min;
}

*/








// Student with minimum percentage

/*

# include<iostream>
using namespace std;
struct student
{
    int rollno;
    int marks[5];
    float sum;
    float per;
};

int main()
{
    struct student s1[3];
    for(int i=0;i<3;i++)
    {
        cout<<"\nEnter Rollno of student "<<i+1<<" : ";
        cin>>s1[i].rollno;

        s1[i].sum=0;

        cout<<"Enter marks of student "<<i+1<<" : ";
        for(int j=0;j<5;j++)
        {
            cin>>s1[i].marks[j];
            s1[i].sum=s1[i].sum + s1[i].marks[j];
            s1[i].per=s1[i].sum/5;
        }
        
    }
    cout<<"\nDisplaying details of student ";
    for(int i=0;i<3;i++)
    {
        cout<<"\nRoll no: "<<s1[i].rollno;

        for(int j=0;j<5;j++)
        {
            cout<<"\nMarks= "<<s1[i].marks[j];
        }
        cout<<"\nSum="<<s1[i].sum;
        cout<<"\nPercentage="<<s1[i].per<<endl;
    }

    int min=s1[0].per;
    for(int i=0;i<3;i++)
    {
        if(s1[i].per<min)
        {
            min=s1[i].per;
        }
    }

    cout<<"\nMinimum Percentage : "<<min;

    
}

*/









// UNIONS

/*

# include<iostream>
using namespace std;
union data
{
    int i;
    float f;
};

int main()
{
    union data d1;
    d1.f=10;               // last declared variable cout hune in union struct vich sare hunde cout
    d1.i=14;
    cout<<d1.f<<endl;
    cout<<d1.i;
}

*/



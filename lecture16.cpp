// File I/O in C++


/*

ofstream: Stream class to write on files 
ifstream: Stream class to read from files 
fstream: Stream class to both read and write from/to files. 

*/




/*
Now the first step to open the particular file for read or write operation. We can open file by 
1. passing file name in constructor at the time of object creation 
2. using the open method 

*/








//   1. passing file name in constructor at the time of object creation 






// (i) ofstream: Stream class to write on files 



/*

# include<iostream>
# include<fstream>
using namespace std;
int main()
{
    ofstream out("sample16.txt");      // write operation 
    out<<"Hii,Shubham this side. ";
    out.close();

}

*/










/*

# include<iostream>
# include<fstream>
using namespace std;
int main()
{
    string st="My Name is Shubh.";
    ofstream out("sample16.txt");      // write operation 
    out<<st;

}

*/















// (ii) ifstream: Stream class to read from files




/*

# include<iostream>
# include<fstream>
using namespace std;
int main()
{
    string st2;
    ifstream in("sample16b.txt");     // read operation 
    in>>st2;
    getline(in,st2);
    cout<<st2; 
}

*/








// write and read in same program 



/*

# include<iostream>
# include<fstream>
using namespace std;
int main()
{

    // creation of ofstream class object i.e. hout
    ofstream hout("sample60.txt"); 



    // declaring variables 

    string name;
    int age,rollno;


    cout<<"Enter your name: ";
    getline(cin,name);

    cout<<"Enter your age: ";
    cin>>age;

    cout<<"Enter yur rollno: ";
    cin>>rollno;



    // writing  to the file 
    hout<<"My name is "<<name<<endl;
    hout<<"My age is "<<age<<endl;
    hout<<"My rollno is "<<rollno;


    // closing the file 
    hout.close();






    cout<<"\n";






    // creation of ifstream object to read the file 
    //  Create a content string, which is used to output the text file


    ifstream hin("sample60.txt");
    string content;
    getline(hin,content);

    // Output the content from the file
    cout<<"The content of this file is: "<<content;
    

    // closing the file 
    hin.close();


}


*/















/*

# include<iostream>
# include<fstream>
using namespace std;
int main()
{
    int salary,age,id;
    string name;
    
    ofstream A("sam60.txt");
    cout<<"Enter the salary: ";
    cin>>salary;
    cout<<"Enter the age: ";
    cin>>age;
    cout<<"Enter the id: ";
    cin>>id;

    A<<"Salary: "<<salary<<endl;
    A<<"Age: "<<age<<endl;
    A<<"Id: "<<id<<endl;

    A.close();







    // to read the file

    ifstream B("sam60.txt");
    string st;
    getline(B,st);
    cout<<"Displaying information from the file: \n"<<st;

    B.close();


}


*/

















// 2. using the open method 






// using open() function to read and open file 


/*

# include<iostream>
# include<fstream>
using namespace std;
int main()
{
    // to write 
    ofstream A;
    A.open("sam60.txt");
    A<<"Shubham coder"<<endl;
    A<<"Engineer Shubham";
    A.close();


    // to read 

    ifstream B;
    B.open("sam60.txt");
    string st;
    getline(B,st);
    cout<<st;
    B.close();

    
}

*/








// eof() is used to to read all the lines from the file 
// eof...end of file 

/*

# include<iostream>
# include<fstream>
using namespace std;
int main()
{
    // to write 


    ofstream A;
    A.open("sam60.txt");
    A<<"Shubham coder"<<endl;
    A<<"Engineer Shubham"<<endl;
    A<<"S"<<endl;
    A<<"K"<<endl;
    A<<"\n";
    A<<"Shubham coder"<<endl;
    A<<"Engineer Shubham"<<endl;

    A.close();





    // to read 


    ifstream B;
    B.open("sam60.txt");
    string st;
    while(B.eof()==0)
    {
        getline(B,st);
        cout<<st<<endl;
        
    }

    B.close();

}

*/









// File modes in c++

/*

ios::in         input/read          ( default mode of ifstream )
ios::out        output/write        ( default mode of ofstream )
ios::app        append              (appends output to the end of the file )
ios::ate        update              (open and go to end of file )
ios::binary     binary              (opens a binary file )

*/





/*

# include<iostream>
# include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("sam60.txt", ios::out);
    fout<<"Hloo my name is ";
}

*/







/*

# include<iostream>
# include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("sam60.txt", ios::app);
    fout<<"Shubham"<<endl;
    fout<<"I am a cse student at gndu. "<<endl;
    fout<<"I am an engineer."<<endl;

}

*/









/*

# include<iostream>
# include<fstream>
using namespace std;
int main()
{
    ifstream fout;
    fout.open("sam60.txt");
    string st;
    while(fout.eof()==0)
    {
        getline(fout,st);
        cout<<"\n"<<st;
    }
}

*/
   











/*

# include<iostream>
# include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("sam60.txt", ios::ate);
}

*/






/*

# include<iostream>
# include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("sam60.txt", ios::trunc);
}

*/







/*

# include<iostream>
# include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("sam60.txt", ios::binary);
}


*/





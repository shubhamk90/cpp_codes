
/*

# include<iostream>
using namespace std;
class person
{
    char name[20];
    int id;

    public:
    void getdetails()
    {

    }
};

int main()
{
    person p1;



}


*/







/*

# include<iostream>
using namespace std;
class rectangle
{
    int length,breadth;
    public:
    void read()
    {
        cout<<"Enter length and bredth: ";
        cin>>length>>breadth;
    }

    void area()
    {
        int ar=length*breadth;
        cout<<"Area: "<<ar;
    }
};

int main()
{
    rectangle r1;
    r1.read();
    r1.area();

}
*/






/*

# include<iostream>
using namespace std;
class circle
{
    int r;
    float p;

    public:
    void read()
    {
        cout<<"Enter value of pie and radius: ";
        cin>>p>>r;
    }

    void area()
    {
        float ar=p*r*r;
        cout<<(ar);
    }

};

int main()
{
    circle c;
    c.read();
    c.area();  
}

*/






/*

# include<iostream>
using namespace std;
class student
{
    string name;
    int rollno;
    int marks[5];
    int sum=0;

    public:
    void read()
    {
        cout<<"Enter name and roll no: ";
        cin>>name>>rollno;

        cout<<"Enter marks in 5 subjects: ";
        for(int i=0;i<5;i++)
        {
            cin>>marks[i];
            sum=sum+marks[i];
        }
        cout<<"Sum: "<<sum<<endl;
        int per=sum/5;
        cout<<"Percentage: "<<per;
    }

};

int main()
{
    student s;
    s.read();
}

*/







/*

# include<iostream>
using namespace std;
class Line
{
    public:
    void setlength(double len);
    double getlength(void);
    Line();
    private:
    double length;
};

Line::Line(void)
{
    cout<<"Object is being created"<<endl;

}

void Line::setlength(double len)
{
    length=len;
}

double Line::getlength(void)
{
    return length;
}


int main()
{
    Line line;
    line.setlength(6.0);
    cout<<"Length of line: "<<line.getlength()<<endl; 
}

*/








/*


# include<iostream>
using namespace std;
class Line
{
    public:
    void setlength(double len);
    double getlength(void);
    Line(double len);
    private:
    double length;
};

Line::Line(double len)
{
    cout<<"Object is being created"<<endl;
    length=len;

}

void Line::setlength(double len)
{
    length=len;
}

double Line::getlength(void)
{
    return length;
}


int main()
{
    Line line(10.0);
    cout<<"Length of line: "<<line.getlength()<<endl; 

    line.setlength(6.0);
    cout<<"Length of line: "<<line.getlength()<<endl; 
}


*/






/*


# include<iostream>
using namespace std;
class rectangle
{
    public:
    int length,breadth;
    void read();
    void area();
    rectangle();

};
rectangle::rectangle(){}
 void rectangle::read()
    {
        cout<<"Enter length and bredth: ";
        cin>>length>>breadth;
    }

    void rectangle::area()
    {
        int ar=length*breadth;
        cout<<"Area: "<<ar;
    }

int main()
{
    rectangle r1;
    r1.read();
    r1.area();

}

*/





/*

# include<iostream>
using namespace std;
class circle
{
    public:
    int p,r;
    void read();
    void area();
    circle();

};

circle::circle(){}
void circle::read()
{
    cout<<"Enter value of p and r: ";
    cin>>p>>r;
}
void circle::area()
{
    int ar=p*r*r;
    cout<<"Area: "<<ar;
}

int main()
{
    circle c;
    c.read();
    c.area();

}

*/









/*

# include<iostream>
using namespace std;
class Line
{
    public:
    void setlength(double len);
    double getlength(void);
    Line();
    ~Line();
    private:
    double length;
};

Line::Line(void)
{
    cout<<"Object is being created"<<endl;

}


Line::~Line(void)
{
    cout<<"Object is being deleted"<<endl;
}



void Line::setlength(double len)
{
    length=len;
}

double Line::getlength(void)
{
    return length;
}


int main()
{
    Line line; 

    line.setlength(6.0);
    cout<<"Length of line: "<<line.getlength()<<endl; 
}

*/












/*

# include<iostream>
using namespace std;
class point
{
    private:
    int x,y;

    public:
    point(int x1, int y1)
    {
        x=x1;
        y=y1;
    }

    point(point &p1)
    {
        x=p1.x;
        y=p1.y;
    }

    int getx()
    {
        return x;
    }

    int gety()
    {
        return y;
    }

};

int main()
{
    point p1(10,15);
    point p2=p1;

    cout<<p1.getx()<<" "<<p1.gety()<<endl;
    cout<<p2.getx()<<" "<<p2.gety()<<endl;


}

*/











/*

# include<iostream>
using namespace std;
void print(int i)
{
    cout<<"int i: "<<i<<endl;
}

void print(double d)
{
    cout<<"double d: "<<d<<endl;
}

void print(string c)
{
    cout<<"string c: "<<c<<endl;
}

int main()
{
    print(10);
    print(10.6);
    print("abc");
}

*/








/*

# include<iostream>
using namespace std;
int main(int a)
{
    cout<<a<<endl;
    return 0;

}

int main(char *a)
{
    cout<<a<<endl;
    return 0;
}

int main(int a, int b)
{
    cout<<a<" "<<b<<endl;
    return 0;
}

int main()
{
    main(3);
    main("C++");
    main(9.6);
    return 0;
}

*/








/*

# include<iostream>
using namespace std;
class Test
{
    public:
    int main(int s)
    {
        cout<<s<<endl;
        return 0;
    }

    int main(char *s)
    {
        cout<<s<<endl;
    }

    int main(int s , int m)
    {
        cout<<s<<" "<<m<<endl;
    }
};

int main()
{
    Test obj;
    obj.main(3);
    obj.main("I love C++");
    obj.main(9,6);
    return 0;

}

*/








/*

# include<iostream>
using namespace std;
class Box
{
    public:
    static int objectCount;
};
int Box ::objectCount=5;
int main()
{
    cout<<Box ::objectCount;
}

*/






/*


# include<iostream>
using namespace std;
class Box
{
    public:
    static int objectCount;

    static int random()
    {
        return objectCount;
    }
};
int Box ::objectCount=5;
int main()
{
    cout<<Box ::objectCount<<endl;
    cout<<Box::random();
}


*/






/*


# include<iostream>
using namespace std;
inline int Max(int x, int y)
{
    return(x>y)?x:y;
}

int main()
{
    cout<<Max(20,10);
}

*/









/*


# include<iostream>
using namespace std;
class B;
class A
{
    public:

    void showB(B&);
};

class B
{
    private:
    int b;
    public:
    B()
    {
        b=0;
    }

    friend void A:: showB(B&x);
};

void A::showB(B&x)
{
    std::cout<<x.b<<endl;
}

int main()
{
    A a;
    B x;
    a.showB(x);
    return 0;
}


*/






/*


# include<iostream>
using namespace std;
class A
{
    public:
    int a;
    A()
    {
        a=0;
    }
    friend void showA(A&);
};

void showA(A&x)
{
    std::cout<<"A::a="<<x.a;
}

int main()
{
    A a;
    showA(a);
    return 0;
}


*/




/*

# include<iostream>
using namespace std;
class A
{
    public:
    int a;
    A()
    {
        a=0;
    }
    friend class B;
};

class B
{
    private:
    int b;
    public:
    void showA(A&x)
    {
        std::cout<<"A::a="<<x.a;
    }

};

int main()
{
    A a;
    B b;
    b.showA(a);
    return 0;

}

*/





/*

#include<iostream>
using namespace std;
class Parent
{
public:
	int id_p;
};

class Child : public Parent
{
public:
	int id_c;
};

int main()
{
	Child obj1;
	obj1.id_c = 7;
	obj1.id_p = 91;
	cout << "Child id is: " << obj1.id_c << '\n';
	cout << "Parent id is: " << obj1.id_p << '\n';
		
	return 0;
}

*/





/*

#include<iostream>
using namespace std;
class A
{
public:
	int x;
protected:
	int y;
private:
	int z;
};

class B : public A
{
	
};

class C : protected A
{
	
};

class D : private A 
{

};


*/








/*

#include<iostream>
using namespace std;

class Vehicle {
public:
	Vehicle()
	{
	cout << "This is a Vehicle";
	}
};

class Car : public Vehicle {

};

int main()
{
	Car obj;
	return 0;
}

*/





/*

#include<iostream>
using namespace std;
class Vehicle {
public:
	Vehicle()
	{
        cout << "This is a Vehicle ";
	}
};

class FourWheeler {
public:
	FourWheeler()
    {
        cout << "This is a 4 wheeler Vehicle ";
	}
};
class Car : public Vehicle, public FourWheeler {

};

int main()
{

	Car obj;
	return 0;
}

*/







/*


#include<iostream>
using namespace std;
class Vehicle
{
    public:
	Vehicle()
	{
        cout<<"This is vehicle"<<endl;
	}
};

class Fare
{
	public:
	Fare()
	{
		cout<<"Fare of vehicle"<<endl;
	}
};

class Car:public Vehicle
{

};


class Bus:public Vehicle, public Fare
{
	
};


int main()
{

	Bus obj2;
}

*/






/*


# include<iostream>
using namespace std;
class Person
{
    public:
    Person(int x)
    {
        cout<<"Person:Person(int)"<<endl;
    }

    Person()
    {
        cout<<"Person:Person() called"<<endl;
    }


};

class Faculty:virtual public Person
{
    public:
    Faculty(int x):Person(x)
    {
        cout<<"faculty::Faculty(int) called"<<endl;
    }
};

class Student:virtual public Person{
    public:
    Student(int x):Person(x)
    {
        cout<<"Student::student(int) called"<<endl;
    }
};

class TA:public Faculty,public Student
{
    public:
    TA(int x):Student(x),Faculty(x)
    {
        cout<<"TA:TA(int) called"<<endl;
    }
};

int main()
{
    TA ta1(30);
}

*/





/*

# include<iostream>
using namespace std;
class base
{
    public:
    virtual void show()
    {
        cout<<"Base class ";
    }

};

class derived :public base{
    public:
    void show()
    {
        cout<<"Dreived class"<<endl;
    }
};

int main()
{
    
    
    base *b;
    derived d;
    b=&d;
    b->show();


}

*/






/*

#include<iostream>
using namespace std;
 
class Base
{
   int x;
public:
    virtual void fun() = 0;
    int getX() { return x; }
};
 
class Derived: public Base
{
    int y;
public:
    void fun() { cout << "fun() called"; }
};
 
int main(void)
{
    Derived d;
    d.fun();

}

*/






/*


# include<iostream>
using namespace std;
class Distance
{
    private:
    int feet;
    int inches;

    public:
    Distance()
    {
        feet=0;
        inches=0;
    } 

    Distance (int f, int i)
    {
        feet=f;
        inches=i;
    } 

    void displayDistance()
    {
        cout<<"F: "<<feet<<"I: "<<inches<<endl; 
    }  

    Distance operator-()
    {
        feet=-feet;
        inches=-inches;
        return Distance(feet,inches);

    }
};

int main()
{
    Distance D1(11,10),D2(-5,11);

    -D1;
    D1.displayDistance();

    -D2;
    D2.displayDistance();
    return 0;
}

*/



/*

#include <iostream>
using namespace std;
class Box 
{
    double length;      
    double breadth;     
    double height;      
     public:
 
   double getVolume(void) 
{
    return length * breadth * height;
}
   
   void setLength( double len ) 
{
    length = len;
}
 
   void setBreadth( double bre ) 
{
     breadth = bre;
}
 
   void setHeight( double hei ) 
{
    height = hei;
}
   Box operator+(const Box& b) 
{
    Box box;
    box.length = this->length + b.length;
    box.breadth = this->breadth + b.breadth;
    box.height = this->height + b.height;
    return box;

}

};



int main() 
{
    Box Box1;
    Box Box2;                
    Box Box3;                 
    double volume = 0.0;     
 
   Box1.setLength(6.0); 
   Box1.setBreadth(7.0); 
   Box1.setHeight(5.0);
 

   Box2.setLength(12.0); 
   Box2.setBreadth(13.0); 
   Box2.setHeight(10.0);
 

   volume = Box1.getVolume();
   cout << "Volume of Box1 : " << volume <<endl;
 

   volume = Box2.getVolume();
   cout << "Volume of Box2 : " << volume <<endl;
 

   Box3 = Box1 + Box2;
   volume = Box3.getVolume();
   cout << "Volume of Box3 : " << volume <<endl;
   return 0;

}

*/






/*


# include<iostream>
using namespace std;
class Complex
{
    private:
    int real,imag;
    public:
    Complex(int r=0, int i=0) 
    {
        real=r;
        imag=i;
    }

    Complex operator*(Complex c)
{
double real1,real2;
real1=real;
real2=c.real;
real=(real*c.real)-(imag*c.imag);

imag=(real1*c.imag)+(imag*real2);
Complex temp;
temp.real=real;
temp.imag=imag;
return temp;
}






    void print()
    {
        cout<<real<<" *i"<<imag<<endl;
    }

};



int main()
{
    Complex c1(10,5),c2(2,4);
    Complex c3=c1*c2;
    c3.print();
}


*/









/*

# include<iostream>
# include<fstream>
using namespace std;
int main()
{
    char data[100];
    ofstream outline;
    outline.open("cac.txt");
    cout<<"Writting to the file";
    cout<<"\nEnter name ";
    cin.getline(data,100);
    outline<<data<<endl;

    cout<<"Enter your age ";
    cin>>data;
    cin.ignore();

    outline<<data<<endl;
    outline.close();

    ifstream infile;
    infile.open("cac.txt");

    cout<<"Reading to the file "<<endl;
    infile>>data;

    cout<<data<<endl;

    infile>>data;
    cout<<data<<endl;

    infile.close();

}

*/




/*

# include<iostream>
# include<fstream>
using namespace std;
int main()
{
    char data[100];
    ifstream.ifile;
    infile.open("cac.txt");
    while(!infile.eof())
    {
        infile.getline(data,100);
        cout<<data<<endl;
    }
    infile.close();
}

*/


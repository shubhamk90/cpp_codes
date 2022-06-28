// OOP's
// Part 1




# include<iostream>
using namespace std;
class Hero                                    
{
    int health;
};

int main()
{
    Hero h1;                                  
    cout<<"size: "<<sizeof(h1);
}




//  The class keyword is used to create a
//  class called Hero.


//  To create an object of class, specify the class name, 
//  followed by the object name.
//  Hero.....Classname
//  h1....object name













// Empty Class

/*

# include<iostream>
using namespace std;
class Hero
{
    // Empty Class
};

int main()
{
    Hero h1;
    cout<<"Size of empty class: "<<sizeof(h1);
}

*/



// In Case of Empty Class your object will get 1 byte of memory














// Access Specifier

// (i)     Public.......can access in class as well as outside class
// (ii)    Private......can access in class only
// (iii)   Protected

// By Default....Private






/*

# include<iostream>
using namespace std;
class myclass
{
    public:
    int rollno;
    int age;
};

int main()
{
    myclass c1;

    c1.rollno=10;
    c1.age=20;

    cout<<c1.rollno<<endl;
    cout<<c1.age<<endl;
    
}

*/







/*

#include <iostream>
using namespace std;

class MyClass 
{ 
    public:             // Public access specifier
    int x;             // Public attribute
    private:          // Private access specifier
    int y;           // Private attribute
};

int main() 
{
    MyClass myObj;
    myObj.x = 25;        // Allowed (x is public)
    myObj.y = 50;        // Not allowed (y is private)

  
    cout<<myObj.x<<endl;
    cout<<myObj.y<<endl;

}

*/

















// getter and setter



/*

# include<iostream>
using namespace std;
class hero
{
    private:
    int health;

    public:
    char level;

    int gethealth()
    {
        return health;
    }

    void sethealth(int h)
    {
        health=h;
    }


};

int main()
{
    hero h1;
    h1.level='A';
    h1.sethealth(70);                         // Use setter

    cout<<"Health: "<<h1.gethealth()<<endl;
    cout<<"Level: "<<h1.level<<endl;

}

*/











/*

# include<iostream>
using namespace std;
class my
{
    private:
    int age;

    public:
    int health;


    int getage()
    {
        return age;
    }

    void setage(int a)
    {
        age=a;
    }



};

int main()
{
    my m1;
    m1.health=100;

    cout<<"Health: "<<m1.health<<endl;
    cout<<"Age: "<<m1.getage()<<endl;

    m1.setage(10);

    cout<<"Age: "<<m1.getage()<<endl;


}


*/










/*


# include<iostream>
using namespace std;
class rectangle
{
    private:
    int length,breadth;

    public:
    void setdata(int l, int b)
    {
        length=l;
        breadth=b;
    }

    void area()
    {
        int ar=length*breadth;
        cout<<"Area= "<<ar;
    }


};

int main()
{
    rectangle r1;
    r1.setdata(5,4);
    r1.area();


}

*/















/*

# include<iostream>
using namespace std;
class rectangle
{
    private:
    int length,breadth;

    public:

    void getdata()
    {
        cout<<"Enter length and breadth: ";
        cin>>length>>breadth;
    }

    void setdata(int l, int b)
    {
        length=l;
        breadth=b;
    }

    void area()
    {
        int ar=length*breadth;
        cout<<"Area= "<<ar;
    }


};

int main()
{
    rectangle r1;
    r1.getdata();
    r1.area();


}

*/


















/*

# include<iostream>
using namespace std;
class Rectangle
{
    private:
    int len,br;

    public:
    void getdata()
    {
        cout<<"enter length and breadth: "<<endl;
        cin>>len>>br;
    }

    
    void setdata(int l , int b )
    {
        len=l;
        br=b;
    }

    void area()
    {
        int ar=len*br;
        cout<<"Area of rectangle: "<<ar<<endl;
    }


};

int main()
{
    Rectangle r1,r2,r3;


    r1.setdata(2,2);
    r1.area();


    r2.setdata(3,3);
    r2.area();

    r3.getdata();
    r3.area();

}

*/








/*


# include<iostream>
using namespace std;
class hero
{
    private:
    int health;

    public:
    char level;

    int gethealth()
    {
        return health; 
    }


    char getlevel()
    {
        return level;
    }

    void sethealth(int h)
    {
        health=h;
    }

    void setlevel(char y)
    {
        level=y;
    }


};

int main()
{
    hero a;
    a.sethealth(70);
    a.setlevel('B');
    cout<<a.gethealth()<<endl;
    cout<<a.level<<endl;


    // By Dynammic Memory Allocation


    hero*b=new hero;                  
    b->sethealth(10);
    b->setlevel('C');

    cout<<(*b).gethealth()<<endl;
    cout<<(*b).level<<endl;
         
        // OR


    cout<<b->gethealth()<<endl;
    cout<<b->level<<endl;


}

*/

























// Constructor
// Constructor is called automatically when an object is being created 

// (i)    Default Constructor
// (ii)   Parameterized Constructor
// (iii)  Copy Constructor


// 1....Default Constructor

/*

# include<iostream>
using namespace std;
class hero
{
    private:
    int health;

    public:
    char level;


// Default Constructor

    hero()
    {
        cout<<"Constructor Called"<<endl;
    }



    int gethealth()
    {
        return health; 
    }


    char getlevel()
    {
        return level;
    }

    void sethealth(int h)
    {
        health=h;
    }

    void setlevel(char y)
    {
        level=y;
    }


};

int main()
{
    hero ramesh;
    ramesh.sethealth(70);
    ramesh.level='B';
    cout<<ramesh.gethealth()<<endl;
    cout<<ramesh.level<<endl; 
}


*/







// 2......Parameterized Constructor


/*

# include<iostream>
using namespace std;
class Hero
{
    private:
    int health;

    public:
    char level;

// Parameterized Constructor 

    Hero(int h, char a)
    {
        health=h;
        level=a;
    }

     int gethealth()
    {
        return health;
    }


};

int main()
{
    Hero ramesh(100,'A');
    cout<<"Value of health: "<<ramesh.gethealth()<<endl;
    cout<<"Value of Level: "<<ramesh.level<<endl;
}

*/















/*

# include<iostream>
using namespace std;
class rectangle
{
    private:
    int length,breadth;

    public:

    int getlength()
    {
        return length;
    }

    int getbreadth()
    {
        return breadth;
    } 

// Parameterized constructor

    rectangle(int a, int b)
    {
        length=a;
        breadth=b;
    }

    int area()
    {
        return length*breadth;
    }

};

int main()
{
    rectangle r1(7,4);
    cout<<"Value of Length: "<<r1.getlength()<<endl;
    cout<<"Value of Breadth: "<<r1.getbreadth()<<endl;
    cout<<"Area of Recatngle: "<<r1.area();
}

*/


 







// 'this' pointer
// 'this' pointer stores the address of the object 

/*

# include<iostream>
using namespace std;
class Hero
{
    private:
    int health;

    public:
    char level;

// Parameterized Constructor 

    Hero(int health)
    {
        cout<<"this-> : "<<this<<endl;
        this->health=health;
    }

     int gethealth()
    {
        return health;
    }


};

int main()
{
    Hero ramesh(100);
    ramesh.level='A';
    cout<<"Address of ramesh: "<<&ramesh<<endl;
    cout<<"Value of health: "<<ramesh.gethealth()<<endl;
    cout<<"Value of Level: "<<ramesh.level<<endl;

}

*/














// 3.......// Copy constructor

/*

# include<iostream>
using namespace std;
class hero
{
    private:
    int health;

    public:
    char level;

    hero(int w, char e)                  // Parameterized constructor   
    {
        health=w;
        level=e;  
    }


    int gethealth()
    {
        return health;
    }


       hero(hero &temp)                    // Copy constructor
    {
        cout<<"copy constructor"<<endl;
        health=temp.health;
        level=temp.level;

    }


    void print()
    {
        cout<<health<<endl;
        cout<<level<<endl;
    }


};

int main()
{
    hero h(100,'A');
    h.print();


    hero k=h;
    h.print();

}

*/













/*

# include<iostream>
using namespace std;
class Hero
{
    private:
    int health;

    public:
    char level;

    Hero(int health, char level)                   // Parameterized constructor
    {
        this->level=level;
        this->health=health;                      //  this pointer 
    } 


    int  gethealth()
    {
        return health;
    }


    Hero(Hero &temp)                            // Copy Constructor
    {
        cout<<"copy constructor"<<endl;
        this->level=temp.level;
        this->health=temp.health;

    }


    void print()
    {
        cout<<"Health: "<<this->health<<endl;
        cout<<"Level: "<<this->level<<endl;
    }

};


int main()
{
    Hero S(70,'C');
    S.print();

    // Copy Constructor

    Hero R(S);
    R.print();


}

*/


















// Copy assignment operator

/*

# include<iostream>
using namespace std;
class Hero
{
    private:
    int health;

    public:
    char level;

    Hero(int h, char l)                   // Parameterized constructor
    {
        level=l;
        health=h;                      //  this pointer 
    } 


    void print()
    {
        cout<<"Health: "<<health<<endl;
        cout<<"Level: "<<level<<endl;
        cout<<"\n";
    }

};


int main()
{
    Hero S(70,'C');
    Hero R(80,'D');
    S.print();
    R.print();

    S=R;                // Copy assignment operator

    S.print();
    R.print();


}

*/






















// Destructor
// A destructor function is called automatically when the object goes out of scope: 
// destructors destroy (or delete) the object.

/*

# include<iostream>
using namespace std;
class Hero
{
    private:
    int health;

    public:
    char level;

    Hero()                                  // Default constructor
    {
        cout<<"Default Constructor: "<<endl;
    }


    ~Hero()                                   // Destructor
    {
        cout<<"Destructor: "<<endl;
    }



};


int main()
{
    // static

    Hero S;                        // For static desructor automaticaaly called

    // Dynammically

    Hero *R=new Hero();
    delete R;                      // For dynamically desructor is manually called
                
}

*/











/*


# include<iostream>
using namespace std;
class Hero
{
    private:
    int health;

    public:
    char level;

    Hero()                                   
    {
        cout<<"Constructor: "<<endl;
    }

    Hero(int h, char l)                   // Parameterized constructor
    {
        level=l;
        health=h;                     
    } 

     ~Hero()                                   // Destructor
    {
        cout<<"Destructor: "<<endl;
    }


    void print()
    {
        cout<<"Health: "<<health<<endl;
        cout<<"Level: "<<level<<endl;
    }

};


int main()
{
    Hero S(70,'C');
    S.print();

    Hero *R=new Hero;
    S.print();
    delete R;

}

*/














// static keyword

// static keyword creates data member that belong to class 
// we can access without object 

/*

# include<iostream>
using namespace std;
class hero
{
    private:
    int health;

    public:
    char level;
    static int timetocomplete;            // static data member

// Default Constructor

    hero()
    {
        cout<<"Constructor Called"<<endl;
    }



    int gethealth()
    {
        return health; 
    }


    char getlevel()
    {
        return level;
    }

    void sethealth(int h)
    {
        health=h;
    }

    void setlevel(char y)
    {
        level=y;
    }


};

// to access static data member
int  hero::timetocomplete=5;

int main()
{
    cout<<hero::timetocomplete<<endl;

}

*/












// static function

// In static function there is no need to create object
// there is no this keyword(pointer)
// can only static members

/*

# include<iostream>
using namespace std;
class hero
{
    private:
    int health;

    public:
    char level;
    static int timetocomplete;            // static data member

// Default Constructor

    hero()
    {
        cout<<"Constructor Called"<<endl;
    }


    int gethealth()
    {
        return health; 
    }


    char getlevel()
    {
        return level;
    }

    void sethealth(int h)
    {
        health=h;
    }

    void setlevel(char y)
    {
        level=y;
    }


 // static function can access only static data members

    static int random()   
    {
        return timetocomplete;
    }

};

// to access static data member
int  hero::timetocomplete=5;

int main()
{
    cout<<hero::timetocomplete<<endl;
    cout<<hero::random();

}


*/









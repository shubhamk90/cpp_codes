// OOP's.....Part 2
// Four Pillars of Oop's
// Enacapsultion....inheritance....polymorphism....abstraction






// (1)
//  Encapsulation 
//  binding together the data member  and the functions 
//  We can create a fully encapsulated class by making all the data members private.


/*

# include<iostream>
using namespace std;
class student
{
    private:
    string name;
    int rollno;
    int age;

    public:

    string getname()
    {
        return name;
    }

    int getrollno()
    {
        return rollno;
    }

    int getage()
    {
        return age;
    }

    void setname(string name)
    {
        this->name=name;
    }

    void setrollno(int rollno)
    {
        this->rollno=rollno;
    }

    void setage(int age)
    {
        this->age=age;
    }

};


int main()
{
    student s1;
    s1.setname("Sk");
    s1.setrollno(10);
    s1.setage(4);

    cout<<"Name: "<<s1.getname()<<endl;
    cout<<"Rollno: "<<s1.getrollno()<<endl;
    cout<<"Age: "<<s1.getage()<<endl;

}


*/











// Access Modifiers and inheritance 




// SYNTAX

/*
class parent_class 
{
    //Body of parent class
};

class child_class: access_modifier parent_class 
{
    //Body of child class
};

*/














// public....public.....public
// access inside or outside class 


/*


# include<iostream>
using namespace std;
class Human                   //  base class....super class....parent class
{
    public:
    int height;
    int weight;
    int age;

    public:
    int getage()
    {
        return age;
    }

    void setage(int w)
    {
        age=w;
    }

};

// class Male.....derived class.....sub class...child class 
// class Male inherits all properties of class Human
// Male inherit propertes of human class in public way





class Male: public Human
{
    public:
    string colour;

    void sleep()
    {
        cout<<"male sleeping"<<endl;
    }
};


int main()
{
    
    Male object1;
    cout<<object1.age<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.height<<endl;
    cout<<object1.colour<<endl;
    object1.setage(86);
    cout<<object1.getage()<<endl;
    object1.sleep();


}


*/















// public....protected.....protected
// access inside own class or access through child class i.e. through getter setter


/*

# include<iostream>
using namespace std;
class Human           
{
    public:
    int height;
    int weight;
    int age;

};


class Male:protected Human
{
    public:
    string colour="brown";

    int getheight()
    {
        return height;
    }

    void setheight(int t)
    {
        height=t;
    }

    
};


int main()
{
    Male m1;
    m1.setheight(10);
    cout<<m1.getheight()<<endl;
    cout<<m1.colour;
}

*/

















// public....private.....private
// access inside own class or access through child class i.e. through getter setter



/*

# include<iostream>
using namespace std;
class Human           
{
    public:
    int height;
    int weight;
    int age;

};


class Male: private Human
{
    public:
    string colour="white";

    int getheight()
    {
        return height;
    }

    void setheight(int q)
    {
        height=q;
    }
       
};


int main()
{
    Male m1;
    m1.setheight(100);
    cout<<m1.getheight()<<endl;
    cout<<m1.colour<<endl;

}

*/























// protected......public.....protected


/*

# include<iostream>
using namespace std;
class Human           
{
    protected:
    int height;
    int weight;
    int age;

};


class Male: public Human
{
    public:
    string colour="red";

    int getheight()
    {
        return height;
    }

    void setheight(int s)
    {
        height=s;
    }
       
};


int main()
{
    Male m1;
    m1.setheight(11);
    cout<<m1.getheight()<<endl;

}

*/

















// protected......protected......protected


/*

# include<iostream>
using namespace std;
class Human           
{
    protected:
    int height;
    int weight;
    int age;

};


class Male: protected Human
{
    public:
    string colour="red";

    int getheight()
    {
        return height;
    }

    void setheight(int s)
    {
        height=s;
    }

       
};


int main()
{
    Male m1;
    m1.setheight(51);
    cout<<m1.getheight()<<endl;

}

*/












// protected......private......private


/*

# include<iostream>
using namespace std;
class Human           
{
    protected:
    int height;
    int weight;
    int age;

};


class Male: private Human
{
    public:
    string colour="red";

    int getheight()
    {
        return height;
    }

    void setheight(int s)
    {
        height=s;
    }

       
};


int main()
{
    Male m1;
    m1.setheight(51);
    cout<<m1.getheight()<<endl; 


}

*/















// private....public..........Not accessible
// private....protected.........Not accessible
// private.....private........  .Not accessible


/*

# include<iostream>
using namespace std;
class Human           
{
    private:
    int height;
    int weight;
    int age;

};


class Male: private Human
{
    string colour="kl";

    public:
    int getheight()
    {
        return height;
    }

    void setheight(int s)
    {
        height=s;
    }
       
};


int main()
{
    Male m1;
    m1.setheight(51);
    cout<<m1.getheight()<<endl; 

}

*/



















// (2) 
// Inheritance
// (i)    Single
// (ii)   Multilevel 
// (iii)  Multiple 
// (iv)   Hierarchical 
// (v)    Hybrid





// (1) Single inheritance 

/*

# include<iostream>
using namespace std;
class Animal
{
    public:
    int age;
    int weight;

    public:
    void speak()
    {
        cout<<"Speaking";
    }
};

class dog:public Animal
{
    
};

int main()
{
    dog d;
    cout<<d.age<<endl;
    cout<<d.weight<<endl;
    d.speak();
}

*/














// (2) Multilevel inheritance

/*

# include<iostream>
using namespace std;
class Animal
{
    public:
    int age;
    int weight;

    public:
    void speech()
    {
        cout<<"Speaking"<<endl;
    }

};


class dog:public Animal
{
    public:
    void half()
    {
        cout<<"Half"<<endl;
    }
};

class GermanShepherd:public dog
{
    public:
    void glass()
    {
        cout<<"Glass"<<endl;
    }
};



int main()
{
    dog d;
    cout<<d.age<<endl;
    cout<<d.weight<<endl;
    d.half();
    d.speech();

    cout<<"\n";

    GermanShepherd g;
    cout<<g.age<<endl;
    cout<<g.weight<<endl;
    g.half();
    g.speech();
    g.glass();

}


*/













// (3) Multiline inheritance

/*

# include<iostream>
using namespace std;
class Animal
{
    public:
    int age;
    int weight;

    public:
    void bark()
    {
        cout<<"Barking"<<endl;
    }

};

class Human
{
    public:
    string colour;

    public:
    void speak()
    {
        cout<<"Speaking"<<endl;
    }

};


class Hybrid:public Animal,public Human
{

};




int main()
{
    Hybrid obj1;
    obj1.speak();
    obj1.bark();

    obj1.colour="white";
    cout<<obj1.colour<<endl;

    obj1.age=20;
    cout<<obj1.age<<endl;

}

*/


















// (4) Hierarchical inheritance

/*

# include<iostream>
using namespace std;
class A
{
    public:
    void func1()
    {
        cout<<"Inside function 1: "<<endl;
    }
};

class B:public A
{
    public:
    void func2()
    {
        cout<<"Inside function 2: "<<endl;
    }   
};


class C:public A
{
    public:
    void func3()
    {
        cout<<"Inside function 3: "<<endl;
    }
};

int main()
{
    A obj1;
    obj1.func1();

    B obj2;
    obj2.func1();
    obj2.func2();

    C obj3;
    obj3.func1();
    obj3.func3();


}

*/










// (5) Hybrid inheritance 


/*

# include<iostream>
using namespace std;
class A
{
    public:
    void func1()
    {
        cout<<"Function 1: "<<endl;
    }
};


class D
{
    public:
    void func4()
    {
        cout<<"Function 4: "<<endl;
    }
};

class B: public A
{
    public:
    void func2()
    {
        cout<<"Function 2: "<<endl;
    }
};



class C: public A,public D
{
    public:
    void func3()
    {
        cout<<"Function 3: "<<endl;
    }
};


int main()
{
    B b1;
    b1.func1();
    b1.func2();

    C c1;
    c1.func1();
    c1.func3();
    c1.func4();


}

*/









/*


# include<iostream>
using namespace std;
class vehicle
{
    public:
    void wheel()
    {
        cout<<"This is vehicle: "<<endl;
    }
};





class ball
{
    public:
    void boll()
    {
        cout<<"This is ball: "<<endl;
    }
};





class car:public vehicle
{
    public:
    void gadi()
    {
        cout<<"This is Car: "<<endl;
    }
};





class trian:public vehicle, public ball
{
    public:
    void rail()
    {
        cout<<"This is train: "<<endl;
    }
};




int main()
{
    car c1;
    c1.wheel();
    c1.gadi();

    trian t1;
    t1.wheel();
    t1.rail();
    t1.boll();

}

*/











//  Inheritance Ambiguity

/*

# include<iostream>
using namespace std;
class A
{
    public:
    void abc()
    {
        cout<<"A class: "<<endl;
    }
};


class B
{
    public:
    void abc()
    {
        cout<<"B class: "<<endl;
    }
};


class C:public A, public B
{
    public:
};

int main()
{
    C c1;
    c1.A::abc();
    c1.B::abc();

}

*/

















// (3)
// Polymorphism
//   (i)   Compile Time Polymorphism   OR STATIC Polymorphism
//   (a)   Function Overloading
//   (b)   Operator Overloading


//   (ii)  Run Time Polymorphism       OR  DYNAMIC POLYMORPHISM
//   (a)   Virtual Functions  (Function Overriding)






// Compile Time Polymorphism.....Function Overloading

/*

# include<iostream>
using namespace std;
class A
{
    public:

    int add(int a, int b)
    {
        return a+b;
    }

    int add(int a, int b, int c)
    {
        return a+b+c;
    }


// with different numbers of arguments

};


int main()
{
    A a1;
    cout<<a1.add(10,20)<<endl;
    cout<<a1.add(5,10,5);
}

*/









/*

# include<iostream>
using namespace std;
class A
{
    public:

    int add(int a, int b)
    {
        return a+b;
    }

    double add(double a, double b)
    {
        return a+b;
    }
    
// with different types of arguments

};


int main()
{
    A a1;
    cout<<a1.add(10,10)<<endl;
    cout<<a1.add(3.2,1.2);

}

*/








/*

# include<iostream>
using namespace std;
class A
{
    public:

    int add(int a, int b, int c=0, int d=0)
    {
        return a+b+c+d;
    }

//  Default Arguments

};


int main()
{
    A a1;
    cout<<a1.add(5,5)<<endl;
    cout<<a1.add(5,5,5)<<endl;
    cout<<a1.add(5,5,5,5)<<endl;


}

*/















// Compile Time Polymorphism.....Operator Overloading



























// Run Time Polymorphism..........Function overriding



/*

# include<iostream>
using namespace std;
class Animal
{
    public:
    void speak()
    {
        cout<<"speaking: "<<endl;
    }

};


class Dog:public Animal
{
    public:
    void speak()
    {
        cout<<"barking: "<<endl;
    }
};

int main()
{
    Dog d1;
    d1.speak();



}


*/









 
// virtual functions 


/*

# include<iostream>
using namespace std;
class A
{
    public:
    int a=10;
    void show()
    {
        cout<<"In base class: "<<endl;
        cout<<"Value of a: "<<a<<endl;
    }
};

class B:public A
{
    public:
    int b=20;

    void show()
    {
        cout<<"In derived class: "<<endl;
        cout<<"Value of b: "<<b<<endl;
    }

};


int main()
{
    
    A *p;             // Base class pointer points to derived class object 
    B b1;        
    p=&b1;
    p->show();

}

*/


/*

In the above example, * a is the base class pointer. 
The pointer can only access the base class members but not the members of the derived class. 
Although C++ permits the base pointer to point to any object derived from the base class, 
it cannot directly access the members of the derived class. 
Therefore, there is a need for virtual function which allows the base pointer 
to access the members of the derived class.

*/






/*

N  O  T  E.....

   A *p;             // Base class pointer points to base class object 
   A a1;
   p=&a1;
   p->show();


*/









/*

# include<iostream>
using namespace std;
class A
{
    public:
    int a=10;
    virtual void show()
    {
        cout<<"In base class: "<<endl;
        cout<<"Value of a: "<<a<<endl;
    }
};

class B:public A
{
    public:
    int b=20;

    void show()
    {
        cout<<"In derived class: "<<endl;
        cout<<"Value of b: "<<b<<endl;
    }

};


int main()
{
    
    A *p;            // Base class pointer points to derived class object to access 
    B b1;            // derived class function by using virtual keyword in base class function
    p=&b1;            
    p->show();


}

*/
   









// Pure virtaul functions 

/*

(i) Pure virtual function are virtual functions whuch have no defination.
they start with virtual keyword and ends with equal to zero.

(ii) If we don't override the pure virtual function in derive class then 
derive class also becomes abstract class.

(iii)  A class is abstract if it has at least one pure virtual function. 

(iv)  if a class that conatins a pure virtual function then we cannot cretae an object from it.
Such a class is known as an abstract class.

(v) We can't change the  signature of the pure virtual function.


*/











/*


# include<iostream>
using namespace std;
class A                                               // abstract class 
{
    public:
    virtual void show()=0;                            // Pure virtual function 
};

class B:public A
{
    public:
    void show()
    {
        cout<<"In derived class: "<<endl;
    }
};

int main()
{
    B b1;
    b1.show();
}


*/















/*

# include<iostream>
using namespace std;
class A                               // abstract class 
{
    public:
    virtual void show()=0;          // Pure virtual function 
};

class B:public A
{
    public:
    void show()
    {
        cout<<"In derived class: "<<endl;
    }
};

int main()
{
    A *p;
    B b1;
    p=&b1;
    p->show();


}


*/

















//(4)
// Abstraction
// (i) in class
// (ii) in headerfile


/*

# include<iostream>
using namespace std;
class A
{
    private:
    int a,b;

    public:
    void set(int x, int y)
    {
        a=x;
        b=y;
    }

    void get()
    {
        cout<<"a: "<<a<<endl;
        cout<<"b: "<<b<<endl;
    }
};

int main()
{
    A a1;
    a1.set(10,20);
    a1.get();
   
}

*/













/*


# include<iostream>
# include<cmath>
using namespace std;
int main()
{
    int a=2;
    int b=2;
    int c=pow(a,b);
    cout<<c;
}


*/



















// friend function

/*

# include<iostream>
using namespace std;
class demo
{
    private:
    int a;

    public:
    void set(int q)
    {
        a=q;
    }

    void display()
    {
        cout<<a<<endl;
    }


    friend void sum(demo);  // friend function declaration


};



void sum(demo dd1)
{
    cout<<dd1.a<<endl;
}




int main()
{
    demo dd1;
    dd1.set(5);
    // dd1.display();

    cout<<"\n";

    sum(dd1);           // friend function call
}

*/


















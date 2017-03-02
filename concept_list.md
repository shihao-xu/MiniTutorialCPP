# the concept of class
0. procedural programming: with a procedural approadch, you first concentrate on the procedures you will follow and then think about how to represent the data
0. object-oriented programming: with an OOP approach, you concentrate on the object as the user perceives it, thinking about the data you need to describe the object and the operations that 
    will describe the user's interaction with the data. 
1. abstraction: In computing, abstraction is the crucial step of representing information in terms of its interface with the user.
1. Data type: in terms of its appearance and the operations that can be performed on it.
    Specifying a basic type does threee things:
        i. Determine how much memory is needed for a data object.
        ii. Determin how the bits in memory are interpreted
        iii. Determine what operations, or methods, can be performed using the data object.
2. class: A class is a C++ tool for translating an abstraction to a user-defined type. 
    A class specification has two parts:
        i. A class declaration.
        ii. The class method definitions. 
2. public interface of a type/class: to use a class, you need to know its public interface; to write a class, you need to create its public interface.
    C++ programmers place the interface, in the form of a class definition, in a header file and place the implementation, in the form of code for the class methods, in a source code file.
2. objects, instances of a class: class is just a blue print, objects/instances of it are the "real guys".
2. object/variable declaration.
2. class member function: a class member function can be defined in place(in the class definition) or it can be represented by a prototype and the full definitions for the other member function
    resides in the implementation file, but the prototypes suffice to describe the function interfaces. 
2. access control for class members: 
    i. public: any program can access public protions directly (identifies class members that constitute the public interface for the class -- abstraction)
    ii. private: A program can access the private members of an object only by using the public member functions( or via a friend function)
    iii. protected: TODO
3. Class constructors, destructors
4. const member functions
5. "this" pointer
6. class scope
7. encapsulation, data hiding:
    i. data hiding: insulation of data from direct access by a program. It's a good practice in computing, because it preserves the integrity of the data.
    ii. encapsulation:
8. polymorphism: 
    variety of polymorphism:
    i. operator overloading
9. inheritance: the basis for reusing code
10. reusability of code


# class template
1. class template (alias: "generic class declaration", "template definition of a class"): 
    A class template is a recipe, which is capable of accepting a list of type names as an argument for building a class or a function.
2. template member function: A member function of a class that accepts a list of type names as an argument. 
3. 
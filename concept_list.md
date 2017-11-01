# the concept of class
0. procedural programming: with a procedural approadch, you first concentrate on the procedures you will follow and then think about how to represent the data
0. object-oriented programming: with an OOP approach, you concentrate on the object as the user perceives it, thinking about the data you need to describe the object and the operations that 
    will describe the user's interaction with the data. 
0. abstraction: In computing, abstraction is the crucial step of representing information in terms of its interface with the user.
0. Data type: in terms of its appearance and the operations that can be performed on it.
    Specifying a basic type does threee things:
    1. Determine how much memory is needed for a data object.
    2. Determin how the bits in memory are interpreted
    3. Determine what operations, or methods, can be performed using the data object.
0. class: A class is a C++ tool for translating an abstraction to a user-defined type. 
    A class specification has two parts:
    1. A class declaration.
    2. The class method definitions.
0. public interface of a type/class: to use a class, you need to know its public interface; to write a class, you need to create its public interface.
    C++ programmers place the interface, in the form of a class definition, in a header file and place the implementation, in the form of code for the class methods, in a source code file.
0. objects, instances of a class: class is just a blue print, objects/instances of it are the "real guys".
0. object/variable declaration.
0. class member function: a class member function can be defined in place(in the class definition) or it can be represented by a prototype and the full definitions for the other member function
    resides in the implementation file, but the prototypes suffice to describe the function interfaces. 
0. access control for class members:
    1. public: any program can access public protions directly (identifies class members that constitute the public interface for the class -- abstraction)
    2. private: A program can access the private members of an object only by using the public member functions( or via a friend function)
    3. protected: TODO
0. Class constructors, destructors
0. const member functions
0. "this" pointer
0. class scope
0. encapsulation, data hiding:
    1. data hiding: insulation of data from direct access by a program. It's a good practice in computing, because it preserves the integrity of the data.
    2. encapsulation:
0. polymorphism: 
    variety of polymorphism:
    1. operator overloading
0. inheritance: the basis for reusing code
0. reusability of code

# functions
0. function template: generic function description. It does not create any functions, it provides compiler with directions about how to define a function. 
    Compiler generates the specific function for the particular type you use.
0. generic programming: program in a generic way
0. parameterized type: a type, some internal detail can be set by choosing arguments for the type parameter
0. C++ treats "class" and "typename" the same when they are used in this context
0. You should use templ,ates if you need functions that apply the same algorthm to a variety of types.
0. template function prototype, template function definition. Typically, templates are placed in a header file that is then included in the file using them.
0. Overloaded Templates:Just as you overload regular function definitions, overloaded templates neded distinct function signatures.


# class template
0. class template (alias: "generic class declaration", "template definition of a class"): 
    A class template is a recipe, which is capable of accepting a list of type names as an argument for building a class or a function.
0. template member function: A member function of a class that accepts a list of type names as an argument. 
0. 

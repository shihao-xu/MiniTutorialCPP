## The Concept of Class
1. **Procedural Programming**: with a procedural approadch, you first concentrate on the procedures you will follow and then think about how to represent the data
2. **Object-Oriented Programming**: OOP is a particular conceptual approach to designing programs. With an OOP approach, you concentrate on the object as the user perceives it, thinking about the data you need to describe the object and the operations that will describe the user's interaction with the data. After you develop a description of that interface, you move on to decide how to implement the interface and data storage. Here are the most important OOP features:
    - Abstraction
    - Encapsulation and data hiding
    - Polymorphism
    - Inheritance
    - Reusability of Code
    The class is the single most important C++ enhancement for implementing these features and tying them together.
    
3. **Abstraction**: In order to cope with real life complexities, one way is to frame simplifying abstraction. In computing, abstraction is the crucial step of representing information in terms of its interface with the user. You abstract the essential operational features of a problem and express a solution in those terms.  From abstraction, it is a short step to the user-defined type, which iin C++ is a class design that implements the abstract interface.
4. **Data type**: in terms of its appearance -- how it is stored in memory, and the operations that can be performed on it.
    Specifying a **basic type** does threee things:
    1. Determine how much memory is needed for a data object.
    2. Determine how the bits in memory are interpreted
    3. Determine what operations, or methods, can be performed using the data object.
5. **Class**: A class is a C++ tool for translating an abstraction to a user-defined type. It combines data representation and methods for manipulating that data into one neat package.
    How to design a class:
    1. Think what operations are essential. This list of operations define the public interface of the class.
    2. To support this interface, you need to store some information. These are the data members of the class.

    A class specification has two parts:
    1. A class declaration (the class overview): which describes the data components, in terms of data members, and the public interface, interms of member functions, termed methods.
    2. The class method definitions (the details): which describe how certain class member functions are implemented.
    3. C++ programmers place the interface, in the form of a class definition, in a header file and place the implementation, in the form of code for the class methods, in a source code file.
6. **Public Interface of a Type/Class**: to use a class, you need to know its public interface; to write a class, you need to create its public interface.
7. **Objects, Instances of a Class**: class is just a blue print, objects/instances of it are the "real guys".
8. **Object/Variable Declaration**
9. **Class Member Function**: a class member function can be defined in place (in the class definition) or it can be represented by a prototype and the full definitions for the other member function resides in the implementation file, but the prototypes suffice to describe the function interfaces.
10. **Access Control for Class Members**:
    1. **Public**: any program can access public protions directly (identifies class members that constitute the public interface for the class -- abstraction)
    2. **Private**: A program can access (communicate with) the private members of an object only by using the public member functions( or via a friend function)
    3. **protected**: TODO
11. **Class constructors, Destructors**: Special member functions for creating and disposing of objects that belong to a class.
12. **Const Member Functions**
13. **The "this" Pointer**
14. **Class Scope**
15. **Encapsulation, data hiding**:
    1. **Data Hiding**: insulation of data from direct access by a program. It's a good practice in computing, because it preserves the integrity of the data.
    2. **Encapsulation**:
16. **Polymorphism**: A Variety of polymorphism:
    1. **Operator Overloading**
17. **Inheritance**: the basis for reusing code
18. **Reusability of Code**

## Functions
1. **Function Template**: is a _generic function description_ (distinguish between function template and function definition). It defines a function in terms of a generic type for which a specific type can be substituted. By passing a type as a parameter to a template, you cause the compiler to generate a function for that particular type. It does not create any functions, it provides compiler with directions about how to define a function. Compiler generates the specific function for the particular type you use. You don't see the generated, specific function definition, but the compiler generates and then uses it in the program.

    Function templates enable you to define a function in terms of some arbitrary type.
    
    The benefits of templates are that they make generating multiple function definitions simpler and more reliable.
    
2. **Generic Programming**: Templates let you program in terms of a generic type instead of a specific type, in other words, program in a generic way. Generic type is a synonym for **polymophic type**. Because types are represented by parameters, the template feature is sometimes referred to as **Parameterized Types**.
3. **Parameterized Type**: A type, some internal detail can be set by choosing arguments for the type parameter. C++ treats the keywords "class" and "typename" identically when they are used in this context.
4. You should use templates if you need functions that apply the same algorthm to a variety of types.
5. **(Template Function, or) Function Template Prototype, (Template Function, or) Function Template Definition**:
    - Function Template Prototype: similar to normal function prototype.
    - Function Template Definition: similar to normal function definition.
    
    Typically, templates are placed in a header file that is then included in the file using them.
    
6. **Overloaded Templates**: Just as you overload regular function definitions, overloaded templates needs distinct function signatures.
7. To let the compiler know that you need a particular form of swap function, you just use a function called Swap( ) in your program. The compiler checks the argument types you use and then generates the corresponding function.


## class template
1. **Class Template** (alias: **"Generic Class Declaration"**, **"Template Definition of a Class"**):
    A class template is a recipe, which is capable of accepting a list of type names as an argument for building a class or a function.
2. **Template Member Function**: A member function of a class that accepts a list of type names as an argument.

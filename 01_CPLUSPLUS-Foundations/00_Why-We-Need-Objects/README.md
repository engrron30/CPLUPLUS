# Why Need Objects

Actually, you do not need __OBJECTS__ to code.
As long as you know how to do procedural programming, you are good to go.
A simple traditional C++ program will lead you to many places.
Like the one below:

```
#include <stdio.h>

int main()
{
    printf("Hello World!\n");
    return 0;
}
```

__OBJECTS__ are just used to act like a blueprint for your design.
Think of it like a map, or a data structure of a certain stuff.
But you do not need it.
Just remember your variables and you do not have to worry anything.

For example, you are defining a name, age and savings variables.
You can simply do that like this:
```
int main()
{
    string name;
    int age;
    float savings;

    name = "Ron";
    age = 26;
    savings = 0;        // Yes I am broke

    return 0;
}
```

If you are defining multiple instance of this, just name them with different namings.
Like we can define name, age and savings for p1 and p2.

```
int main()
{
    string p1_name;
    int p1_age;
    float p1_savings;

    string p2_name;
    int p2_age;
    float p2_savings;
}
```

Imagine we are going to define 10 instances of this. Or 30. 50. Or even 1,000,000.
That's a lot of unnecessary coding to do.

## Yes, We Need Objects

So, what we can do is to introduce an object with the data structure we previously defined: name, age and savings.
Just simply define the variables we have in a public specifier enclosed by the class keyword.

```
class Person
{
    public:
        string name;
        int age;
        float savings;
};
```

Inside your main function, you can now declare the p1 and p2 as objects without creating multiple variables.

```
int main()
{
    Person p1;
    Person p2;

    p1.name = "Ron";
    p1.age = 26;
    p1.savings = 0f;

    p2.name = "Ron, Sr.";
    p2.age = 48;
    p2.savings = 1000000f;

    return 0;
}
```

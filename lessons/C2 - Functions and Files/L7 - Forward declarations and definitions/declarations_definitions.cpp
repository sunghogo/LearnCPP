int add(int x, int y); // this function declaration/prototype tells the compiler about a function named "add" that takes two int parameters and returns an int.  No body!

int main() {
    int x;                // instantiates/defines variable x
    
    x = 5;
    add(x, x);

    return 0;
}

// because this function has a body, it is an implementation/definition of function add()
int add(int x, int y)
{
    int z{ x + y };   // instantiates/defines variable z

    return z;
}


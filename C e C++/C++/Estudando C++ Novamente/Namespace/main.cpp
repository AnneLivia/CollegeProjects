#include <iostream>
#include <string>

namespace ns1{
   int num = 10;
   class A{
    public:
        void print() const
        {
            std::cout << "Hello. I'm the Class A from the namespace ns1.\n";
        }
   };
}

namespace ns2{
    int num = 20;
    class A{
    public:
        void print() const
        {
            std::cout << "Hello, I'm the Class A from the namespace ns2.\n";
        }
    };
}

int main()
{
    std::cout << "Namespace ns1: " << ns1::num << std::endl; // we must use the scope operator if we want to use the number or declare: using namespace std;
    std::cout << "Namespace ns2: " << ns2::num << std::endl; // we must use the scope operator if we want to use the number or declare: using namespace std;
    std::string nome = "Livia";
    // Same as if we want to use another thing inside the namespace, for instance a class

    ns1::A namespace1; // declaring an object of the class ns1
    ns2::A namespace2; // declaring an object of the class ns2
    namespace1.print(); // using the print method from the class inside the namespace ns1
    namespace2.print(); // using the print method from the class inside the namespace ns2
    return 0;
}

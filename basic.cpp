#include <iostream>
using namespace std;

class Complex{
    private:
        int a, b;       //a, b are instance member varaibles
    public:
        void set_data(int x, int y){        //instance member function (If no instance, how will this called)
            a = x;
            b = y;
        }
        void show_data(){                   //instance member function (If no instance, how will this be called)
            cout<<"\n a = "<<a<<" b = "<<b;
        }
        Complex add(Complex c){             //instance member function (If no instance, how will this be called)
            Complex temp;
            temp.a = a + c.a;
            temp.b = b + c.b;
            return temp;
        }
};

int main() {
	// your code goes here
	Complex c1, c2, c3;
	c1.set_data(3, 4);
	c2.set_data(5, 6);
	c3 = c1.add(c2);
	c3.show_data();
	return 0;
}

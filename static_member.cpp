#include <iostream>
using namespace std;

class Account{
    private:
        int balance;        //Instance Member Variable
        static float roi;   //Static Member/Class Varible
    public:
        void setBalance(int b)
        { balance = b;}
};
float Account:: roi = 3.5f; //This line enables the static member variable to get memory space

int main() {
	// your code goes here
	Account a1;
	return 0;
}

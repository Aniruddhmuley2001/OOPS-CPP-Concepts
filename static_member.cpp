#include <iostream>
using namespace std;

class Account{
    private:
        int balance;        //Instance Member Variable
        static float roi;   //Static Member/Class Varible
    public:
        void setBalance(int b)
        { balance = b;}
        static void setRoi(float r) //Static Member Function.
                                    //static keyword added so to access the function without using any object.
        { roi = r;}
};
float Account:: roi = 3.5f; //This line enables the static member variable to get memory space.
                            //Does not depend on the number of objects created.

int main() {
	// your code goes here
	Account a1, a2;
	Account::roi = 4.5f;    //Used if roi would not have been private. So not to be used here.
	a1.setRoi(4.5f);        //Used if atleast one object available
	Account::setRoi(4.5f);  //Used if no object to be used to access setRoi function.
	return 0;
}

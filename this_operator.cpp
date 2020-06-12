#include <iostream>
using namespace std;

class test{
	private:
		int x;
	public:
		void setX(int x){
			this->x = x;
		}
		void print(){
			cout<<"a = "<<x<<endl;
		}
};

int main(){
	test tst;
	int a = 30;
	tst.setX(a);
	tst.print();
	
	return 0;
}

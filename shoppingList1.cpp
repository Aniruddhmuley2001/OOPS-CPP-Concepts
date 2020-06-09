#include <iostream>

using namespace std;

const int m=50;

class ITEMS{
	private:
		int itemCode[m];
		float itemPrice[m];
		int count;
	public:
		void CNT(){count = 0;}
		void getItem();
		void displaySum();
		void remove();
		void displayItems();
};

//==============================================================

void ITEMS::getItem(){
	cout<<"Enter the item code: ";
	cin>>itemCode[count];
	cout<<"Enter the item price: ";
	cin>>itemPrice[count];
	count++;
}

void ITEMS::displaySum(){
	float sum = 0;
	for(int i = 0; i < count; i++)
		sum += itemPrice[i];
	cout<<"Total value = "<<sum<<endl;
}

void ITEMS::remove(){
	int a;
	cout<<"Enter the item code of the one to be removed: ";
	cin>>a;
	
	for(int i = 0; i < count; i++)
		if(itemCode[i] == a){
			itemPrice[i] = 0;
			itemCode[i] = 0;	
		}
}

void ITEMS::displayItems(){
	cout<<"\nCode Price\n";
	for(int i = 0; i < count; i++)
	{
		cout<<"\n"<<itemCode[i];
		cout<<" "<<itemPrice[i];
	}
	cout<<endl;
}

//=============================================================

int main(){
	ITEMS order;
	order.CNT();
	int x;
	do{
		cout<<"\nTo do the following, enter the appropriate number: \n";
		cout<<"\n1 : Add an item";
		cout<<"\n2 : Display total value";
		cout<<"\n3 : Delete an item";
		cout<<"\n4 : Display all items";
		cout<<"\n5 : Quit"<<endl;
		
		cout<<"\nEnter your option: ";
		cin>>x;
		
		switch(x)
		{
			case 1 : order.getItem();break;
			case 2 : order.displaySum();break;
			case 3 : order.remove();break;
			case 4 : order.displayItems();break;
			case 5 : break;
			default: cout<<"Option entered is out of range. Try again.";
		}
	}
	while(x != 5);
	
	return 0;
}

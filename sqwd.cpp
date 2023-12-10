#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Item
{
	public:
	char name[10];
	int quantity;
	int price;
	int code;
	
	bool operator==(const Item& i1)
	{
		return code==i1.code;
	}
	bool operator<(const Item& i1)
	{
		return code<i1.code;
	}
};
vector<Item> items;
void print(Item& i1);
void display();
void insert();
void search();
void del();
bool compare(const Item& i1,const Item& i2);

int main() 
{
	int ch;
	do
	{
		cout<<"******MENU******"<<endl;
		cout<<"1.Insert"<<endl;
		cout<<"2.Dispaly"<<endl;
		cout<<"3.Search"<<endl;
		cout<<"4.Sort"<<endl;
		cout<<"5.Delete"<<endl;
		cout<<"6.Exit"<<endl;
		
		cout<<"Enter ur choice :"<<endl;
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				insert();
				break;
			case 2:
				display();
				break;
			case 3:
				search();
				break;
			case 4:
				sort(items.begin(),items.end(),compare);
				cout<<"sorted on code"<<endl;
				break;
			case 5:
				del();
				break;
			case 6:
				exit(0);
		}
		
		
	}
    while(ch!=6);
	return 0;
}
void insert()
{
	Item i1;
	
	cout<<"Enter item name :";
	cin>>i1.name;
	cout<<"Enter item quantity :";
	cin>>i1.quantity;
	cout<<"Enter item price :";
	cin>>i1.price;
	cout<<"Enter item code :";
	cin>>i1.code;
	
	items.push_back(i1);

}
void display()
{
	for_each(items.begin(),items.end(),print);
}
void print(Item& i1)
{
	cout<<"\n";
	cout<<"\nItem name :"<<i1.name;
	cout<<"\nItem quantity :"<<i1.quantity;
	cout<<"\nItem price :"<<i1.price;
	cout<<"\nItem code :"<<i1.code;
}
void search()
{
	vector<Item>::iterator p;
	Item i1;
	
	cout<<"Enter item code to search";
	cin>>i1.code;
	p=find(items.begin(),items.end(),i1);
	if(p==items.end())
	{
		cout<<"Not found";
	}
	else
	{
		cout<<"\nFound"<<endl;
	cout<<"\nItem name :"<<p->name<<endl;
	cout<<"\nItem quantity :"<<p->quantity<<endl;
	cout<<"\nItem price :"<<p->price<<endl;
	cout<<"\nItem code :"<<p->code<<endl;
		
	}
}
void del()
{
	vector<Item>::iterator p;
	Item i1;
	
	cout<<"Enter item code to search";
	cin>>i1.code;
	p=find(items.begin(),items.end(),i1);
	if(p==items.end())
	{
		cout<<"Not found";
	}
	else
	{
		items.erase(p);
		cout<<"\nDeleted";	
	}
}

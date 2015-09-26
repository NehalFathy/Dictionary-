#include "Dictionary.h"
#include "dbc.h"
#include <iostream>
using namespace std;

void test_correct()
{
	try
	{
		
	cout<<"^^^^^ Correct Test ^^^^^"<<endl;
	Dictionary h;
	h.add("Hassan", "Hassan@gmail.com");
	h.add("Nehal","Nehal@gmail.com ");
	h.add("Mohamed","Mohamed@gmail.com");

	string x = h.get_key("Hassan");
	cout<<x<<endl;

	int length=h.GetNumberOfItems();
	cout<<"Number of items = "<<length<<endl;


	string y = h.get_key("Nehal");
	cout<<y<<endl;
	}
	catch(DesignByContractException & c)
	{
		cout<<(string)c;

	}
	
}


void test_wrong()

{
	try
	{
		
	cout<<"^^^^^ Wrong Test ^^^^^"<<endl;
	Dictionary h;
	h.add("Hassan", "Hassan@gmail.com");
	h.add("Nehal","Nehal@gmail.com ");
	h.add("Mohamed","Mohamed@gmail.com");

	string x = h.get_key("Hassan");
	cout<<"key is "<<x<<endl;
    
	h.remove("Nehal");
	cout<<h.get_key("Nehal")<<endl;
	}
	catch(DesignByContractException & c)
	{
		cout<<(string)c;

	}

}

void main ()
{
	test_correct();
	test_wrong();
	system ("pause");
return ;
}
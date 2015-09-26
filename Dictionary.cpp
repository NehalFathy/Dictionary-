
#include "dbc.h"
#include <iostream>
#include <string>
#include "Dictionary.h"
using namespace std;
bool Dictionary::check_exist(string g)
{ 
	INVARIANT0(GetNumberOfItems()>=0 && GetNumberOfItems()<MAX);

	int i;

for(i=0; i<=1000;i++)//as count from 0 to 999
	if (Names[i]==g){

		INVARIANT0(GetNumberOfItems()>=0 && GetNumberOfItems()<MAX);
		return true;}
		             
	INVARIANT0(GetNumberOfItems()>=0 && GetNumberOfItems()<MAX);

	return false;
}

Dictionary::Dictionary ()
{  
count =0;
}

void Dictionary:: add(string x,string y)
{  INVARIANT0(GetNumberOfItems()>=0&& GetNumberOfItems()<MAX);
  REQUIRE0(count<1000);
  REQUIRE0(!check_exist(x));
	 Names[count]=x;
	 Keys[count]=y;
	 count++;
	 ENSURE0(Names[count-1]==x);
	 ENSURE0(Keys[count-1]==y);
	 INVARIANT0(GetNumberOfItems()>=0&& GetNumberOfItems()<MAX);
}

string Dictionary::get_key(string x)
{
 INVARIANT0(GetNumberOfItems()>=0&& GetNumberOfItems()<MAX);
 int i;
 for(i=0;i<1000;i++){
	 if (Names[i]==x){
		
	 INVARIANT0(GetNumberOfItems()>=0&& GetNumberOfItems()<MAX);
	 return Keys[i];}
 }
}

//void Dictionary::remove (string x)

int Dictionary::GetNumberOfItems()
{ 

	return count;
}

void Dictionary::remove (string x) //removes the item by replacing it with the last elemet at count
{

	INVARIANT0(GetNumberOfItems()>=0&& GetNumberOfItems()<MAX);
	REQUIRE0(check_exist(x)==true);
	REQUIRE0(count<1000);
  int i;
  for(i=0;i<=count;i++)
  {
  
	  if (Names[i]==x){
		  Names[i]=Names[count-1];
		Keys[i]=Keys[count-1];
	  } //as we start counting from zero
	  int A;
	  A=count-1;
	   count--;
	   ENSURE0(count<1000);
	   ENSURE0(Names[i]==Names[A]);
	  INVARIANT0(GetNumberOfItems()>=0&& GetNumberOfItems()<MAX);
  }
}
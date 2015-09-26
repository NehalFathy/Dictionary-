


#include <string>
#define MAX 1000
using namespace std;

class Dictionary
{ 
private:

 string Names[MAX];
 string Keys[MAX]; 
 int count; //ana maly l7ad count bs ama 1000 de 7agm el array kolo 
 
public:
	
Dictionary ();
void add(string x,string y);
void remove (string x);
string get_key(string x);
bool check_exist(string x);
int GetNumberOfItems();
void remove (string x,string y);
};


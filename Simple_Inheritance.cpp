#include<bits/stdc++.h>
using namespace std;


// Inheritance => The capability of a class to derive properties and characteristics from another class is called Inheritance.

class Parent{
	
	public:
		
		void whereAmI(){
			cout<<" I'm currently in Class Shape"<<endl;
		}
};

class Sub_class : public Parent{
		
};

int main(){
	
	Sub_class s;
	
	s.whereAmI();
}

#include<bits/stdc++.h>
using namespace std;

//Polymorphism => an Operation performing different behaviour towards different scenarios.

class Parent{
	public:
		
		//This Example is An Example of Operator Overloading and function Overloading
		
		//Operator Overloading => Making the operator to perform different behaviour to different datatypes or the no of datatypes.
		
		//function Overloading => Many functions declared with same name but perform different operations but they are distiguished by their parameters type and no. of parameters.
		
		void Add(int q,int w){
			cout<<" Addition of numbers : "<<q+w<<endl;
		}
		
		void Add(string q,string w){
			cout<<" Addition of strings : "<<q+w<<endl;
		}	
		
};

int main(){
	
	Parent p;
	
	p.Add(2,3);
	
	p.Add("2","3");
	
}

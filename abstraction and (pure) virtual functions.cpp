#include<bits/stdc++.h>
using namespace std;
/*
A virtual function is a function that is defined in parent class but not implemented. That function is overridden by function in another class(sub-class or child-class).
Abstraction is showing only functionality but not the internal detailes.
*/


class Shape{
	public:
		int r,x,y;
		
		Shape(int rad){
			r=rad;
		}
		
		Shape(int height,int width){
			x=height;
			y=width;
		}
		
		void getClass(){
			cout<<"Ur in class shape"<<endl;
		}
		//virtual void getArea(); // declared, but not pure virtual or defined
		virtual void getArea()=0; //To make it pure virtual, you need = 0 at the end.
		
		virtual ~Shape(){};
};

class Rectangle : public Shape{
	public:
		
		Rectangle(int x,int y):Shape(x,y){}
		
		void getArea(){
			cout<< "Area of rectangle : "<<x * y<<endl;
		}
		
		void getClass(){
			cout<<"Ur in class Rectangle"<<endl;
		}
};

class Circle : public Shape{
	public:
		
		Circle(int r):Shape(r){}
		
		void getArea(){
			cout<< "Area of Circle : "<<2* 3.14 * r<<endl;
		}
		
		void getClass(){
			cout<<"Ur in class Circle"<<endl;
		}
};

int main(){
	Circle c(5);
	c.getClass();
	c.getArea();
	
	Rectangle r(3,4);
	r.getClass();
	r.getArea();
	
}

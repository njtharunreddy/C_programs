#include <iostream>
using namespace std;
/*class A
{
int x;
int y;
public :
A()
{
cout<<" a cout"<<endl;
x=10;
y=20;
}
void display()
{
cout<<x<<" "<<y<<endl; // x is 10 and y is 20
}
void assign(int a,int b)
{
x=a;
y=b;
}
};
class B:public A
{
int p;
int q;
public :
B()
{
cout<<" b cout"<<endl;
p=30;
q=40;
}
void assign(int a, int b)
{
p=a; // 88
q=b; // 36
A::assign(a,b);
}
void display()
{
A toobj;
toobj.display();
cout<<p<<" "<<q<<endl; // p is 88 and q is 36
}
};
int main()
{
B obj1;
obj1.assign(88,36);
obj1.display();
}*/

class A
{
public:
	A()
	{
		cout<<" A constructor"<<endl;
	}
	~A()
	{
		cout<<"A destructor"<<endl;
	}
};
class B: public A
{
public:
	B()
	{
		cout<<" B constructor"<<endl;
	}
	~B()
	{
		cout<<"B destructor"<<endl;
	}
};
class D
{
public:
	D()
	{
		cout<<" D constructor"<<endl;
	}
	~D()
	{
		cout<<"D destructor"<<endl;
	}
};
class C : public D,public B
{
public:
	C()
	{
		cout<<" C constructor"<<endl;
	}
	~C()
	{
		cout<<"C destructor"<<endl;
	}
};

class E : public C
{
public:
	E()
	{
		cout<<" E constructor"<<endl;
	}
	~E()
	{
		cout<<"E destructor"<<endl;
	}
};
class F : public E
{
public:
	F()
	{
		cout<<" F constructor"<<endl;
	}
	~F()
	{
		cout<<"F destructor"<<endl;
	}
};
int main()
{
	A tobj;
	cout<<" Hello "<<endl;
	F obj1;
	cout<<" Sample "<<endl;
}
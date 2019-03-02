/*
class Engine
{
public:
	Engine(int aED=0,int aEP=0);

	int m_iDisplacemen;
	int m_iPower;
};
Engine::Engine(int aED,int aEP)
{
	m_iDisplacemen=aED;
	m_iPower=aEP;

}
class Vehicle
{
public:
	Vehicle(int aED=0,int aEP=0,double aVWe=0,int aVWh=0);
protected:
	Engine m_Engine;
	double m_dWeight;
	int m_iWheels;

};
Vehicle::Vehicle(int aED,int aEP,double aVWe,int aVWh)
{
	 m_dWeight=aVWe;
	 m_iWheels=aVWh;
}
class Car :public Vehicle
{
public:
	Car(int aED=0,int aEP=0,double aVWe=0,int aVWh=0,int aCP=0);
	void PrintData();
private:
	int m_iPassengers;
};
Car::Car(int aED, int aEP, double aVWe, int aVWh, int aCP)
{
	m_Engine.m_iDisplacemen=aED;
	m_Engine.m_iPower=aEP;
	m_dWeight=aVWe;
	m_iWheels=aVWh;
	m_iPassengers=aCP;
}
void Car::PrintData()
{
	cout<<"马力："<<m_Engine.m_iDisplacemen<<"匹"<<endl;
	cout<<"排量："<<m_Engine.m_iPower<<"L"<<endl;
	cout<<"车重："<<m_dWeight<<"吨"<<endl;
	cout<<"车轮数："<<m_iWheels<<"个"<<endl;
	cout<<"载客量："<<m_iPassengers<<"人"<<endl;
}
int main(void)
{
	Car c1(2,140,1.5,4,6);
	c1.PrintData();
	return 0;
}
class A
{
public:
	A(int a = 0)
	{	
		m_ia = a; 
		cout << m_ia << " "	<< " A" << " |";
	}
	~A(){cout << m_ia<< " " << "-A" << " |";}
	int m_ia;
};
class B
{
public:
	B(int a,int b):m_ib(b)
	{ 
		m_A.m_ia = a;
		cout << m_A.m_ia << " " << "B" << " |";
	}
	~B(){cout << m_A.m_ia << " "<< "-B" << " |";}
protected:
	A m_A;
	int m_ib;
};
class C
{
public:
	C(int c)
		:m_ic(c)
	{ 
		cout  << m_ic <<  " C" << " |";
	}
	~C(){cout << m_ic << " -C" << " |";}
private:
	int m_ic;
};
class D:public B,C
{
public:
	D(int a,int b,int c,int d)
		:C(c),B(a,b),m_id(d)
	{
		cout << m_A.m_ia << " D" << " |";
	}
	~D(){cout << m_A.m_ia << " -D" << " |";}
private:
	int m_id;
};
int main(void)
{

	B *pb = new B(10,20);
	cout << "\n";
	D objd(11,22,33,44);
	*pb  = objd;
	cout<< "\n";
	delete pb;
	cout<< "\n";
	return 0;


}*/
/*class t0
{
	static string a1=".###.";
	static string a2="#...#";
	static string a3="#...#";
	static string a4=".....";
	static string a5="#...#";
	static string a6="#...#";
	static string a7=".###.";
	
}
class t1
{
	static string a1=".....";
	static string a2="....#";
	static string a3="....#";
	static string a4=".....";
	static string a5="....#";
	static string a6="....#";
	static string a7=".....";
	
};
class t2
{
	string a1=".###.";
	string a2="....#";
	string a3="....#";
	string a4=".###.";
	string a5="#....";
	string a6="#....";
	string a7=".###.";
	
};

class t3
{
	string a1=".###.";
	string a2="";
	string a3="....#";
	string a4=".###.";
	string a5="....#";
	string a6="....#";
	string a7=".###.";
	
};
class t4
{
	string a1=".....";
	string a2="#...#";
	string a3="#...#";
	string a4=".###.";
	string a5="....#";
	string a6="....#";
	string a7=".....";
	
};
class t5
{
	string a1=".###.";
	string a2="#....";
	string a3="#....";
	string a4=".###.";
	string a5="....#";
	string a6="....#";
	string a7=".###.";
	
};
class t6
{
	string a1=".###.";
	string a2="#....";
	string a3="#....";
	string a4=".###.";
	string a5="#...#";
	string a6="#...#";
	string a7=".###.";
	
};
class t8
{
	string a1=".###.";
	string a2="#...#";
	string a3="#...#";
	string a4=".###.";
	string a5="#...#";
	string a6="#...#";
	string a7=".###.";
	
};
class t7
{
	string a1=".###.";
	string a2="....#";
	string a3="....#";
	string a4="....#";
	string a5="....#";
	string a6="....#";
	string a7=".....";
	
};
class t9
{
	string a1=".###.";
	string a2="#...#";
	string a3="#...#";
	string a4=".###.";
	string a5="....#";
	string a6="....#";
	string a7=".###.";
	
};
class t10
{
	string a1="";
	string a2="";
	string a3="";
	string a4="";
	string a5="";
	string a6="";
	string a7="";
	
};
class t11
{
	string a1=".....";
	string a2="..#..";
	string a3="..#..";
	string a4=".###.";
	string a5="..#..";
	string a6="..#..";
	string a7=".....";
	
};
class t12
{
	string a1=".....";
	string a2=".....";
	string a3=".....";
	string a4=".###.";
	string a5=".....";
	string a6=".....";
	string a7=".....";
	
};
class t13
{
	string a1=".....";
	string a2=".....";
	string a3=".#.#.";
	string a4="..#..";
	string a5=".#.#.";
	string a6=".....";
	string a7=".....";
	
};*/
/*class A
{
public:
	string D[7];
	
	
};*/
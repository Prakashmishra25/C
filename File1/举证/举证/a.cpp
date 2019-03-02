#include<iostream>
using namespace std;
class MyMatrix
{
public:
	MyMatrix(const int ar = 0,const int ac = 0);
	~MyMatrix();
	MyMatrix(const MyMatrix& Rmat);
	int row();
	int col();
	int& at(const int i,const int j);
	void display();
	MyMatrix operator+(const MyMatrix& R)const;
	MyMatrix operator-(const MyMatrix& R)const;
	MyMatrix operator*(MyMatrix& R);
	MyMatrix operator=(const MyMatrix& R);
private:
	int rows;
	int cols;
	int **MAT;

};
MyMatrix::MyMatrix(const int ar,const int ac):rows(ar),cols(ac)
{
	MAT=new int*[rows];
	for(int i=0;i<rows;i++)
	{
		MAT[i]=new int[cols];
		for(int j=0;j<cols;j++)
		{
			MAT[i][j]=0;
		}
	}

}
MyMatrix::~MyMatrix()
{
	for(int i=0;i<rows;i++)
	{
		delete []MAT[i];
	}
	delete []MAT;
}
void MyMatrix::display()
{
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			cout<<MAT[i][j]<<"\t";
		}
		cout<<endl;
	}
}
MyMatrix::MyMatrix(const MyMatrix& Rmat)
{
	rows=Rmat.rows;
	cols=Rmat.cols;
	MAT=new int*[rows];
	for(int i=0;i<rows;i++)
	{
		MAT[i]=new int[cols];
		for(int j=0;j<cols;j++)
		{
			MAT[i][j]=Rmat.MAT[i][j];
		}
	}


}

MyMatrix MyMatrix::operator+(const MyMatrix& R)const
{
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			MAT[i][j]+=R.MAT[i][j];
		}
	}
	return (*this);


}

int& MyMatrix::at(const int i,const int j)
{
	return MAT[i][j];
}
int MyMatrix::row()
{
	return rows;
}
int MyMatrix::col()
{
	return cols;
}

MyMatrix MyMatrix::operator=(const MyMatrix& R)
{
	
	rows=R.rows;
	cols=R.cols;
	
	for(int i=0;i<rows;i++)
	{
		
		
		for(int j=0;j<cols;j++)
		{
			MAT[i][j]=R.MAT[i][j];
		}
	}
	return *this;



}
MyMatrix MyMatrix::operator*(MyMatrix& R)
{
	MyMatrix ret(this->rows,R.cols);
	for(int i=0;i<this->rows;i++)
	{
		for(int j=0;j<R.cols;j++)
		{
			for(int k=0;k<this->cols;k++)
			{
				ret.MAT[i][j]+=(this->MAT[i][k])*(R.MAT[k][j]);
			}
		}
	}
	return ret;
}



int main(void)
{
	MyMatrix mat1(2,2),mat2(2,2);
	int ele = 1;
	for (int i = 0; i < mat1.row(); i++)
	{
		for (int j = 0; j < mat1.col(); j++)
		{
			mat1.at(i,j) = ele;
			ele++;
		}
	}
	mat2 = mat1;
	mat2.display();
	MyMatrix mat3 = mat1 + mat2;
	mat3.display();
	mat1=mat2 * mat3;
	mat1.display();

	


	return 0;
}
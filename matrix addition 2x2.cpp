#include <iostream>
using namespace std;

void matrix_addition(int a,int b);
void matrix_subtraction(int a,int b);
void matrix_multiplication(int a,int b,int c,int d);



int main()
{
	
	int row1;
	int column1;
	int row2;
	int column2;
	char input;
	start:
	cout << "Choose your matrix operation \n";
cout << "For multiplication press M : \n";
cout << "For addition press A : \n";
cout << "For Subtraction press S : ";
Inp:
cin >> input;
if (input == 'm' || input == 'M')
{
	cout << "Enter the number of rows of first matrix : ";
	cin >> row1;
	cout << "Enter the number of columns of first matrix: ";
	cin >> column1;
	 cout << "Enter the number of rows of second matrix : ";
	cin >> row2;
	cout << "Enter the number of columns of second matrix: ";
	cin >> column2;
	matrix_multiplication(row1,column1,row2,column2);
}
else if (input == 'a' || input == 'A')
{
	cout << "Enter the number of rows: ";
	cin >> row1;
	cout << "Enter the number of columns: ";
	cin >> column1;
	matrix_addition(row1,column1);
}
else if (input == 's' || input == 'S')
{
	cout << "Enter the number of rows: ";
	cin >> row1;
	cout << "Enter the number of columns: ";
	cin >> column1;
	matrix_subtraction(row1,column1);;
}
else
{
	cout << "Please enter correct alphabet \n";
	goto Inp;
	
}
goto start;
		 return 0;
}

void matrix_addition(int a,int b)
{
	int matrix1[100][100];
	int matrix2[100][100];
	cout << "Matrix A input \n";
	for (int x=0;x<a;x++)
	{
		for (int y=0;y<b;y++)
		{
			cout << "Enter " << x+1 << y+1 << " element: ";
			cin >> matrix1[x][y];
		}
	}
	cout << "Matrix B input \n";
	for (int x=0;x<a;x++)
	{
		for (int y=0;y<b;y++)
		{
			cout << "Enter " << x+1 << y+1 << " element: ";
			cin >> matrix2[x][y];
		}
	}
	cout << "A+B : \n";
	for (int x=0;x<a;x++)
	{
		for (int y=0;y<b;y++)
		{
			cout << matrix1[x][y]+matrix2[x][y] << "\t";
			
		}
		cout << "\n";
	}
}

void matrix_subtraction(int a,int b)
{
	int matrix1[100][100];
	int matrix2[100][100];
	cout << "Matrix A input \n";
	for (int x=0;x<a;x++)
	{
		for (int y=0;y<b;y++)
		{
			cout << "Enter " << x+1 << y+1 << " element: ";
			cin >> matrix1[x][y];
		}
	}
	cout << "Matrix B input \n";
	for (int x=0;x<a;x++)
	{
		for (int y=0;y<b;y++)
		{
			cout << "Enter " << x+1 << y+1 << " element: ";
			cin >> matrix2[x][y];
		}
	}
	cout << "A-B : \n";
	for (int x=0;x<a;x++)
	{
		for (int y=0;y<b;y++)
		{
			cout << matrix1[x][y]-matrix2[x][y] << "\t";
			
		}
		cout << "\n";
	}
}

void matrix_multiplication(int a,int b, int c, int d)
{
		if (b==c)
	{
	int matrix1[100][100];
	int matrix2[100][100];
	int matrix3[100][100];
	cout << "Matrix A input \n";
	for (int x=0;x<a;x++)
	{
		for (int y=0;y<b;y++)
		{
			cout << "Enter " << x+1 << y+1 << " element: ";
			cin >> matrix1[x][y];
		}
	}
	cout << "Matrix B input \n";
	for (int x=0;x<c;x++)
	{
		for (int y=0;y<d;y++)
		{
			cout << "Enter " << x+1 << y+1 << " element: ";
			cin >> matrix2[x][y];
		}
	}
	

	
	cout << "A*B : \n";
	for(int x=0;x<a;x++)
	{
		for(int y=0;y<d;y++)
		{
			for(int z=0;z<b;z++)
			{
				matrix3[x][y]=matrix3[x][y]+(matrix1[x][z]*matrix2[z][y]);
			}
		}
	}
	for (int x=0;x<a;x++)
	{
		for (int y=0;y<d;y++)
		{
			cout << matrix3[x][y] << "\t" ;
			
		}
		cout<< endl;
	} 
	}
	else
	cout << "Matrices cannot multiply" << endl;
	
}


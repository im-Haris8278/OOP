//Get Values for Matrices
//Add Two Matrices
//Subtract Two Matrices
//Multiply Two Matrices
//Add a Scalar to a Matrix
//Subtract a Scalar from a Matrix
//Multiply a Scalar with a Matrix
//Divide a Scalar with a Matrix
//Check If a Matrix is Symmetric
//Check If a Matrix is Identity
//Check If a Matrix is Null

#include<iostream>
using namespace std;

class Matrix {
	private:
		int Array[5][5];
		int Arr1[5][5];
		int Arr2[5][5];
		int Result[5][5];
		int row;
		int col;
		
	public:
		Matrix() {
			row = col = 0;
		}
		
	//Get values for Matrix 1
		
	void getValues1( int row, int col ) {
		for ( int r = 0; r < row; r++ ) {
			for ( int c = 0; c < col; c++ ) {
				cout << "\nEnter Value: ";
				cin >> Arr1[r][c];
			}
		}
	}
	
	//Get Values for Matrix 2
	
	void getValues2( int row, int col ) {
		for ( int r= 0; r < row; r++ ) {
			for ( int c = 0; c < col; c++ ) {
				cout << "\nEnter Value: ";
				cin >> Arr2[r][c];
			}
		}
	}
	
	//Addition of Two Matrix
	
	void Add( int row, int col ) {		
		for ( int r = 0; r < row; ++r ) {
			for ( int c = 0; c < col; ++c ) {
				Result[r][c] = Arr1[r][c] + Arr2[r][c];
			}
		}
		//View Addition
		for ( int r = 0; r < row; ++r ) {
			for ( int c = 0; c < col; ++c ) {
				cout << Result[r][c] << ", ";
			}
		}
		
	}
	
	//Subtraction of Two Matrix
	
	void Subtract( int row, int col ) {
		for ( int r = 0; r < row; ++r ) {
			for ( int c = 0; c < col; ++c ) {
				Result[r][c] = Arr1[r][c] - Arr2[r][c];
			}
		}
		//View Subtraction
		for ( int r = 0; r < row; ++r ) {
			for ( int c = 0; c < col; ++c ) {
				cout << Result[r][c] << ", ";
			}
		}
		
	}
	
	//Multiplication of Two Matrix
	
	void Multiply(void) {
		int row1, row2, col1, col2;
		
		cout << "\nEnter the Value of Row 1: ";
		cin >> row1;
		cout << "\nEnter the Value of Col 1: ";
		cin >> col1;
		
		for ( int r = 0; r < row1; r++ ) {
			for ( int c = 0; c < col1; c++ ) {
				cout << "\nEnter a value: ";
				cin >> Arr1[r][c];
			}
		}
		
		cout << "\nEnter the Value of Row 2: ";
		cin >> row2;
		cout << "\nEnter the Value of Col 2: ";
		cin >> col2;
		
		for ( int r = 0; r < row2; r++ ) {
			for ( int c = 0; c < col2; c++ ) {
				cout << "\nEnter a value: ";
				cin >> Arr2[r][c];
			}
		}
		
		if ( col1 == row2 ) {
			int Mul[row1][col2];
			for ( int i = 0; i < row1; i++ ) {
				for ( int j = 0; j < col2; j++ ) {
					Mul[i][j]=0;
					for ( int k = 0; k < col1; k++ ) {
						Mul[i][j]+=Arr1[i][k] * Arr2[k][j];
					}
				}
			}
			cout << "\nMultiplication is: ";
			for ( int i = 0; i < row1; i++ ) {
				for ( int j = 0; j < col2; j++ ) {
					cout << Mul[i][j] << ", ";
				}
				cout << "\n";
			}
		}
		else {
			cout << "Matrix Multiplication is Not Possible";
		}
		
	}
	
	//Add Scalar to Matrix
	
	void addScalar( int row, int col ) {
		int scalar, i, j;
		cout << "\nEnter Value of Scalar: ";
		cin >> scalar;
		cout << "\nEnter the Size of Row: ";
		cin >> i;
		cout << "\nEnter the Size of Col: ";
		cin >> j;
		for ( int r = 0; r < i; r++ ) {
			for ( int c = 0; c < j; c++ ) {
				cout << "\nEnter the Values for Matrix to Add: ";
				cin >> Array[r][c];
			}
		}
		for ( int r = 0; r < i; r++ ) {
			for ( int c = 0; c < j; c++ ) {
				Array[r][c] = Array[r][c] + scalar;
			}
		}
		for ( int r = 0; r < i; r++ ) {
			for ( int c = 0; c < j; c++ ) {
				cout << Array[r][c] << ", ";
			}
		}
	}
	
	//Subtract Scalar from Matrix
	
	void subtractScalar( int row, int col ) {
		int scalar, i, j;
		cout << "\nEnter Value of Scalar: ";
		cin >> scalar;
		cout << "\nEnter the Size of Row: ";
		cin >> i;
		cout << "\nEnter the Size of Col: ";
		cin >> j;
		for ( int r = 0; r < i; r++ ) {
			for ( int c = 0; c < j; c++ ) {
				cout << "\nEnter the Values for Matrix to Subtract: ";
				cin >> Array[r][c];
			}
		}
		for ( int r = 0; r < i; r++ ) {
			for ( int c = 0; c < j; c++ ) {
				Array[r][c] = Array[r][c] - scalar;
			}
		}
		for ( int r = 0; r < i; r++ ) {
			for ( int c = 0; c < j; c++ ) {
				cout << Array[r][c] << ", ";
			}
		}
	}
	
	//Multiply Scalar with Matrix
	
	void multiplyScalar( int row, int col ) {
		int scalar, i, j;
		cout << "\nEnter Value of Scalar: ";
		cin >> scalar;
		cout << "\nEnter the Size of Row: ";
		cin >> i;
		cout << "\nEnter the Size of Col: ";
		cin >> j;
		for ( int r = 0; r < i; r++ ) {
			for ( int c = 0; c < j; c++ ) {
				cout << "\nEnter the Values for Matrix to Multiply: ";
				cin >> Array[r][c];
			}
		}
		for ( int r = 0; r < i; r++ ) {
			for ( int c = 0; c < j; c++ ) {
				Array[r][c] = Array[r][c] * scalar;
			}
		}
		for ( int r = 0; r < i; r++ ) {
			for ( int c = 0; c < j; c++ ) {
				cout << Array[r][c] << ", ";
			}
		}
	}
	
	//Divide Scalar with Division
	
	void divideScalar( int row, int col ) {
		int scalar, i, j;
		cout << "\nEnter Value of Scalar: ";
		cin >> scalar;
		cout << "\nEnter the Size of Row: ";
		cin >> i;
		cout << "\nEnter the Size of Col: ";
		cin >> j;
		for ( int r = 0; r < i; r++ ) {
			for ( int c = 0; c < j; c++ ) {
				cout << "\nEnter the Values for Matrix to Divide: ";
				cin >> Array[r][c];
			}
		}
		for ( int r = 0; r < i; r++ ) {
			for ( int c = 0; c < j; c++ ) {
				Array[r][c] = Array[r][c] / scalar;
			}
		}
		for ( int r = 0; r < i; r++ ) {
			for ( int c = 0; c < j; c++ ) {
				cout << Array[r][c] << ", ";
			}
		}
	}
	
	//Check Symmetric
	
	void checkSymmetric( int row, int col ) {
		int counter;
		cout << "\nEnter the Number of Rows: ";
		cin >> row;
		cout << "\nEnter the Number of Cols: ";
		cin >> col;
		for ( int r = 0; r < row; r++ ) {
			for ( int c = 0; c < col; c++ ) {
				cout << "\nEnter a Value: ";
				cin >> Array[r][c];
			}
		}
		
		cout << "\nThe Elements of Matrix are: ";
		for ( int r = 0; r < row; r++ ) {
			for ( int c = 0; c < col; c++ ) {
				cout << Array[r][c];
			}
		}
		
		for ( int r = 0; r < row; r++ ) {
			for ( int c = 0; c < col; c++ ) {
				if ( Array[r][c] != Array[c][r] ) {
					counter = 1;
					break;
				}
			}
		}
		
		if ( counter == 0 ) {
			cout << "\nThe Matrix is Symmetric.";
		}
		else {
			cout << "\nThe Matrix is not Symmetric.";
		}
	}
	
	//Check Identity Matrix
	
	void checkIdentity( int row, int col ) {
		int counter;
		cout << "\nEnter the Number of Rows: ";
		cin >> row;
		cout << "\nEnter the Number of Cols: ";
		cin >> col;
		for ( int r = 0; r < row; r++ ) {
			for ( int c = 0; c < col; c++ ) {
				cout << "\nEnter a Value: ";
				cin >> Array[r][c];
			}
		}
		
		cout << "\nThe Elements of Matrix are: ";
		for ( int r = 0; r < row; r++ ) {
			for ( int c = 0; c < col; c++ ) {
				cout << Array[r][c];
			}
		}
		
		for ( int r = 0; r < row; r++ ) {
			for ( int c = 0; c < col; c++ ) {
				if ( ( Array[r][c] != 1 ) && ( Array[c][r] != 0 ) ) {
					counter = 1;
					break;
				}
			}
		}
		
		if ( counter == 0 ) {
			cout << "\nThe Matrix is Identity.";
		}
		else {
			cout << "\nThe Matrix is not Identity.";
		}
	}
	
	//Check Null Matrix
	
	void checkNull ( int row, int col ) {
		int counter;
		cout << "\nEnter the Number of Rows: ";
		cin >> row;
		cout << "\nEnter the Number of Cols: ";
		cin >> col;
		for ( int r = 0; r < row; r++ ) {
			for ( int c = 0; c < col; c++ ) {
				cout << "\nEnter a Value: ";
				cin >> Array[r][c];
			}
		}
		
		cout << "\nThe Elements of Matrix are: ";
		for ( int r = 0; r < row; r++ ) {
			for ( int c = 0; c < col; c++ ) {
				cout << Array[r][c];
			}
		}
		
		for ( int r = 0; r < row; r++ ) {
			for ( int c = 0; c < col; c++ ) {
				if ( Array[r][c] != 0 ) {
					counter = 1;
					break;
				}
			}
		}
		
		if ( counter == 0 ) {
			cout << "\nThe Matrix is Null.";
		}
		else {
			cout << "\nThe Matrix is not Null.";
		}
	}
};

int main() {
	int Num, opt = 1, row = 0, col = 0;
	Matrix M;
	
	while ( opt != 0 ) {
		cout << "\nPress 1 to Get Numbers." << endl;
		cout << "Press 2 to Add Two Matrices." << endl;
		cout << "Press 3 to Subtract Two Matrices." << endl;
		cout << "Press 4 to Multiply Two Matrices." << endl;
		cout << "Press 5 to Add a Scalar to Matrix." << endl;
		cout << "Press 6 to Subtract a Scalar to Matrix." << endl;
		cout << "Press 7 to Multiply a Scalar to Matrix." << endl;
		cout << "Press 8 to Divide a Scalar to Matrix." << endl;
		cout << "Press 9 to Check If Given Matrix is Symmetric." << endl;
		cout << "Press 10 to Check If Given Matrix is Identity." << endl;
		cout << "Press 11 to Check If Given Matrix is Null." << endl;
		cout << "Press 0 to Exit." << endl;
		cout << "\nEnter Your Choice: ";
		cin >> opt;
		
		switch( opt ) {
			case 1:
				cout << "\nEnter the Size of Row: ";
				cin >> row;
				cout << "\nEnter the Size of Col: ";
				cin >> col;
				
				if ( ! ( ( row > 0 && row < 6 ) && ( col > 0 && col < 6 ) ) ) {
					cout << "\nEntered Order is Invalid.";
				}
				
				else {
					cout << "\nEnter Values for 1st Matrix: " << endl;
					M.getValues1( row, col );
					cout << "\nEnter values for 2nd Matrix: " << endl;
					M.getValues2( row, col );
				}
				break;
				
			case 2:
				cout << "\nAddition is: ";
				M.Add( row, col );
				cout << endl;
				break;
				
			case 3:
				cout << "\nSubtraction is: ";
				M.Subtract( row, col );
				cout << endl;
				break;
				
			case 4:
				M.Multiply();
				cout << endl;
				break;
				
			case 5:
				cout << "\nResult is: ";
				M.addScalar( row, col );
				cout << endl;
				break;
				
			case 6:
				cout << "\nResult is: ";
				M.subtractScalar( row, col );
				cout << endl;
				break;
				
			case 7:
				cout << "\nResult is: ";
				M.multiplyScalar( row, col );
				cout << endl;
				break;
				
			case 8:
				cout << "\nResult is: ";
				M.divideScalar( row, col );
				cout << endl;
				break;
				
			case 9:
				M.checkSymmetric( row, col );
				cout << endl;
				break;
				
			case 10:
				M.checkIdentity( row, col );
				cout << endl;
				break;
				
			case 11:
				M.checkNull( row, col );
				cout << endl;
				break;
				
		}
		
	}
	
	return 0;
}

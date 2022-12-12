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
		int A[5][5];
		int B[5][5];
		int R[5][5];
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
				cin >> A[r][c];
			}
		}
	}
	
	//Get Values for Matrix 2
	
	void getValues2( int row, int col ) {
		for ( int r= 0; r < row; r++ ) {
			for ( int c = 0; c < col; c++ ) {
				cout << "\nEnter Value: ";
				cin >> B[r][c];
			}
		}
	}
	
	//Addition of Two Matrix
	
	void Add( int row, int col ) {		
		for ( int r = 0; r < row; ++r ) {
			for ( int c = 0; c < col; ++c ) {
				R[r][c] = A[r][c] + B[r][c];
			}
		}
		//View Addition
		for ( int r = 0; r < row; ++r ) {
			for ( int c = 0; c < col; ++c ) {
				cout << R[r][c] << ", ";
			}
		}
		
	}
	
	//Subtraction of Two Matrix
	
	void Subtract( int row, int col ) {
		for ( int r = 0; r < row; ++r ) {
			for ( int c = 0; c < col; ++c ) {
				R[r][c] = A[r][c] - B[r][c];
			}
		}
		//View Subtraction
		for ( int r = 0; r < row; ++r ) {
			for ( int c = 0; c < col; ++c ) {
				cout << R[r][c] << ", ";
			}
		}
		
	}
	
	//Multiplication of Two Matrix
	
	void Multiply( int row1, int col1, int row2, int col2 ) {
		for ( int r = 0; r < row1; r++ ) {
			for ( int c = 0; c < col1; c++ ) {
				cout << "\nEnter a value for 1st Matrix: ";
				cin >> A[r][c];
			}
		}
		cout << "\nSuccess." << endl;
		
		for ( int r = 0; r < row2; r++ ) {
			for ( int c = 0; c < col2; c++ ) {
				cout << "\nEnter a value for 2nd Matrix: ";
				cin >> B[r][c];
			}
		}
		cout << "\nSuccess." << endl;
		
		if ( col1 == row2 ) {
			for ( int i = 0; i < row1; i++ ) {
				for ( int j = 0; j < col2; j++ ) {
					R[i][j]=0;
					for ( int k = 0; k < col1; k++ ) {
						R[i][j]+=A[i][k] * B[k][j];
					}
				}
			}
			cout << "\nMultiplication is: " << endl << endl;
			for ( int i = 0; i < row1; i++ ) {
				for ( int j = 0; j < col2; j++ ) {
					cout << R[i][j] << " ";
				}
				cout << "\n";
			}
		}
		else {
			cout << "Matrix Multiplication is Not Possible";
		}
		
	}
	
	//View Matrix A
	
	void viewA( int row, int col ) {
		for ( int r = 0; r < row; r++ ) {
			for ( int c = 0; c < col; c++ ) {
				cout << A[r][c] << " ";
			}
			cout << "\n";
		}
	}
	
	//Add Scalar to Matrix
	
	void addScalar( int row, int col ) {
		int scalar;
		cout << "\nEnter Value of Scalar: ";
		cin >> scalar;
		for ( int r = 0; r < row; r++ ) {
			for ( int c = 0; c < col; c++ ) {
				cout << "\nEnter the Values for Matrix to Add: ";
				cin >> A[r][c];
			}
		}
		for ( int r = 0; r < row; r++ ) {
			for ( int c = 0; c < col; c++ ) {
				A[r][c] = A[r][c] + scalar;
			}
		}
	}
	
	//Subtract Scalar from Matrix
	
	void subtractScalar( int row, int col ) {
		int scalar;
		cout << "\nEnter Value of Scalar: ";
		cin >> scalar;
		for ( int r = 0; r < row; r++ ) {
			for ( int c = 0; c < col; c++ ) {
				cout << "\nEnter the Values for Matrix to Subtract: ";
				cin >> A[r][c];
			}
		}
		for ( int r = 0; r < row; r++ ) {
			for ( int c = 0; c < col; c++ ) {
				A[r][c] = A[r][c] - scalar;
			}
		}
	}
	
	//Multiply Scalar with Matrix
	
	void multiplyScalar( int row, int col ) {
		int scalar;
		cout << "\nEnter Value of Scalar: ";
		cin >> scalar;
		for ( int r = 0; r < row; r++ ) {
			for ( int c = 0; c < col; c++ ) {
				cout << "\nEnter the Values for Matrix to Multiply: ";
				cin >> A[r][c];
			}
		}
		for ( int r = 0; r < row; r++ ) {
			for ( int c = 0; c < col; c++ ) {
				A[r][c] = A[r][c] * scalar;
			}
		}
	}
	
	//Divide Scalar with Division
	
	void divideScalar( int row, int col ) {
		int scalar;
		cout << "\nEnter Value of Scalar: ";
		cin >> scalar;
		for ( int r = 0; r < row; r++ ) {
			for ( int c = 0; c < col; c++ ) {
				cout << "\nEnter the Values for Matrix to Divide: ";
				cin >> A[r][c];
			}
		}
		for ( int r = 0; r < row; r++ ) {
			for ( int c = 0; c < col; c++ ) {
				A[r][c] = A[r][c] / scalar;
			}
		}
	}
	
	//Check Symmetric
	
	void checkSymmetric( int row, int col ) {
		int counter;
		for ( int r = 0; r < row; r++ ) {
			for ( int c = 0; c < col; c++ ) {
				cout << "\nEnter a Value: ";
				cin >> A[r][c];
			}
		}
		
		cout << "\nThe Elements of Matrix are: " << endl << endl;
		for ( int r = 0; r < row; r++ ) {
			for ( int c = 0; c < col; c++ ) {
				cout << A[r][c] << " ";
			}
			cout << "\n";
		}
		
		for ( int r = 0; r < row; r++ ) {
			for ( int c = 0; c < col; c++ ) {
				if ( A[r][c] != A[c][r] ) {
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
		for ( int r = 0; r < row; r++ ) {
			for ( int c = 0; c < col; c++ ) {
				cout << "\nEnter a Value: ";
				cin >> A[r][c];
			}
		}
		cout << "\nThe Elements of Matrix are: " << endl << endl;
		for ( int r = 0; r < row; r++ ) {
			for ( int c = 0; c < col; c++ ) {
				cout << A[r][c] << " ";
			}
			cout << "\n";
		}
		
		for ( int r = 0; r < row; r++ ) {
			for ( int c = 0; c < col; c++ ) {
				if ( ( A[r][c] != 1 ) && ( A[c][r] != 0 ) ) {
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
		for ( int r = 0; r < row; r++ ) {
			for ( int c = 0; c < col; c++ ) {
				cout << "\nEnter a Value: ";
				cin >> A[r][c];
			}
		}
		cout << "\nThe Elements of Matrix are: " << endl << endl;
		for ( int r = 0; r < row; r++ ) {
			for ( int c = 0; c < col; c++ ) {
				cout << A[r][c] << " ";
			}
			cout << "\n";
		}
		
		for ( int r = 0; r < row; r++ ) {
			for ( int c = 0; c < col; c++ ) {
				if ( A[r][c] != 0 ) {
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
	int opt = 1, row = 0, col = 0, row1, row2, col1, col2, scalar;
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
				if( ! ( ( row > 0 && row < 6 ) && ( col > 0 && col < 6 ) ) ) {
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
				cout << "\nEnter the Value of Row 1: ";
				cin >> row1;
				cout << "\nEnter the Value of Col 1: ";
				cin >> col1;
				cout << "\nEnter the Value of Row 2: ";
				cin >> row2;
				cout << "\nEnter the Value of Col 2: ";
				cin >> col2;
				M.Multiply( row1, col1, row2, col2 );
				cout << endl;
				break;
				
			case 5:
				cout << "\nEnter the Size of Row: ";
				cin >> row;
				cout << "\nEnter the Size of Col: ";
				cin >> col;
				M.addScalar( row, col );
				cout << "\nResult is: " << endl << endl;
				M.viewA( row, col );
				cout << endl;
				break;
				
			case 6:
				cout << "\nEnter the Size of Row: ";
				cin >> row;
				cout << "\nEnter the Size of Col: ";
				cin >> col;
				M.subtractScalar( row, col );
				cout << "\nResult is: " << endl << endl;
				M.viewA( row, col );
				cout << endl;
				break;
				
			case 7:
				cout << "\nEnter the Size of Row: ";
				cin >> row;
				cout << "\nEnter the Size of Col: ";
				cin >> col;
				M.multiplyScalar( row, col );
				cout << "\nResult is: " << endl << endl;
				M.viewA( row, col );
				cout << endl;
				break;
				
			case 8:
				cout << "\nEnter the Size of Row: ";
				cin >> row;
				cout << "\nEnter the Size of Col: ";
				cin >> col;
				M.divideScalar( row, col );
				cout << "\nResult is: " << endl << endl;
				M.viewA( row, col );
				cout << endl;
				break;
				
			case 9:
				cout << "\nEnter the Number of Rows: ";
				cin >> row;
				cout << "\nEnter the Number of Cols: ";
				cin >> col;
				M.checkSymmetric( row, col );
				cout << endl;
				break;
				
			case 10:
				cout << "\nEnter the Number of Rows: ";
				cin >> row;
				cout << "\nEnter the Number of Cols: ";
				cin >> col;
				M.checkIdentity( row, col );
				cout << endl;
				break;
				
			case 11:
				cout << "\nEnter the Number of Rows: ";
				cin >> row;
				cout << "\nEnter the Number of Cols: ";
				cin >> col;
				M.checkNull( row, col );
				cout << endl;
				break;
		}
	}
	
	return 0;
}


// ADDITION WITHOUT 3rd MATRIX

#include<iostream>
using namespace std ;
int main (){
	
	int rows, col ;
	
	cout << "Enter number of rows : " ;
	cin >> rows ;
	
	cout << "Enter no of colomns : " ;
	cin >> col ;

    int arr1[rows][col] ;
		
	cout << "For 1st matrix \n" ;

	for(int i = 0; i < rows; i++ ){
			
		for( int j = 0; j < col; j++ ){
			cin >> arr1[i][j] ;
		}
		
	}
		
	for(int i = 0; i < rows; i++ ){

		for( int j = 0; j < col; j++ ){
			cout << arr1[i][j] << " " ;
		}

		cout << endl ;
		
	}

    cout << "For 2nd matrix \n" ;

	int arr2[rows][col] ;
	
	for(int i = 0; i < rows; i++ ){
			
		for( int j = 0; j < col; j++ ){
			cin >> arr2[i][j] ;
		}
		
	}

	for(int i = 0; i < rows; i++ ){
			
		for( int j = 0; j < col; j++ ){
			cout << arr2[i][j] << " " ;
		}
			
		cout << endl ;
		
	}	
		
	for( int i = 0; i < rows; i++ ){
			
		for( int j = 0; j < col; j++ ){
			arr1[i][j] = arr1[i][j] + arr2[i][j] ;
		}
			
	}
		
	cout << endl ;
		
	for(int i = 0; i < rows; i++ ){
			
		for( int j = 0; j < col; j++ ){
			cout << arr1[i][j] << " " ;
		}
			
		cout << endl ;
			
	}

    return 0 ;

}
#include<iostream>
using namespace std ;
int main (){
	
	int rows, col ;
	
	cout << "Enter number of rows : " ;
	cin >> rows ;
	
	cout << "Enter no of colomns : " ;
	cin >> col ;

    int arr[rows][col] ;
		
	for(int i = 0; i < rows; i++ ){
			
		for( int j = 0; j < col; j++ ){
			cin >> arr[i][j] ;
		}
		
	}
		
	for(int i = 0; i < rows; i++ ){

		for( int j = 0; j < col; j++ ){
			cout << arr[i][j] << " " ;
		}

	cout << endl ;
	
	}

    int sum = 0 ;

    for( int i = 0; i < rows; i++ ){
			
		for( int j = 0; j < col; j++ ){
				sum += arr[i][j] ;
		}
			
	}

    cout << "The sum is : " << sum ;

    return 0 ;

}
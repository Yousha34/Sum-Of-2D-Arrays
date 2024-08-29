#include<iostream>
using namespace std ;
int main(){

    int rows, col ;

    cout << "Enter number of rows : " ;
	cin >> rows ;
	
	cout << "Enter no of colomns : " ;
	cin >> col ;
    
    cout << endl ;

    int arr[rows][col] ;
    
    for(int i = 0; i < rows; i++ ){
			
		for( int j = 0; j < col; j++ ){
			cin >>arr[i][j] ;
		}
		
	}

    for(int i = 0; i < rows; i++ ){
			
		for( int j = 0; j < col; j++ ){
			cout << arr[i][j] << " " ;
		}

        cout << endl ;
		
	}

    int right_sum = 0 ;
    int left_sum = 0 ;

    for(int i = 0; i < rows; i++ ){
			
		for( int j = 0; j < col; j++ ){
			
            if( i == j ){
                right_sum += arr[i][j] ;
            }

            int a = i+1 ;
            int b = j+1 ;

            if( a+b == col+1 ){
                left_sum += arr[i][j] ;
            }

		}
		
	}

    cout << "Right diagonal is : " << right_sum ;
    cout << endl << "Left diagonal is : " << left_sum ;

    int diagonal = right_sum - left_sum ;

    cout << "\n\nThe difference is : " << diagonal ;

}
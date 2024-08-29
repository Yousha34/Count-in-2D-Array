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


    cout << endl ;
		
	for(int i = 0; i < rows; i++ ){

		for( int j = 0; j < col; j++ ){
			cout << arr[i][j] << " " ;
		}

	cout << endl ;
	
    }

    int max_count = 0 ;

    for( int i = 0; i < rows; i++ ){

        int count = 0 ;

        for( int j = 0; j < col; j++ ){
            
            if( arr[i][j] == 1 || arr[i][j] == 0 ){
                count++ ;
            }

        }

        if( max_count < count ){
            max_count = count ;
        }

        cout << endl ;

    }

    cout << max_count ;

    return 0 ;

}
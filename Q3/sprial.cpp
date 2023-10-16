#include <iostream>
using namespace std;
using std::cin;
using std::cout;

int alphabet_count = 0;

void fill_left_to_right(char** spiral, int row, int column, int alphabet_count){
    for(int i = 0; i < column; i++){
        spiral[row][i] = 'A' + (alphabet_count%26);
        alphabet_count++;
    }

}


void fill_top_to_bottom(char** spiral, int row, int column, int alphabet_count){
    for (int i = 0; i < row; i++){
        spiral[i][column] = 'A' + (alphabet_count%26);
        alphabet_count++;
    }
    

}

void fill_right_to_left(char** spiral, int row, int column, int alphabet_count){
    for(int i = row-1; i < 0; i--)
    {
        spiral[row][i] = 'A' + (alphabet_count%26);
        alphabet_count++;
    }
    
    

}

void fill_bottom_to_top(char** spiral, int row, int column, int alphabet_count){
    for(int i = column-1; i < 0; i--){
        spiral[i][column] = 'A' + (alphabet_count%26);
        alphabet_count++;
    }

}

int main(void){
    int rowCount;
    cin >> rowCount;

    //initialize the spiral
    char** spiral = new char*[rowCount];
    for(int i = 0; i < rowCount; i++){
        spiral[i] = new char[rowCount];
    }

    


    //print the spiral
    for(int i = 0; i < rowCount; i++){
        fill_left_to_right(spiral, i, rowCount, alphabet_count);
        fill_top_to_bottom(spiral, rowCount, rowCount, alphabet_count);
        fill_right_to_left(spiral, rowCount, rowCount, alphabet_count);
        fill_bottom_to_top(spiral, rowCount, rowCount, alphabet_count);

       
    }

    }



}
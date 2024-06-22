#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

unordered_map<int,bool> rowCheck;
unordered_map<int,bool> upperLeftDiagonalCheck;
unordered_map<int,bool> bottomLeftDiagonalCheck;


void printSolution(vector<vector<char>> &board, int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout<< board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << endl; 
}

bool isSafe(int row, int col, vector<vector<char>> &board, int n) {
    // check karna chahte h, k kya main 
    // current cell[row,col] pr queen rkh 
    // skta hu ya nahi

    if(rowCheck[row] == true )
    return false;

    if(upperLeftDiagonalCheck[n-1+col-row] == true)
    return false;

    if(bottomLeftDiagonalCheck[row+col] == true)
    return false;

    return true;



//     int i = row;
//     int j = col;

//     // check row
//     while(j >= 0) {
//         if(board[i][j] == 'Q') {
//             return false;
//         }
//         j--;
//     }

//     // check upper left diagonal
//     i = row;
//     j = col;
//     while(i>=0 && j>=0) {
//         if(board[i][j] == 'Q') {
//             return false;
//         }
//         i--;
//         j--;
//     }

//     // check bottom left diagonal
//     i = row;
//     j = col;
//     while( i<n && j >=0) {
//         if(board[i][j] == 'Q') {
//             return false;
//         }
//         i++;
//         j--;
//     }

//     // kahin pr bhi queen nahi mili
//     // iska matlab ye position safe h
//     // iska matlab return kardo true
//     return true; 
}

void solve(vector<vector<char>> &board, int col, int n) {
    // base case
    if(col >= n) {
        printSolution(board, n);
        return ;
    }

    // 1 case solve karna h, baaki recursion sambhal lega

    for(int row=0; row<n; row++) {
        if(isSafe(row, col, board, n)) {
            // rakh do
            board[row][col] = 'Q';
            rowCheck[row] = true;
            upperLeftDiagonalCheck[n-1+col-row] = true;
            bottomLeftDiagonalCheck[row+col] = true;


            // recursion solution laega
            solve(board, col+1, n);
            // backtracking
            board[row][col] = '-';
            rowCheck[row] = false;
            upperLeftDiagonalCheck[n-1+col-row] = false;
            bottomLeftDiagonalCheck[row+col] = false;
             
        }
    }

}

int main() {
    int n = 9;
    vector<vector<char>> board(n, vector<char>(n,'-'));
    int col = 0;
    // 0-> empty cell
    // 1-> queen at the cell
    solve(board, col, n);
 
    return 0;
}
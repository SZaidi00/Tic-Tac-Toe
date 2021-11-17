#include <iostream>
using namespace std;

int main() {
    //// DISPLAY

int board[3][3] ={
        {0,0,0,},
        {0,0,0}
};



 //user entry
    int counter;
    while (counter < 9) {
        int col;
        int row;
        int user1;
        int user2;

        cout << "User 1 " << endl;
        cout << "Enter column 1-3" << endl;
        cin >> col;
        cout << "Enter row 1-3" << endl;
        cin >> row;
        cout << "User 1 enter: " << endl;

        cin >> user1;
        if (user1 != 1) {
            cout << "Your number is 1, try again" << endl;

            while (user1 != 1) {
                cout << "User 1 " << endl;
                cout << "Enter column 1-3" << endl;
                cin >> col;
                cout << "Enter row 1-3" << endl;
                cin >> row;
                cout << "User 1 enter: " << endl;
                cin >> user1;
            }
        }

        board[col][row] = user1;


        cout << "User 2  " << endl;
        cout << "Enter column 1-3" << endl;
        cin >> col;
        cout << "Enter row 1-3" << endl;
        cin >> row;

        cout << "User 2 enter: " << endl;
        cin >> user2;
        if (user2 != 2) {
            cout << "Your number is 2, try again" << endl;

             while (user1 != 2) {
            cout << "User 2 " << endl;
            cout << "Enter column 1-3" << endl;
            cin >> col;
            cout << "Enter row 1-3" << endl;
            cin >> row;
            cout << "User 2 enter: " << endl;
            cin >> user2;
             }
        }

        board[col][row] = user2;


        counter = counter + 1;
        // need to update display after every input

        //// CHECK FOR WINNER


        for (int i = 0; i < 1; i++) {        //row
            for (int j = 0; j < 1; j++) {    //col

                //// HORIZONTAL ROW
                while (board[i][j] != 0) {
//row 1
                    if (board[i][j] == board[i + 1][j] && board[i + 1][j] == board[i + 2][j]) {
                        cout << "Winner!" << endl;
                        break;
                    }
// row 2
                    else if (board[i][j + 1] == board[i + 1][j + 1] && board[i + 1][j + 1] == board[i + 2][j + 1]) {
                        cout << "Winner!" << endl;
                        break;
                    }
// row 3
                    else if (board[i][j + 2] == board[i + 1][j + 2] && board[i + 1][j + 2] == board[i + 2][j + 2]) {
                        cout << "Winner!" << endl;
                        break;
                    }

                        //// VERTICAL ROW
// col 1
                    else if (board[i][j] == board[i][j + 1] && board[i][j + 1] == board[i][j + 2]) {
                        cout << "Winner!" << endl;
                        break;
                    }
// col 2
                    else if (board[i + 1][j] == board[i + 1][j + 1] && board[i + 1][j + 1] == board[i + 1][j + 2]) {
                        cout << "Winner!" << endl;
                        break;
                    }
// col 3
                    else if (board[i][j] == board[i][j + 1] && board[i][j + 1] == board[i][j + 2]) {
                        cout << "Winner!" << endl;
                        break;
                    }

                        //// DIAGONAL ROWS
//left to right
                    else if (board[i][j] == board[i + 1][j + 1] && board[i + 1][j + 1] == board[i + 2][j + 2]) {
                        cout << "Winner!" << endl;
                        break;
                    }
//right to left
                    else if (board[i + 2][j + 2] == board[i][j + 1] && board[i][j + 1] == board[i][j + 2]) {
                        cout << "Winner!" << endl;
                        break;
                    }
                }
            }
        }

        //// PRINT BOARD
        for (int u = 0; u < 3 ; u++){
            for (int m = 0; m < 3 ; m++){

                cout << board[u][m];
                if (m == 2){
                    cout << endl;
                }
            }
        }
        cout << endl;

    }



    }


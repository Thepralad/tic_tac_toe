#include<iostream>
using namespace std;

void displayBoard(char graphics[3][3]){
    
    for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << graphics[i][j] << ' ';
            }
            cout << '\n';
        }
    
}

int main(){
    cout << "== TIC TAC TOE ==\n";
    
    char graphics[3][3] = {
        {'!', '!', '!'},
        {'!', '!', '!'},
        {'!', '!', '!'}
    };
    while(true){
        
        // To display Graphics
        displayBoard(graphics);
        
        // Player Inputs
        int input_1{};
        int input_2{};
        
        cout << "Player 1 move: ";
        cin >> input_1;
        
        switch (input_1) {
            case 1:
                graphics[0][0] = 'x';
                break;
            case 2:
                graphics[0][1] = 'x';
                break;
            case 3:
                graphics[0][2] = 'x';
                break;
            case 4:
                graphics[1][0] = 'x';
                break;
            case 5:
                graphics[1][1] = 'x';
                break;
            case 6:
                graphics[1][2] = 'x';
                break;
            case 7:
                graphics[2][0] = 'x';
                break;
            case 8:
                graphics[2][1] = 'x';
                break;
            case 9:
                graphics[2][2] = 'x';
                
            default:
                cout << "Invalid Input\n";
                break;
        }
        
        //To display the graphics
        displayBoard(graphics);
        
        //To check if player 1 wins or not
        if(graphics[0][0] == 'x'&& graphics[0][1] == 'x'&& graphics[0][2] == 'x'){
            cout <<"Player 1 WINS!\n";
            return 0;
        }
        if(graphics[1][0] == 'x'&& graphics[1][1] == 'x'&& graphics[1][2] == 'x'){
            cout <<"Player 1 WINS!\n";
            return 0;
        }
        if(graphics[2][0] == 'x'&& graphics[2][1] == 'x'&& graphics[2][2] == 'x'){
            cout <<"Player 1 WINS!\n";
            return 0;
        }
        if(graphics[0][0] == 'x'&& graphics[1][0] == 'x'&& graphics[2][0] == 'x'){
            cout <<"Player 1 WINS!\n";
            return 0;
        }
        if(graphics[0][1] == 'x'&& graphics[1][1] == 'x'&& graphics[2][1] == 'x'){
            cout <<"Player 1 WINS!\n";
            return 0;
        }
        if(graphics[0][2] == 'x'&& graphics[1][2] == 'x'&& graphics[2][2] == 'x'){
            cout <<"Player 1 WINS!\n";
            return 0;
        }
        if(graphics[0][0] == 'x'&& graphics[1][1] == 'x'&& graphics[2][2] == 'x'){
            cout <<"Player 1 WINS!\n";
            return 0;
        }
        if(graphics[0][2] == 'x'&& graphics[1][1] == 'x'&& graphics[2][0] == 'x'){
            cout <<"Player 1 WINS!\n";
            return 0;
        }
        
        cout << "Player 2 move: ";
        cin >> input_2;
        switch (input_2) {
            case 1:
                graphics[0][0] = 'o';
                break;
            case 2:
                graphics[0][1] = 'o';
                break;
            case 3:
                graphics[0][2] = 'o';
                break;
            case 4:
                graphics[1][0] = 'o';
                break;
            case 5:
                graphics[1][1] = 'o';
                break;
            case 6:
                graphics[1][2] = 'o';
                break;
            case 7:
                graphics[2][0] = 'o';
                break;
            case 8:
                graphics[2][1] = 'o';
                break;
            case 9:
                graphics[2][2] = 'o';
                
                
            default:
                cout << "Invalid Input\n";
                break;
        }
        
        
        //To check if player 1 wins or not
        if(graphics[0][0] == 'o'&& graphics[0][1] == 'o'&& graphics[0][2] == 'o'){
            cout <<"Player 2 WINS!\n";
            return 0;
        }
        if(graphics[1][0] == 'o'&& graphics[1][1] == 'o'&& graphics[1][2] == 'o'){
            cout <<"Player 2 WINS!\n";
            return 0;
        }
        if(graphics[2][0] == 'o'&& graphics[2][1] == 'o'&& graphics[2][2] == 'o'){
            cout <<"Player 2 WINS!\n";
            return 0;
        }
        if(graphics[0][0] == 'o'&& graphics[1][0] == 'o'&& graphics[2][0] == 'o'){
            cout <<"Player 2 WINS!\n";
            return 0;
        }
        if(graphics[0][1] == 'o'&& graphics[1][1] == 'o'&& graphics[2][1] == 'o'){
            cout <<"Player 2 WINS!\n";
            return 0;
        }
        if(graphics[0][2] == 'o'&& graphics[1][2] == 'o'&& graphics[2][2] == 'o'){
            cout <<"Player 2 WINS!\n";
            return 0;
        }
        if(graphics[0][0] == 'o'&& graphics[1][1] == 'o'&& graphics[2][2] == 'o'){
            cout <<"Player 2 WINS!\n";
            return 0;
        }
        if(graphics[0][2] == 'o'&& graphics[1][1] == 'o'&& graphics[2][0] == 'o'){
            cout <<"Player 2 WINS!\n";
            return 0;
        }
        
            
        
       
        
    }
    
    return 0;
}

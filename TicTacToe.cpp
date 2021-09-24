#include <iostream>
#include <vector>
#include <string>

// Creates a 3 by 3 int vector and returns it
std::vector<std::vector<int>> CreateBoard() {
    std::vector<std::vector<int>> return_vec;
    for(int i = 0; i < 3; i++) {
        // Create Empty Vector
        std::vector<int> temp{0, 0, 0};

        // Push empty vector
        return_vec.push_back(temp);
    }
    return return_vec;
}

// Display the board
void DisplayBoard(std::vector<std::vector<int>> const &board) {
    for(unsigned int i = 0; i < board.size(); i++) {
        std::cout << ((i != 0) ? std::string(board[i].size() * 4 - 1, '-') + "\n" : "") << " ";
        for(unsigned int q = 0; q < board[i].size(); q++) {
            std::string display_str;
            if (board[i][q] == 0) display_str = " ";
            else if (board[i][q] == 1) display_str = "X";
            else if (board[i][q] == 2) display_str = "O";
            std::cout << display_str << ((q != board[i].size() - 1) ? " | " : "\n");
        }
    }
}


// Places the marker string from positions 1 through 9
void PlaceMarker(int position, std::string marker, std::vector<std::vector<int>> &board) {
    // Get X and Y from 1-9 position
    int y = (position - 1) / board.size();
    int x = (position - 1) % 3;

    // Update position
    board[y][x] = (marker == "X") ? 1 : 2;
}

// Get a position to play from the player
int GetPlayerChoice(){
    std::cout << "Please select a position to play, 1 - 9: " << std::endl;

    std::string input;
    std::getline(std::cin, input);

    int userin = std::stoi(input);

    return userin;
}

int main() {
    // Initalizes my_board using copy constructor
    std::vector<std::vector<int>> my_board(CreateBoard());
    DisplayBoard(my_board);
}
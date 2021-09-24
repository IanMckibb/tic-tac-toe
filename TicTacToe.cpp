#include <vector>

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

int main() {
    // Initalizes my_board using copy constructor
    std::vector<std::vector<int>> my_board(CreateBoard());
}
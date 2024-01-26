#include <vector>
#include <string>

enum class Piece_type{
    EMPTY, PAWN, KNIGHT, BISHOP, ROOK, QUEEN, KING
};

struct Piece {
    bool isEmpty;
    int index;
    Piece_type piece_type;
    std::vector<std::vector<int>> vision;
};

class Board {
    Piece white_pieces[32];
    Piece black_pieces[32];
    int board[8][8];
    int turn; // white:1,  black:-1
    bool castle[4]; // 0:K  1:Q  2:k  3:q}
    int enpassent[2]; //-1,-1 if enpassent is not available
    float fifty_move;
    int material_balance;
    std::string FEN;
public:
    Board(std::string fen = "rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR w KQkq - 0 1"){

    }
    void update(int selected_index, int targeted_index){

    }
    void printBoard(){

    }
    std::vector<int[2]> move_generation(){
        
    }
};

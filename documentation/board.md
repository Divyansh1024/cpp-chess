## Piece_type
its an enum class which would automatically asign
EMPTY = 0
PAWN = 1
KNIGHT = 2
BISHOP = 3
ROOK = 4
QUEEN = 5
KING = 6

## Piece
its would store data of an piece
### index
tells us where the piece is located
### piece_type
tell us the type of piece (pawn, knight, etc)
### vision
the reason vision is an 2d vector is because each vector would tell us the pieces that are between the final square
[[black bishop id, empty, black pawn id],
 [empy, black knight, black pawn, empty],
 [white knight, empty, black king],
 [empty, white rook, white queen]]

 3r4/1p5k/2n3b1/8/4B3/5N2/2R5/1Q5p w - - 0 1 use this fen to understand the above example


## class Board


### board[8][8]
it would store piece_id.

### turn
white : 1
black : -1

### castle[4]
index 0 : true if white can castle king side
index 1 : true if white can castle queen side
index 2 : true if black can castle king side
index 3 : true if black can castle queen side

### enpassent
its an int[2] index 0 would represent i and index 1 would represent j
if enpassent is not available values of both would be -1

### fifty-move
keeps the record of fifty move

### white pieces
the index is the piece_id, a piece_id is a unique id for a particular piece.
the values would be a structure piece which would store the data for that piece

0:
1:
2:
.
.
.
31:
### black pieces
0:
1:
2:
.
.
.
31:

### material_balance
it would tell the material balance
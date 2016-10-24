def judgeBoard(board, newQueen):
    if newQueen in board: return False    #判断新皇后是否有同列
    for queen in board :                  #判断新皇后是否在同一斜线
        if abs(newQueen - queen) == abs(len(board) - board.index(queen)): return False
    return True

def forGodsSake(boardForNow, boardSize):
    if len(boardForNow) == boardSize - 1:
        for location in range(boardSize):
            if judgeBoard(boardForNow, location): yield [location]
    for location in range(boardSize):
        if judgeBoard(boardForNow, location):
            for remainBoard in forGodsSake(boardForNow+[location] ,boardSize):
                yield [location]+remainBoard


for line in forGodsSake([],8):
    print(line)


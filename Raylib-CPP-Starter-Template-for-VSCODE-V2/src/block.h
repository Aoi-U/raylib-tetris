#pragma once
#include <vector>
#include <map>
#include "position.h"
#include "colors.h"

class Block {
public: 
    Block();
    void Draw(int offsetX, int offsetY);
    void Move(int rows, int cols);
    std::vector<Position> GetCellPositions();
    void Rotate();
    void UndoRotate();
    int id;
    std::map<int, std::vector<Position>> cells;

private:
    int cellSize;
    int rotationState;
    int rowOffset;
    int colOffset;
    std::vector<Color> colors;
};
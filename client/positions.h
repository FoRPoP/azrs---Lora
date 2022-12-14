#ifndef POSITIONS_H
#define POSITIONS_H

const int cardsPosition[8][8] = {
    {3, -1, -1, -1, -1, -1, -1, -1},  // 1 karta ostala
    {3, 4, -1, -1, -1, -1, -1, -1},   // 2
    {3, 4, 5, -1, -1, -1, -1, -1},    // 3
    {2, 3, 4, 5, -1, -1, -1, -1},     // 4
    {2, 3, 4, 5, 6, -1, -1, -1},      // 5
    {1, 2, 3, 4, 5, 6, -1, -1},       // 6
    {0, 1, 2, 3, 4, 5, 6, -1},        // 7
    {0, 1, 2, 3, 4, 5, 6, 7}};        // 8

const int reverseCardsPositions[8][8] = {
    {-1, -1, -1, 0, -1, -1, -1, -1},  // 1 karta ostala
    {-1, -1, -1, 0, 1, -1, -1, -1},   // 2
    {-1, -1, -1, 0, 1, 2, -1, -1},    // 3
    {-1, -1, 0, 1, 2, 3, -1, -1},     // 4
    {-1, -1, 0, 1, 2, 3, 4, -1},      // 5
    {-1, 0, 1, 2, 3, 4, 5, -1},       // 6
    {0, 1, 2, 3, 4, 5, 6, -1},        // 7
    {0, 1, 2, 3, 4, 5, 6, 7}};        // 8


#endif  // POSITIONS_H

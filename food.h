#ifndef FOOD_H
#define FOOD_H

#include "snake.h"
class Snake;
class Food
{
public:
    Food() : cnt(0), flash_flag(false), big_flag(false), x(0), y(0), big_x(0), big_y(0), progress_bar(0) {}
    void DrawFood(Snake&);
    void DrawBigFood(Snake&);
    int GetCnt();
    void FlashBigFood();
    bool GetBigFlag();
    int GetProgressBar();
private:
    int cnt;
    bool flash_flag;//闪烁标记
    bool big_flag;//是否有限时食物标记
    int x, y;
    int big_x, big_y;
    int progress_bar;//限时食物进度条
    friend class Snake;
};
#endif // FOOD_H

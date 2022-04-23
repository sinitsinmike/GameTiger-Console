
const uint8_t level01XCount = 32;
const uint8_t level01YCount = 18;
const uint8_t level01[] = {
    78, 61, 97, 97, 62, 78, 78, 78, 78, 78, 78, 78, 78, 78, 78, 78, 78, 78, 78, 78, 78, 78, 78, 78, 78, 78, 78, 78, 78, 78, 78, 78,
    78, 79, 88, 89, 96, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 62, 78,
    78, 79, 107, 108, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 77, 78,
    78, 79, 87, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 77, 78,
    78, 79, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 77, 78,
    78, 79, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 77, 78,
    78, 79, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 77, 78,
    78, 79, 157, 157, 157, 157, 157, 157, 157, 157, 68, 69, 69, 70, 87, 68, 70, 87, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 77, 78,
    78, 79, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 77, 78,
    78, 79, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 34, 35, 36, 72, 73, 73, 73, 73, 73, 74, 77, 78,
    78, 79, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 91, 92, 92, 92, 92, 92, 93, 77, 78,
    78, 79, 71, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 91, 92, 92, 92, 92, 92, 93, 77, 78,
    78, 79, 109, 87, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 34, 35, 36, 91, 92, 92, 92, 92, 92, 93, 96, 62,
    78, 79, 63, 64, 64, 64, 64, 65, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 91, 92, 92, 92, 92, 92, 92, 74, 77,
    78, 79, 82, 83, 83, 83, 83, 84, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 91, 92, 92, 92, 92, 92, 93, 71, 77,
    78, 79, 101, 102, 102, 87, 85, 64, 64, 65, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 157, 87, 110, 111, 111, 111, 111, 112, 87, 109, 77,
    78, 80, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 81,
    78, 78, 78, 78, 78, 78, 78, 78, 78, 78, 78, 78, 78, 78, 78, 78, 78, 78, 78, 78, 78, 78, 78, 78, 78, 78, 78, 78, 78, 78, 78, 78
};

const uint8_t level01FruitCount = 10;
const uint16_t level01Fruits[][3] = {
    {85, 60, 5},
    {85, 90, 5},
    {85, 120, 5},
    {450, 60, 5},
    {450, 90, 5},
    {190, 60, 6},
    {220, 60, 6},
    {250, 60, 6},
    {320, 160, 2},
    {345, 160, 2},
};

const uint8_t level01EnemyCount = 3;
const uint16_t level01EnemyMushroom[][4] = { //y, startx, xmin, xmax
    {200, 235, 160, 324},
    {190, 90, 160, 260},
    {360, 122, 320, 448},
};
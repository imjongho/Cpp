#include <iostream>
#include <cstdlib>  // rnad(), srand()
#include <ctime>    // time()
using namespace std;

int get_dice_face();

int main() {

    srand((unsigned int)time(0));
    int dice_cnt[6] = { 0 }; // 주사위 1~6 카운트
    
    for (int i = 0; i < 10; i++) {
        switch (get_dice_face())
        {
        case 1:
            dice_cnt[0]++;
            break;
        case 2:
            dice_cnt[1]++;
            break;
        case 3:
            dice_cnt[2]++;
            break;
        case 4:
            dice_cnt[3]++;
            break;
        case 5:
            dice_cnt[4]++;
            break;
        case 6:
            dice_cnt[5]++;
            break;
        }
    }
    
    for (int i = 0; i < 6; i++) {
        cout << i + 1 << " -> " << dice_cnt[i] << endl;
    }

    return 0;
}

int get_dice_face() {
    return (rand() % 6) + 1;   // 1~6
}
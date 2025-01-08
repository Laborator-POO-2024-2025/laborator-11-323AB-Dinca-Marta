

#include <iostream>
#include "Jucarie.h"
#include "Robot.h"
#include "Puzzle.h"
#include "Papusa.h"
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<Jucarie *> jucarii;
    jucarii.push_back(new Robot("bubu", 4, 87.3f));
    jucarii.push_back(new Robot("buad", 2, 812.3f));
    jucarii.push_back(new Robot("badf", 6, 14.23f));
    jucarii.push_back(new Puzzle("dsvav", 2, 3647.21f));
    jucarii.push_back(new Puzzle("badf", 8, 12.232f));
    jucarii.push_back(new Puzzle("badf", 10, 89832.1f));
    jucarii.push_back(new Papusa("ken", 12, 1434.2312f));
    jucarii.push_back(new Papusa("barbie", 13, 1123.0f));
    for (int i = 0;i < jucarii.size();i++)
        cout << i << ": " << jucarii[i];
    cout << endl<<"SORTATE" << endl;
    sort(jucarii.begin(), jucarii.end(), [](const Jucarie* a, const Jucarie* b) {
        return a->getVarstaMinima() < b->getVarstaMinima();
    });
    for (int i = 0;i < jucarii.size();i++)
        cout << i << ": " << jucarii[i];
    return 0;
}

#include <iostream>
#include <list>
#include <queue>

using std::queue;
using std::cout;
using std::cin;
using std::endl;
using std::atoi;


int getSize() {
    char temp[11];
    cout << "Enter the size of map: ";
    cin >> temp;
    return atoi(temp);
}

int summation (int size) {
    return size*(size + 1) / 2;
}

// size 2 means total size
int getMap(queue<char> * myQueue, int index, int size1, int size2){

    for (int i = 0; i < size1; i++) {
        myQueue->push(index);
        index = ((index-64)%26) + 65;
        cout << myQueue->back() << " ";
    }
    int revAmount;
    int sizeCur = size1;
    int tempindex = index;
    cout << endl;

    for (int i = 0; i < (size2 - size1); i++) {
        revAmount = 3 * (sizeCur - 1) + sizeCur;
        sizeCur += 1;
        tempindex +- revAmount;
        if (tempindex < 65) {
            tempindex = 90 - (((65 - tempindex)%26) + 65);
        }
        myQueue->push(tempindex);
        cout << myQueue->back() << " ";
        cout << endl;
    }
    if (size1 <= 1) {
        return 0;
    }
    
    getMap(myQueue, index, size1-2, size2);
    cout << "end" << endl;

    return 0;
    
}

int main () {

    queue<char> * POI = new queue<char>();
    int INITIAL_INDEX = 65;
    int mapSize = getSize();
    getMap(POI, INITIAL_INDEX, mapSize, mapSize);



    return 0;
}
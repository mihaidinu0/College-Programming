#include <vector>
#include <iostream>

using namespace std;


class


int main(){

    vector<int> nums;

    nums.reserve(20);

    int current = 1;

    while (current != 0){
        scanf("%d", &current);
        nums.push_back(current);
    }

    for (auto i = nums.begin(); i != nums.end(); i++){
        cout << *i << " ";
    }

    cout << "Size: " << nums.size() << endl;
    cout << "Capcity: " << nums.capacity() << endl;
    cout << "Max size: " << nums.max_size() << endl;

    nums.shrink_to_fit();

    cout << "Capcity: " << nums.capacity() << endl;
    return 0;
}

/*
14 coloane
Obiect
Obiect pt linie
*/
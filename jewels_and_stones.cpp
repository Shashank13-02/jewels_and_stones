#include <iostream>
#include <unordered_map>
using namespace std;

int numJewelsInStones(string jewels, string stones) {
    unordered_map<char, int>mp;
    // Count each type of jewel
    for(int i=0;i<stones.size();i++){
        mp[stones[i]]=mp[stones[i]]+1;
    }
    int count = 0;
    for(int i=0;i<jewels.size();i++){
        count+=mp[jewels[i]];
    }
    return count;
}

int main() {
    string jewels = "aA";
    string stones = "aAAbbbb";
    cout << "Number of jewels in stones: " << numJewelsInStones(jewels, stones) << endl;
    return 0;
}

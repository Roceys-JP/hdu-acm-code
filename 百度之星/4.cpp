#include "algorithm"
#include "iostream"
#include "string"
#include "string.h"
#include "stdio.h"
#include "map"
using namespace std;
int main(int argc, char const *argv[]) {
    int N;
    map<string, int> map1;
    cin >> N;
    while (N--) {
        char temp[51];
        scanf("%s", temp);
        sort(temp, temp + strlen(temp));
        if(!map1[string(temp)])
            map1[string(temp)] = 0;
        cout << map1[string(temp)] << endl;
        map1[string(temp)]++;
    }
    return 0;
}

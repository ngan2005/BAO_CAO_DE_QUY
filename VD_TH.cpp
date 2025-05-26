#include <iostream>
#include <string>
using namespace std;
void LightLow(const string& s, int i, int velocity, int target);
void LightHigh(const string& s, int i, int velocity, int target);
void CheckTarget(int i, int velocity, int target) {
    if (velocity == target) {
        cout << "Dat duoc target tai i = " << i << ", velocity = " << velocity << endl;
    }
}
void LightLow(const string& s, int i, int velocity, int target) {
    if (i >= s.length()) {
        CheckTarget(i, velocity, target);
        return;
    }

    int light = s[i] - '0';
    if (light % 2 == 1) {
        if (velocity % 2 == 0) {
            int next = velocity + i;
            LightHigh(s, i + 1, next, target);
        }
        int next2 = velocity * 2 + 1;
        LightHigh(s, i + 1, next2, target);
    } else {
        LightHigh(s, i + 1, velocity, target);
    }
}

void LightHigh(const string& s, int i, int velocity, int target) {
    if (i >= s.length()) {
        CheckTarget(i, velocity, target);
        return;
    }

    int light = s[i] - '0';

    if (light % 2 == 0) {
        if (velocity % 3 == 0) {
            int next = velocity / 3;
            LightLow(s, i + 1, next, target);
        }
        int next2 = velocity + i * i;
        LightLow(s, i + 1, next2, target);
    } else {
        LightLow(s, i + 1, velocity, target);
    }
}

int main() {
    string s = "7312";
    int start = 2;
    int target = 20;

    cout << "Bat dau dieu huong robot..." << endl;
    LightLow(s, 0, start, target);

    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

class MinStack {
public:
    MinStack() {

    }

    void push(int val) {
        vecStk.push_back(val);
    }

    void pop() {
        vecStk.pop_back();
    }

    int top() {
        return vecStk.back();
    }

    int getMin() {
        int min = INT_MAX;

        for (int i = 0; i < vecStk.size(); i++) {
            if (vecStk[i] < min) {
                min = vecStk[i];
            }
        }

        return min;
    }

    vector<int> vecStk;
};

int main()
{
    MinStack* obj = new MinStack();
    obj->push(5);
    obj->push(4);
    obj->push(8);
    obj->push(-3);
    obj->pop();

    int param_3 = obj->top();
    int param_4 = obj->getMin();

    cout << param_3 << endl;
    cout << param_4 << endl;

    return 0;
}

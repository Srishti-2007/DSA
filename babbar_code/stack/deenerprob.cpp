#include <vector>
#include <queue>
using namespace std;

class DinnerPlates {
    int cap;  // capacity of each stack
    vector<vector<int>> stacks;
    priority_queue<int, vector<int>, greater<int>> pushable; // min-heap for stacks that are not full
    priority_queue<int> poppable; // max-heap for stacks that are not empty

public:
    DinnerPlates(int capacity) {
        cap = capacity;
    }

    void push(int val) {
        // Remove invalid or full stack indices from pushable heap
        while (!pushable.empty() && 
              (pushable.top() >= (int)stacks.size() || (int)stacks[pushable.top()].size() == cap)) {
            pushable.pop();
        }

        int idx;
        if (pushable.empty()) {
            idx = stacks.size();
            stacks.push_back({});
        } else {
            idx = pushable.top();
            pushable.pop();
        }

        stacks[idx].push_back(val);
        poppable.push(idx);      // mark as non-empty
        pushable.push(idx);      // may still have space if not full
    }

    int pop() {
        // Remove invalid or empty stacks from poppable heap
        while (!poppable.empty() && 
              (poppable.top() >= (int)stacks.size() || stacks[poppable.top()].empty())) {
            poppable.pop();
        }

        if (poppable.empty()) return -1;

        int idx = poppable.top();
        int val = stacks[idx].back();
        stacks[idx].pop_back();

        // After popping, it has space again
        pushable.push(idx);

        // If still not empty, keep in poppable
        if (!stacks[idx].empty()) {
            poppable.push(idx);
        }

        // Trim empty stacks at the end to save space
        while (!stacks.empty() && stacks.back().empty()) {
            stacks.pop_back();
        }

        return val;
    }

    int popAtStack(int index) {
        if (index < 0 || index >= (int)stacks.size() || stacks[index].empty()) {
            return -1;
        }

        int val = stacks[index].back();
        stacks[index].pop_back();

        // It has space again, add to pushable
        pushable.push(index);
        return val;
    }
};

/**
 * Your DinnerPlates object will be instantiated and called as such:
 * DinnerPlates* obj = new DinnerPlates(capacity);
 * obj->push(val);
 * int param_2 = obj->pop();
 * int param_3 = obj->popAtStack(index);
 */

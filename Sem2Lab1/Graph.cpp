#include "../LAB2/ListSequence.h"
#include <stack>
struct Node{
    int item;
    ListSequence<Node> list;
    int visited = 0;
};
int SumGraph(Node start){
    int sum = 0;

        auto stack = new std::stack<Node>();
        stack->push(start);
        while(!stack->empty()){
            Node node = stack->top();
            node.visited = 1;
            sum += node.item;
            for (int i = 0; i < node.list.GetLength() ; ++i) {
                if (!node.list.Get(i).visited)
                stack->push(node.list.Get(i));
            }

        }
        return sum;
    }


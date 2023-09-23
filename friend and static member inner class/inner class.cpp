#include <iostream>
#include <vector>

class Graph {
public:
    class Node {
    public:
        Node(int value) : value(value) {}
        int getValue() const { return value; }
    private:
        int value;
    };

    Graph() {}

    void addNode(int value) {
        nodes.push_back(Node(value));
    }

    void printNodes() const {
        for (const Node& node : nodes) {
            std::cout << node.getValue() << ' ';
        }
        std::cout << '\n';
    }

private:
    std::vector<Node> nodes;
};

int main() {
    Graph graph;
    graph.addNode(1);
    graph.addNode(2);
    graph.addNode(3);
    graph.printNodes(); // Êä³ö: 1 2 3
    return 0;
}

//
// Created by et018298 on 1/4/2024.
//

#ifndef GRAPH_PUZZLE_GAME_EMIRHANTEMEL_NODE_H
#define GRAPH_PUZZLE_GAME_EMIRHANTEMEL_NODE_H

#include <string>

using namespace  std;

class Node {
private:
    std::string data;
    Node* next;
public:
    explicit Node(std::string& data);
    void setNext(Node* _next);
    Node* getNext();
    std::string getData();
    string to_string();
};
#endif //GRAPH_PUZZLE_GAME_EMIRHANTEMEL_NODE_H

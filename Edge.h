//
// Created by et018298 on 1/4/2024.
//

#ifndef GRAPH_PUZZLE_GAME_EMIRHANTEMEL_EDGE_H
#define GRAPH_PUZZLE_GAME_EMIRHANTEMEL_EDGE_H
#include <string>

using namespace std;

class Edge {
private:
    std::string from;
    std::string to;
    Edge* next;
public:
    Edge();
    void setNext(Edge* _next);
    Edge* getNext() const;
    std::string getFrom() const;
    std::string getTo() const;

    Edge(std::string from, std::string to);
};


#endif //GRAPH_PUZZLE_GAME_EMIRHANTEMEL_EDGE_H

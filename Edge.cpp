//
// Created by et018298 on 1/4/2024.
//
#include "Edge.h"
Edge::Edge(std::string from, std::string to) {
    this->from = from;
    this->to = to;
    next = nullptr;
}

void Edge::setNext(Edge *_next) {
    next = _next;
}

Edge *Edge::getNext() const{
    return next;
}

std::string Edge::getFrom() const{
    return from;
}

std::string Edge::getTo() const{
    return to;
}

Edge::Edge() {

}
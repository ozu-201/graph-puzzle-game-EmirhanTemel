//
// Created by et018298 on 1/4/2024.
//

#include "Node.h"
Node::Node(std::string& data) {
    this->data = data;
    this->next = nullptr;
}

void Node::setNext(Node *_next) {
    this->next = _next;
}

Node *Node::getNext() {
    return next;
}

std::string Node::getData() {
    return data;
}

string Node::to_string() {
    return ::to_string(data);
}
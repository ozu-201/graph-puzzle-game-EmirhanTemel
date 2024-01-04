//
// Created by et018298 on 1/4/2024.
//
#include <iostream>
#include <fstream>
#include <string>
#include "Graph.h"

using namespace std;

int main() {
    int lineNumber, vc3, vc4, vc5;
    std::ifstream input("englishdictionary.txt");

    //Find vertexCounts for each graph.
    for (std::string line; getline(input, line);) {
        if (line.length() == 3) {
            vc3++;
        }
        else if (line.length() == 4) {
            vc4++;
        }
        else if (line.length() == 5) {
            vc5++;
        }
    }

    //Initializing each graph by calculated vertexCounts.
    Graph graph3 = Graph(vc3);
    Graph graph4 = Graph(vc4);
    Graph graph5 = Graph(vc5);

    //Adding edges for each graph.
    for (std::string line; getline(input, line);) {
        lineNumber++;
        if (line.length() == 3) {
            std::string currentStr = line;
            int difference = 0;
            int lineNumber3 = 0;
            for (std::string line; getline(input, line);) {
                std::string compareStr = line;
                lineNumber3++;
                if (compareStr.length() == 3) {
                    for (int i = 0; i<compareStr.length(); i++) {
                        if (currentStr[i] != compareStr[i]) {
                            difference++;
                        }
                    }
                    if (difference == 1) {
                        graph3.addEdge(compareStr, currentStr);
                    }
                }
            }
        }
        else if (line.length() == 4) {
            std::string currentStr = line;
            int difference = 0;
            for (std::string line; getline(input, line);) {
                std::string compareStr = line;
                if (compareStr.length() == 3) {
                    for (int i = 0; i<compareStr.length(); i++) {
                        if (currentStr[i] != compareStr[i]) {
                            difference++;
                        }
                    }
                    if (difference == 1) {
                        graph4.addEdge(currentStr, compareStr);
                    }
                }
            }
        }
        else if (line.length() == 5) {
            std::string currentStr = line;
            int difference = 0;
            for (std::string line; getline(input, line);) {
                std::string compareStr = line;
                if (compareStr.length() == 3) {
                    for (int i = 0; i<compareStr.length(); i++) {
                        if (currentStr[i] != compareStr[i]) {
                            difference++;
                        }
                    }
                    if (difference == 1) {
                        graph5.addEdge(currentStr, compareStr);
                    }
                }
            }
        }
    }
    return 0;


}

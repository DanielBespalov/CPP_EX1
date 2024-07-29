/*
 * Author: Daniel Bespalov
 * ID: 213446479
 * Mail: danieldaniel2468@gmail.com
 */

#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include <iostream>

namespace ariel{
    class Graph
    {
        private:
            unsigned int edges;
            std::vector<std::vector<int>> mat;
            unsigned int verts;
        public:
            Graph();
            void loadGraph(std::vector<std::vector<int>> matrix);
            void printGraph();
            unsigned int getVerts();
            unsigned int getEdges();
            std::vector<std::vector<int>> getGraph();
    
    };
}
#endif 
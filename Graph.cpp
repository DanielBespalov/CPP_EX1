/*
 * Author: Daniel Bespalov
 * ID: 213446479
 * Mail: danieldaniel2468@gmail.com
 */

#include <iostream>
#include <vector>
#include "Graph.hpp"


namespace ariel {

    Graph::Graph() : edges(0), verts(0), mat() {}

    void Graph::loadGraph(std::vector<std::vector<int>> matrix) {
        if(matrix.size() != matrix[0].size()) throw std::invalid_argument("Adjacency matrix must be square.");   

        for(unsigned long i = 0; i < matrix.size(); i++) {
            if(matrix[i][i] != 0) throw std::invalid_argument("The main diagonal must be 0");
            
        }

        verts = matrix.size();
        mat = matrix;

        int count= 0;
        for(unsigned long i = 0; i < matrix.size(); i++) {
            for(unsigned long j = 0;  j < matrix.size(); j++) {
                if(mat[i][j]!=0)
                    count++;
            }
        }

        //edges = (unsigned int)(count/2);   
        edges = (unsigned int)count;
    }

    unsigned int Graph::getVerts(){
        return verts;
    }

    unsigned int Graph::getEdges(){
        return edges;
    }

    std::vector<std::vector<int>> Graph::getGraph() {
        return mat;
    }
    

    void Graph::printGraph() {
        std::cout << "Graph with " << verts << " vertices and " << edges << " edges" << std::endl;
    }

}
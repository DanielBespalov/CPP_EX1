/*
 * Author: Daniel Bespalov
 * ID: 213446479
 * Mail: danieldaniel2468@gmail.com
 */

#ifndef ALGORITHMS_HPP
#define ALGORITHMS_HPP

#include "Graph.hpp"
#include <string>

namespace ariel {
    class Algorithms {
    public:
        static bool bfsIsConnected(Graph g, unsigned long start, std::vector<bool>& visited);
        static int isConnected(Graph g);
        static std::string shortestPath(Graph g, unsigned long start, unsigned long end);
        static bool dfsCycleCheck(Graph g, unsigned long v, std::vector<bool>& visited, int parent);
        static int isContainsCycle(Graph g);
        static bool bfsCheckBipartite(Graph g, unsigned long start, std::vector<int>& color, std::vector<int>& setA, std::vector<int>& setB);
        static std::string isBipartite(Graph g);
        static std::string negativeCycle(Graph g);
    };
}

#endif // ALGORITHMS_HPP

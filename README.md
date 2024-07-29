# מטלה 1 - גרפים (Classes and Namespaces

# Graph Algorithms

This repository contains implementations of various graph algorithms and data structures in C++. The algorithms include connectivity checks, shortest path calculations, cycle detection, bipartite checks, and negative cycle detection.

## Features

- **Graph Class**: Defines a graph using an adjacency matrix and supports loading, printing, and querying the graph structure.
- **Algorithms**: Contains functions for graph traversal (BFS), shortest path finding, cycle detection, bipartite checking, and negative cycle detection.

## Files

- `Graph.hpp`: Header file for the `Graph` class definition.
- `Graph.cpp`: Implementation of the `Graph` class.
- `Algorithms.hpp`: Header file for the algorithms used.
- `Algorithms.cpp`: Implementation of the graph algorithms.
- `test.cpp`: Contains a few tests for each function 

## Graph Class

### Methods

- `Graph()`: Constructor for creating an empty graph.
- `void loadGraph(std::vector<std::vector<int>> matrix)`: Loads a graph from an adjacency matrix.
- `void printGraph()`: Prints the graph's vertices and edges.
- `unsigned int getVerts()`: Returns the number of vertices in the graph.
- `unsigned int getEdges()`: Returns the number of edges in the graph.
- `std::vector<std::vector<int>> getGraph()`: Returns the adjacency matrix of the graph.

## Algorithms

### Functions

- `int isConnected(Graph g)`: Checks if the graph is connected.
- `std::string shortestPath(Graph g, unsigned long start, unsigned long end)`: Finds the shortest path between two vertices using BFS.
- `int isContainsCycle(Graph g)`: Checks if the graph contains a cycle.
- `std::string isBipartite(Graph g)`: Checks if the graph is bipartite and returns the two sets.
- `std::string negativeCycle(Graph g)`: Checks if the graph contains a negative weight cycle using the Bellman-Ford algorithm.



## how to run the code
to run the code you need to open the terminal and type "make". it will automatically run the tests.  






  

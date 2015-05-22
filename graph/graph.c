/*
 * The file for the graph implementation.
 */

#include "graph.h"
#include <stdio.h>

typedef struct {
 	int id;
 	char *name;
 	int *neighbors;
 } node; //Neighbors are directed edges connected thusly: node ----> neighbor

 typedef struct {
 	int id;
 	node *nodes;
 } graph; //Graphs are connected groups of nodes.

/*
 * nID and gID refer to node ID and graph ID respectively; they are global within this 
 * file and uniquely define each created graph or node. They are global so that we can 
 * ensure uniqueness for all IDs (it will be an invariant that each created ID is larger 
 * than the current node values).
 */
short nID = 0;
short gID = 0;

void insert(node n, graph g, int *connections) {
/*
 * Given a node and its connections, insert it into a graph.
 */

}

node id_to_node(int id, graph g) {
/*
 * Helper function that gets a node given its ID.
 */
	 char node = graph.nodes;
	 while (*node != '\0') {
	 	if ((*node).id == id) {
	 		return *node;
	 	} else {
	 		node += sizeof(node);
	 	}
	 }
	 return;

}

graph id_to_graph(int id, graph *g) {
/*
 * Helper function that gets a graph given its ID.
 */

}


graph graph() {
/*
 * Creates an empty graph.
 */
	graph g;
	g.id = gID;
	gID++;

	return g;
}

void main() {
/*
 * At the moment, this won't do anything. Everything that is needed has already been
 * defined. However, there may be a need to mass-insert nodes.
 */
 return;
}
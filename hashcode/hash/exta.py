#! /usr/bin/env python3
#from .import a


f = open("a.txt","r")
Lines=f.readlines()
count = 0
"""for line in Lines:
    count += 1
    print("Line{}: {}".format(count, line.strip()))
"""

# A class to store a graph edge
class Edge:
	def __init__(self, src, dest, weight):
		self.src = src
		self.dest = dest
		self.weight = weight


# A class to store adjacency list nodes
class Node:
	def __init__(self, value, weight):
		self.value = value
		self.weight = weight


# A class to represent a graph object
class Graph:
	# Constructor to construct a graph
	def __init__(self, edges, N):

		# A list of lists to represent an adjacency list
		self.adj = [None] * N

		# allocate memory for the adjacency list
		for i in range(N):
			self.adj[i] = []

		# add edges to the undirected graph
		for e in edges:
			# allocate node in adjacency list from src to dest
			node = Node(e.dest, e.weight)
			self.adj[e.src].append(node)


# Function to print adjacency list representation of a graph
def printGraph(graph):
	for src in range(len(graph.adj)):
		# print current vertex and all its neighboring vertices
		for edge in graph.adj[src]:
			print(f"({src} —> {edge.value}, {edge.weight}) ", end='')
		print()

def input_graph():
    N=int(Lines[0][4])
    for i in range(Lines[0][4]):
        count += 1
        print("Line{}: {}".format(count, Lines[i+1].strip()))
        edges = [Edge(Lines[i+1][0],Lines[i+1][0], 1), Edge(0, 1, 1), Edge(3, 1, 1), Edge(2, 3, 2), Edge(1, 2, 3)]


def main():
        input_graph()
	
	# Input: No of vertices
	    N = 5

	# construct a graph from a given list of edges
	graph = Graph(edges, N)
     
    #file1.close() 

	# print adjacency list representation of the graph
	printGraph(graph)
    #f = open("a.txt","w+")
    
    


if __name__ == '__main__':
    main()
	# Input: Edges in a weighted digraph (as per the above diagram)
	# Edge `(x, y, w)` represents an edge from `x` to `y` having weight `w`
    
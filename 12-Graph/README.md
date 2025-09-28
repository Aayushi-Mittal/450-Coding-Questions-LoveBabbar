# Graph Data Structure

A **graph** is a pair (V, E), where:

* **V** is a set of nodes, called **vertices**.
* **E** is a collection of pairs of vertices, called **edges**.

Vertices and edges are positions and store elements.

---

## Definitions

### Edges

* **Directed Edge**:

  * An ordered pair of vertices (u, v).
  * Vertex **u** is the **origin**, and **v** is the **destination**.
  * Example: One-way road traffic.
    
* **Undirected Edge**:

  * An unordered pair of vertices (u, v).
  * Example: Railway lines.

### Graph Types

* **Directed Graph**:

  * All edges are directed.
  * Example: Route network.

* **Undirected Graph**:

  * All edges are undirected.
  * Example: Flight network.

---

## Graph Properties

* Two vertices are **adjacent** if they are connected by an edge.
* An edge is **incident** on both vertices it connects.
* A **tree** is an acyclic connected graph (i.e., it has no cycles).
* A **self-loop** is an edge that connects a vertex to itself.
* **Parallel edges** are multiple edges that connect the same pair of vertices.
* The **degree** of a vertex is the number of edges incident on it.
* A **subgraph** is a subset of a graph’s edges (and associated vertices) that forms a graph.

---

## Paths and Cycles

* A **path** is a sequence of adjacent vertices.
* A **simple path** is a path with no repeated vertices.
* A **cycle** is a path where the first and last vertices are the same.
* A **simple cycle** is a cycle with no repeated vertices or edges (except the start and end).
* A vertex is **connected** to another if a path exists between them.
* A graph is **connected** if there is a path between every pair of vertices.
* A graph that is not connected consists of **connected components**.

---

## Special Graphs

* **Directed Acyclic Graph (DAG)**: A directed graph with no cycles.
<img width="501" height="226" alt="image" src="https://github.com/user-attachments/assets/d76b8c80-df2e-49ee-a5d1-9915ea1b241d" />
  
* **Forest**: A disjoint set of trees.
<img width="850" height="590" alt="image" src="https://github.com/user-attachments/assets/4a2311d8-986f-4298-8418-8e9ccedba036" />

* **Spanning Tree**: A subgraph that includes all vertices and forms a single tree.
<img width="500" height="348" alt="image" src="https://github.com/user-attachments/assets/09811e7b-9900-43a3-81c9-d8ec64dcecad" />

* **Spanning Forest**: A union of spanning trees for each connected component.

* **Bipartite Graph**: A graph where vertices can be divided into two sets such that all edges connect a vertex in one set to a vertex in the other.
<img width="868" height="428" alt="image" src="https://github.com/user-attachments/assets/a5c4ce69-08bf-4db1-b3a7-cd50e7373aea" />

---

## Weighted Graphs

* **Weighted Graphs**: Each edge has an associated integer value (weight) representing distance or cost.
* **Directed Weighted Graphs** are sometimes referred to as **networks**.

---

## Graph Density

* **Complete Graph**: A graph with all possible edges present.
<img width="596" height="260" alt="image" src="https://github.com/user-attachments/assets/bb32f974-68f2-4c8d-a726-18cf6240b640" />

  
* **Sparse Graph**: A graph with relatively few edges (typically when |E| < |V| log |V|).
* **Dense Graph**: A graph with most possible edges present.
<img width="937" height="383" alt="image" src="https://github.com/user-attachments/assets/a2ebd720-d610-4368-a706-79e6dbf484c0" />


---

## Notation

* **|V|**: Number of vertices in the graph.
* **|E|**: Number of edges in the graph.

For an undirected graph, |E| can range from 0 to:

```
|E| ≤ |V|(|V| - 1)/2
```

This upper bound occurs when each vertex is connected to every other vertex.

---

## Applications of Graphs

Graphs are widely used in various domains to model relationships and connectivity. Common applications include:

* **Electronic Circuits**:
  Representing relationships between components in circuit design.

* **Transportation Networks**:
  Examples include:

  * Highway networks
  * Flight networks

* **Computer Networks**:
  Examples include:

  * Local Area Networks (LANs)
  * The Internet
  * The World Wide Web

* **Databases**:

  * Representing **Entity-Relationship (ER) diagrams**
  * Modeling **dependencies between tables** in relational databases

---

## Graph Representation

To work with graphs programmatically, we need to represent them in a form suitable for computation. The three primary representations are:

1. **Adjacency Matrix**
   A 2D matrix where the cell at (i, j) indicates the presence (and possibly weight) of an edge between vertex *i* and vertex *j*.

   <img width="956" height="364" alt="image" src="https://github.com/user-attachments/assets/98c4ebfa-7b19-4cea-b365-c10ba6964672" />


3. **Adjacency List**
   Each vertex maintains a list of adjacent vertices. This is memory-efficient for sparse graphs.

   <img width="731" height="341" alt="image" src="https://github.com/user-attachments/assets/560b0e10-3006-4bbf-9c44-47c58cd1575c" />


5. **Adjacency Set**
   Similar to adjacency lists, but each vertex's neighbors are stored in a set (or a hash set), allowing for faster lookups.

   


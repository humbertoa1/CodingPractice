#define UInt32 unsigned Int 
#define NULL 0

class Vertex;
class Edge;
class Graph;


/*
 * 1. Mark all nodes as not-visited
 * 2. iterated through the graph, start from A, seek B.
 * 3. Mark each node visited as such.
 * 4. If node has been visited, skip.
 * 5. If B is found, build path.
*/


enum State
{
  Visited = 1,
  Unvisited
}

template<typename T>
struct Vertex
{
   std::vector<Edge*> edges;
   T* value;
   State state;
}

template<>
struct Edge
{
  Vertex* parent;
  Vertex* child;
  int weigth;
}

template<class T>
class Graph
{
public:
   Graph()
   {
     vertices = new std::vector<Vertex*>();
     edges = new std::vector<Edges*>();
   }
   std::vector<Vertex*> vertices;
   std::vector<Edge*> edges; 
private:

}


template <typename T>
bool IsConnected(Vertex* vertex1, Vertex* vertex2)
{
   for (std::vector<Vertice*>::iterator it = graph->vertices->begin(); it < graph->vertcies->end(); it++)
   {
      *it[idx].state = Unvisited;
   }

    


}


bool Seek( Vertex* start, Vertex* end)
{
   if (start->State == Visited)
	   return;

   for (std::vector<Edge>::iterator it = start->edges->begin(); it < start->edges->end(); it++)
   { 
      *it[idx].state = Visited;
      if (*it[idx] == end)
	     return true;

       

   }
}

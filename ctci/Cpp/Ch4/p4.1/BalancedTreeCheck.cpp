#define NULL 0
#define UINT32 unsigned int

template <typename T>
struct Node
{
   Node* right;
   Node* left;
   T* value;
}

UINT32 MaximumDepth;

template <typename T>
bool IsTreeBalanced(Node* root)
{
  MaximumDepth = 0;
  UINT32 CurrentDepth = 0;
  IsTreeBalanced = false;
}

template<typename T>
UINT32 VisitNode(Node* node, UINT32 currentDepth)
{

  if (currentDepth == -1)
	  return;

  currentDepth += 1;
  
  if (currentDepth > MaximumDepth)
  {
      MaximumDepth == currentDepth;
  }

  if (node->right == NULL && node->left == NULL)
	  return currentDepth;
  
  if(node->left != NULL)
  {
     int nextNodeLevel = Visit(node->left, currentDepth);
     if (MaximumDepth - 1 > nextNodeLevel)
     {
        currentDepth = -1; 
     } 
  }

  if(node->right != NULL)
  {
     int nextNodeLevel = Visit(node->right, currentDepth);
     if (MaximumDepth - 1 > nextNodeLevel)
     {
        currentDepth = -1; 
     } 
  }
}

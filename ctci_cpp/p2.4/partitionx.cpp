#define UINT32 unsigned int
#define NULL 0

template <class T>
class Node
{
 public: 
   Node(T* _value)
   {
     next = NULL;
     value = _value;
   }
   Node* next;
   T* value;
}

template <class T>
class List
{
  public:
    Node* head; 
    Node* tail;
    void Append(T* value);
}

...
template <typename T>
List<T>* Partition(T* x, List<T>* list)
{
  List<T>* list1 = new List<T>();
  List<T>* list2 = new LIST<T>();

  Node* nextNode = list->head; 
  while (nextNode->next != NULL)
  {
      if(nextNode->value > x)
      {
         list2->Append(x);
      }
      else
      {
        list1->Append(x);
      }    
  }

  list1->tail = list2->head;
  return list1;
}

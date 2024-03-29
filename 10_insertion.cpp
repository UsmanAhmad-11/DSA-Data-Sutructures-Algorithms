#include<iostream>
using namespace std;
class insertion
{
  int arr[100] = {1,7,4,9,10,2};
  int size;
  public:
  insertion(int s)
  {
    size = s;
  }
  void display()
  {
    for (int i = 0; i < size; i++)
    {
      cout<<arr[i]<<" ";
    }
    cout<<endl;
    
  }
  int insertAtIndex(int index, int capacity, int element)
  {
    for (int i = size-1; i >= index; i--)
    {
      arr[i+1] = arr[i];
    }
    arr[index] = element;
    size += 1;
  }
};
int main()
{
  insertion obj(6);
  obj.insertAtIndex(2,100,93);
  obj.display();

}
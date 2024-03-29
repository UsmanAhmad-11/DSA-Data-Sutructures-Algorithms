#include <iostream>
using namespace std;
class deletion
{
  int arr[100] = {1, 4, 7, 3, 6};
  int size;

public:
  deletion(int s)
  {
    size = s;
  }
  void display()
  {
    for (int i = 0; i < size; i++)
    {
      cout << arr[i] << " ";
    }
    cout << endl;
  }
  void dlt(int index)
  {
    for (int i = index; i < size - 1; i++)
    {
      arr[i] = arr[i + 1];
    }
    size -= 1;
  }
};
int main()
{
  deletion obj(5);
  obj.dlt(3);
  obj.display();
}
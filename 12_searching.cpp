#include<iostream>
using namespace std;
class searching
{
     int arr[1000] = {1,55,22,77,34,88,35,2,98,12};
     int size = sizeof(arr)/sizeof(int);

     public:

         int linearSearch(int element)
         { 
          for (int i = 0; i < size-1; i++)
          {
               if(arr[i] == element){
                    return i;
               }
          }
     }

};
int main()
{
     searching obj;
     int element = 100;
     int num = obj.linearSearch(element);
     cout<<"The value "<<element<<" is found on index "<<num<<endl;
}
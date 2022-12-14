#include<iostream>
#include<limits>

using namespace std;

template <class T>
class sorting
{
 T a[10];
public:
 void get_item()
 {
  for(int i=0;i<10;i++)
  {
   cout<<"\n a["<<i<<"] = ";
   cin>>a[i];
  }
 }


void sel_sort()
{
 T temp;

 for(int i=0;i<10;i++)
 {
  for(int j=i+1;j<10;j++)
  {
   if(a[i]>a[j])
   {
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
   }
  }
 }
}

void bub_sort()
{
 T temp;

 for(int i=0;i<10;i++)
 {
  for(int j=0;j<10-i-1;j++)
  {
   if(a[j]>a[j+1])
   {
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
   }
  }
 }
}

void inst_sort()
{
 T tmp;
 int j;

 for(int i=1;i<10;i++)
 {
  tmp=a[i];
  j=i-1;
  while(tmp<a[j])
  {
   a[j+1]=a[j];
   j--;
  }
  a[j+1]=tmp;
 }
}


void display()
{
 for(int i=0;i<10;i++)
 {
  cout<<" "<<a[i]<<", ";
 }
 cout<<"\n\n";
}

};


int main()
{
 sorting<int> iarr;

 cout<<"\n\n Enter Elements of Integer Array\n";
 iarr.get_item();
 cout<<"\n\n Elements of Integer Array\n";
 iarr.display();
 iarr.sel_sort();
 cout<<"\n\n After Selection Sorting\n Elememts of Integer Array\n";
 iarr.display();
 iarr.bub_sort();
 cout<<"\n\n After Bubble Sorting\n Elememts of Integer Array\n";
 iarr.display();
 iarr.inst_sort();
 cout<<"\n\n After Insertion Sorting\n Elememts of Integer Array\n";
 iarr.display();

 sorting<double> darr;
 
 cout<<"\n\n Enter Elements of Double Array\n";
 darr.get_item();
 cout<<"\n\n Elements of Double Array\n";
 darr.display();
 darr.sel_sort();
 cout<<"\n\n After Selection Sorting\n Elememts of Double Array\n";
 darr.display();
 darr.bub_sort();
 cout<<"\n\n After Bubble Sorting\n Elememts of Double Array\n";
 darr.display();
 darr.inst_sort();
 cout<<"\n\n After Insertion Sorting\n Elememts of Double Array\n";
 darr.display();

 system("pause");
}

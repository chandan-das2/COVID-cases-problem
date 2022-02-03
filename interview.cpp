#include <bits/stdc++.h>

using namespace std;


int main ()
{
  int N;			// N denotes the number of districts.
  int y;			// y denotes the number of cases.
  char x;          //  x denotes the name of the districts.
  multimap<int, string, greater<int> >mymap;
  for (int i = 0; i < N; i++)
    {
      cout << "Enter the name of the district: ";
      cin >> x;
      cout << "\nEnter the number of cases: ";
      cin >> y;
       mymap.insert(make_pair(y, x ));
    }
    multimap<int, string>::iterator it;
    for(it = mymap.begin(); it != mymap.end(); it++){
        cout<<<< (*it).second;<<endl;
    }


  return 0;
}

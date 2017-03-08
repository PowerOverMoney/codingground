#include <iostream>

using namespace std;

int main()

{
int x;
int c;
int a;
int y;
int g;
int o;
int m;

y=0;
g=0;
o=0;
m=0;

   cout << "Cik ir 4+4?" << endl;
   cout << "1. 6" << endl;
   cout << "2. 8" << endl;
   cout << "3. 7" << endl;
   cout << "(atbildi ar cipariem 1-3)" << endl;
   cin >> x;
   if (x==2){ 
    cout << "Pareizi!" << endl;
   y=y+1;
   o=o+20;
    
   }else{
        cout << "Nepareizi" << endl;
        g=g+1;
        m=m+20;
        
   }
  cout << "Cik ir 2+2?" << endl;
   cout << "1. 4" << endl;
   cout << "2. 9" << endl;
   cout << "3. 6" << endl;
   cout << "(atbildi ar cipariem 1-3)" << endl;
   cin >> x;
   if (x==1){ 
    cout << "Pareizi!" << endl;
    y=y+1;
    o=o+20;
   }else{
        cout << "Nepareizi" << endl;
        g=g+1;
        m=m+20;
   }
     cout << "Cik ir 5+2?" << endl;
   cout << "1. 4" << endl;
   cout << "2. 9" << endl;
   cout << "3. 7" << endl;
   cout << "(atbildi ar cipariem 1-3)" << endl;
   cin >> x;
   if (x==3){ 
    cout << "Pareizi!" << endl;
    y=y+1;
    o=o+20;
    
   }else{
        cout << "Nepareizi" << endl;
        g=g+1;
        m=m+20;
   }
     cout << "Cik ir 4+5?" << endl;
   cout << "1. 4" << endl;
   cout << "2. 9" << endl;
   cout << "3. 6" << endl;
   cout << "(atbildi ar cipariem 1-3)" << endl;
   cin >> x;
   if (x==2){ 
    cout << "Pareizi!" << endl;
    y=y+1;
    o=o+20;
   }else{
        cout << "Nepareizi" << endl;
        g=g+1;
        m=m+20;
   }
     cout << "Cik ir 7+9?" << endl;
   cout << "1. 6" << endl;
   cout << "2. 60" << endl;
   cout << "3. 16" << endl;
   cout << "(atbildi ar cipariem 1-3)" << endl;
   cin >> x;
   if (x==3){ 
    cout << "Pareizi!" << endl;
    y=y+1;
    o=o+20;
   }else{
        cout << "Nepareizi" << endl;
        g=g+1;
        m=m+20;
   }
   
  cout << "tev ir " << y << " Pareizās atbildes un " << g << " nepareizas!" << endl;
  
  cout << "Tev ir " << o << "% Pareizas un " << m << "% Nepareizas atbildes!" << endl;
   
   
   return 0;
}

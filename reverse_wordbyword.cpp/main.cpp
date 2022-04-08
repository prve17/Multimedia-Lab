#include<bits/stdc++.h>
using namespace std;

// driver code
int main()
{

    fstream file;
    string word, filename;

    filename = "file.txt";


    file.open(filename.c_str());

    while (file >> word)
    {
          for(int i=word.length();i>=0;i--)
          cout << word[i];
        cout<<endl;
      
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

// driver code
int main()
{

    fstream file;
    string word, filename,a="";

    filename = "file.txt";


    file.open(filename.c_str());

    while (file >> word)
    {
          for(int i=word.length();i>=0;i--)
          {
            a=a+word[i];
          }
            for(int j=0;j<a.length();j++)
                cout<<a[j]<<"\n";
    }

    return 0;
}
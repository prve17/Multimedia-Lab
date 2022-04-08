#include<bits/stdc++.h>
using namespace std;

// driver code
int main()
{

    fstream file;
    string word, filename,a="",line="";

    filename = "file.txt";


    file.open(filename.c_str());

    while (file >> word)
    {
          a="";
          for(int i=0;i<word.length();i++)
          {
            a=a+word[i];
          }
          line=line+a;
    for(int j=line.length()-1;j>=0;j--)
        cout<<line[j]<<"\n";

    return 0;
}
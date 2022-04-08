#include<bits/stdc++.h>
using namespace std;

int main()
    {

        fstream file;
        string word, filename;
// filename of the file
filename = "file.txt";

// opening file
file.open(filename.c_str());

// extracting words from the file
int c=1;
while (file >> word)
{
 if(c==2)
 {
     cout<<word<<endl;
     c=0;
 }
 else
    {
    cout<<word;
 }
 c++;
//cout << word << endl;
}
return 0;
}
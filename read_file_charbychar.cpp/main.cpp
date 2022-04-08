/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// C++ implementation to read
// file word by word
#include<bits/stdc++.h>
#include<stdio.h>
#include<iostream>
using namespace std;

// driver code
int main()
{
    // filestream variable file
    fstream file;
    string word, t, q, filename;
    // filename of the file
    filename = "file.txt";


    // opening file
    file.open(filename.c_str());

    // extracting words from the file
    while (file >> word)
    {
        // displaying content
        for(int i=0;i<word.length();i++)
        {
            cout<<word[i]<<"\n";
        }
    }

    return 0;
}

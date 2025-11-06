//display sixe in byytes of basic datatypes using sizeof operator

#include <iostream>
using namespace std;

int main()
{
    int i;
    char ch;
    float f;
    long l;
    double d;

    cout<<"Size of int is: "<<sizeof(i)<<endl;
    cout<<"char is: "<<sizeof(ch);
    cout<<"\n float is: "<<sizeof(f);
    cout<<"Size of long is: "<<sizeof(l)<<endl;
    cout<<"Size of double is: "<<sizeof(d)<<endl;
}
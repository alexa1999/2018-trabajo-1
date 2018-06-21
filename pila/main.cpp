#include <iostream>
#include <vector>
#include<stdio.h>

#include <stdexcept>
#include<map>
using namespace std;


template < class T> class Stack ;
template < class T>
Stack <T> operator +( const Stack <T> &s1 , const Stack <T> &s2)
{
    Stack <T> result = s1;
    for ( unsigned i = 0; i < s1. items . size (); ++i) {
        result . items . push_back (s2. items [i]);
    }
    return result ;
}



template < class T>
Stack <T> operator -( const Stack <T> &s1 , const Stack <T> &s2)
{
    Stack <T> result;
    bool t;
    for ( unsigned i = 0; i < s1.items.size (); ++i) {
        cout<<s1.items[i];
        t=false;
        for ( unsigned j = 0; j < s2.items.size (); ++j){

            if(s1.items[i]==s2.items[j]){
                t=true;
            }
        }
    T v = s1.items[i];
    //s1.items.pop_back();

    if(t==false)
        result.items.push_back(v);
    ////
    }
    return result;
}

template < class T>
class Stack {
    friend Stack <T> operator +<>( const Stack <T> &s1 , const Stack <T>&
    s2);
    friend Stack <T> operator -<>( const Stack <T> &s1 , const Stack <T>&
    s2);
    vector <T> items ;
public :
    bool empty () const { return items . empty () ;}
    void push ( const T & item ) { items . push_back ( item );}
    void print(){

        for ( unsigned j = 0; j < items.size (); ++j){
            cout<<items[j];
            cout<<"f";
        }
    }
    T pop () {
        T last = items . back ();
        items . pop_back ();
        return last ;
    }
};


template <class T>


ostream& operator << (ostream &o , const Stack <T>&s)
{
    for(unsigned x=0;x<s.items.size();x++)
    {
        o <<s.items[x]<<" ";
    }
    return o;
}
class Graph
{
    protected :
        map <int , vector <int > > outgoing ;

    public :
        Graph ( const vector <int > & startPoints , const vector <int > & endPoints );
        int numOutgoing ( const int nodeID ) const ;
        const vector <int > & adjacent ( const int nodeID ) const ;
};

Graph :: Graph ( const vector <int > & startPoints , const vector <int > & endPoints )
{
    if( startPoints . size () != endPoints . size ())
        {
            throw invalid_argument (" Start / end point lists differ in length ");
        }
    for ( unsigned i = 0; i < startPoints . size (); i++ )
        {
            int start = startPoints [i], end = endPoints [i];
            outgoing [ start ].push_back ( end );
            outgoing [ end ];
        }
}

int Graph :: numOutgoing ( const int nodeID ) const
{
    return adjacent ( nodeID ). size ();
}
const vector <int > & Graph :: adjacent ( const int nodeID ) const
{
    map <int , vector <int > >:: const_iterator i = outgoing . find ( nodeID );
    if(i == outgoing . end ())
    {
        throw invalid_argument (" Invalid node ID");
    }
    return i-> second ;
}

int main()
{
    Stack <int > a, b ;
    a. push (1) ;
    a. push (2) ;
    a. push (3) ;
    b. push (2) ;
    b. push (1) ;
    //cout<<a.p()<<endl;
    //cout<<b.pop()<<endl;
    //Stack <int > c = a + b;
    //cout<<c.pop()<<endl;

    Stack <int > d = a - b;
    a.print();
    //cout<<d;
    cout<<d.pop();


    //cout<<d.pop()<<endl;
}

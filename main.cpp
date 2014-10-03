#include <curses.h>
#include <stdio.h>
using namespace std;
int main()
{
    size_t x,y;
    char smb;
    cout << "Enter length of rectangle"<<endl;
    cin>>x<<endl;
    cout << "Enter width of rectangle"<<endl;
    cin>>y<<endl;
    cout <<"Enter symbol to draw"<<endl;
    cin >>sym;
    initscr();
    
    for ( size_t i=0;i<y;i++)
       mvaddch(i,0,sym);
    for ( size_t i=0;i<y;i++)
       mvaddch(i,x,sym);
   for ( size_t i=0;i<x;i++)
       mvaddch(0,x,sym);
    for ( size_t i=0;i<x;i++)
       mvaddch(y,x,sym);
    delay_output(1000);
    refresh();
    return 0;
}

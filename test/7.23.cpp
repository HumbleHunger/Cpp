/*************************************************************************
	> File Name: 7.23.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月10日 星期六 15时32分52秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;
class screen;
class win_mgr {
public:
    typedef string::size_type pos;

    win_mgr()=default;
    void clear(int i);
    void print(pos i);
    win_mgr &add(pos r,pos c,char ch);
private:
    vector<screen> screens;
};
class screen {
    friend void win_mgr::clear(int i);
public:
    typedef string::size_type pos;
    
    screen()=default;
    screen(pos ht,pos wd):height(ht),width(wd){}
    screen(pos ht,pos wd,char c):height(ht),width(wd),contents(ht*wd,c){}

    char get() const {return contents[cursor];}
    char get(pos r,pos c) const {return contents[r*width+c];}
    
    screen &set(char);
    screen &set(pos,pos,char);
    
    screen &diplay(ostream &os);
    const screen &diplay(ostream &os) const;
    
    inline screen &move(pos r,pos c);
private:
    pos cursor=0;
    pos height=0,width=0;
    string contents;
    
    void do_display(ostream &os) const{os << contents;}
};
/*class win_mgr {
public:
    win_mgr()=default;
    void clear(int i){
        screen &s=screens[i];
        s.contents=string(s.height*s.width,' ');
    }
private:
    vector<screen> screens{screen(24,80,'A')};
}*/
inline void win_mgr::clear(int i){
    screen &s=screens[i];
    s.contents=string(s.height*s.width,' ');
}
inline screen &screen::set(char ch)
{
    contents[cursor]=ch;
    return *this;
}
inline screen &screen::set(pos r,pos c,char ch)
{
    contents[r*width+c]=ch;
    return *this;
}
inline screen &screen::diplay(ostream &os)
{
    do_display(os);
    return *this;
}
inline const screen &screen::diplay(ostream &os) const
{
    do_display(os);
    return *this;
}
inline screen &screen::move(pos r,pos c){
    pos row=r*width;
    cursor=row+c;
    return *this;
}
inline win_mgr &win_mgr::add(pos r,pos c,char ch)
{
    screens.push_back(screen(r,c,ch));
    return *this;
}
inline void win_mgr::print(pos i)
{
    screens[i].diplay(cout);
    cout << endl;
}
int main()
{
    screen my_screen(5,5,'X');
    my_screen.move(4,0).set('#').diplay(cout);
    cout << "\n";
    my_screen.set(' ').set(3,0,' ');
    my_screen.set(2,2,'W');
    my_screen.diplay(cout);
    cout << "\n";

    win_mgr my_win;
    my_win.add(5,5,'A');
    my_win.print(0);
    return 0;
}

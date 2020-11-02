/*************************************************************************
	> File Name: 13.34.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年11月02日 星期一 19时36分38秒
 ************************************************************************/

#include<iostream>
#include<set>
#include<string>
using namespace std;
class Message;
class Folder {
public:
    Folder(){}
    void addMsg(Message* m){
        messages.insert(m);
    }
    void remMsg(Message* m){
        messages.erase(m);
    }
private:
    set<Message*> messages;
};
class Message {
public:
    friend class Folder;
    Message(const string &s=""):contents(s){}
    Message(const Message &m):contents(m.contents),folders(m.folders){
        add_to_Folder();
    }
    Message &operator=(const Message& m){
        remove_from_Folder();
        contents=m.contents;
        folders=m.folders;
        add_to_Folder();
        return *this;
    }
    ~Message(){
        remove_from_Folder();
    }
    void save(Folder &f){
        folders.insert(&f);
        f.addMsg(this);
    }
    void add_Folder(Folder* f){
        f->addMsg(this);
        folders.insert(f);
    }
    void rem_Folder(Folder* f){
        f->remMsg(this);
        folders.erase(f);
    }
private:
    string contents;
    set<Folder*> folders;
    void add_to_Folder(){
        for(auto &f : folders){
            f->addMsg(this);
        }
    }
    void remove_from_Folder(){
        for(auto &f : folders){
            f->remMsg(this);
        }
    }
};
/*class Folder {
public:
    void addMsg(const Message& m){
        messages.insert(&m);
    }
    void remMsg(const Message& m){
        messages.erase(&m);
    }
private:
    set<Message*> messages;
};*/

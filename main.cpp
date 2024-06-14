#include <iostream>

struct Todolist {
    int id = 0;
    std::string title;
};

Todolist todolist;

int main() {
    todolist.id = 12;
    todolist.title = "pauline";
    std::cout<<"title:"<<todolist.title<<std::endl<<"id:"<<todolist.id;
    return 0;
}


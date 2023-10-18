
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <filesystem>

#include <taglib/taglib.h>
#include <taglib/fileref.h>


namespace fs = std::filesystem;
using namespace std;

vector<string> contents;


void file_handl(const fs::path& dir) {

    if(!fs::exists(dir) || !fs::is_directory(dir)){
        cout << "Error Opening the Directory !!!!" << endl;
        return;
    }
    else{

        for (const auto& entry : fs::directory_iterator(dir)) {

            contents.push_back(entry.path().string());
        }
    }
}



void print_list(const vector<string>& list) {
    for (const auto& el : list) {
        fs::path filePath(el);
        cout << filePath.filename() << endl;
        //cout << filePath << endl;
    }
}



int main() {

    fs::path dir("/home/joy/Desktop/My_Muse/My_Muse/Relax");

    file_handl(dir);
    print_list(contents);

    cout << "--------------------------" << endl;


    return 0;
}







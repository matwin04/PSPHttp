#include <iostream>
#include <filesystem>
using namespace std;
using namespace filesystem;

void createMediaFolder(){
    cout << "Creating media folder\n";
    std::filesystem::create_directory("./media");
    std::filesystem::create_directory("./data");
    cout << "DONE\n";
}
int main(){
    cout << "Hello World" << endl;
    cout << "PSP HTTP Server\n";
    cout << "Please Select an option\n";
    int option;
    cin >> option;

    switch(option){
        case 1:
            cout << "Option 1 has been selected by the user\n";
            break;
        case 2:
            createMediaFolder();
            break;
        default:
            cout << "Nothing has been selected yer\n";

    }
}
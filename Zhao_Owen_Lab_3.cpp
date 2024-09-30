//Owen Zhao
//Lab 3
//Sep 30, 2024

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {

    //I would set the width as 1 extra the length of the text again to get the # at the side and then using another width after the initial text to create the # on the other side. This technique was used for each row.
    cout << setw(84) << setfill('#') << " " << endl;
    cout << setw(82) << setfill('#') << "                                                                                 " << setw(2) << " " << endl;
    cout << setw(82) << setfill('#') << "  Ways to access the Task Manager on your Windows computer:                      " << setw(2) << " " << endl;
    cout << setw(82) << setfill('#') << "                                                                                 " << setw(2) << " " << endl;
    cout << setw(82) << setfill('#') << "      Press the key combination Ctrl + Shift + Escape                            " << setw(2) << " " << endl;
    cout << setw(82) << setfill('#') << "                                                                                 " << setw(2) << " " << endl;
    cout << setw(82) << setfill('#') << "      Press the key combination Ctrl + Alt + Delete and select 'Task Manager'    " << setw(2) << " " << endl;
    cout << setw(82) << setfill('#') << "                                                                                 " << setw(2) << " " << endl;
    cout << setw(82) << setfill('#') << "      Type 'Task Manager' in the Windows Start menu search                       " << setw(2) << " " << endl;
    cout << setw(82) << setfill('#') << "                                                                                 " << setw(2) << " " << endl;
    cout << setw(84) << setfill('#') << " " << endl;
    //I would set 1 extra the amount of spaces that the text took up as the width to get the first line of hashtags which is the outline of the table on the top and bottom
    
return 0;
}

/*
###################################################################################
#                                                                                 #
#  Ways to access the Task Manager on your Windows computer:                      #
#                                                                                 #
#      Press the key combination Ctrl + Shift + Escape                            #
#                                                                                 #
#      Press the key combination Ctrl + Alt + Delete and select 'Task Manager'    #
#                                                                                 #
#      Type 'Task Manager' in the Windows Start menu search                       #
#                                                                                 #
###################################################################################*/
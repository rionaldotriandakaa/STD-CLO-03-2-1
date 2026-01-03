#include <iostream>
#include "stack.h"
using namespace std;

int main() {
    Stack S_Aksi, S_Redo;

    create_stack_103012430001(S_Aksi);
    create_stack_103012430001(S_Redo);

    manageAction_103012430001(S_Aksi, S_Redo, "ATTACK");
    manageAction_103012430001(S_Aksi, S_Redo, "ATTACK");
    manageAction_103012430001(S_Aksi, S_Redo, "DEFENSE");
    manageAction_103012430001(S_Aksi, S_Redo, "UNDO");
    manageAction_103012430001(S_Aksi, S_Redo, "REDO");

    int total = totalDamage_103012430001(S_Aksi);
    cout << "Total Damage: " << total << endl;

    return 0;
}

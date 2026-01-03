#include "stack.h"

void create_stack_103012430001(Stack &S) {
    S.top = -1;
}

bool isEmpty_103012430001(Stack S) {
    return S.top == -1;
}

bool isFull_103012430001(Stack S) {
    return S.top == N_STACK - 1;
}

void push_103012430001(Stack &S, infotype x) {
    if (!isFull_103012430001(S)) {
        S.top++;
        S.info[S.top] = x;
    }
}

infotype pop_103012430001(Stack &S) {
    infotype x = "";
    if (!isEmpty_103012430001(S)) {
        x = S.info[S.top];
        S.top--;
    }
    return x;
}

void emptyStack_103012430001(Stack &S) {
    S.top = -1;
}

void manageAction_103012430001(Stack &S_Aksi, Stack &S_Redo, infotype aksi) {
    infotype temp;

    if (aksi == "UNDO") {
        temp = pop_103012430001(S_Aksi);
        if (temp != "") {
            push_103012430001(S_Redo, temp);
        }

    } else if (aksi == "REDO") {
        temp = pop_103012430001(S_Redo);
        if (temp != "") {
            push_103012430001(S_Aksi, temp);
        }

    } else {
        push_103012430001(S_Aksi, aksi);
        emptyStack_103012430001(S_Redo);
    }
}

int totalDamage_103012430001(Stack &S) {
    int damage = 0;
    infotype aksi;

    while (!isEmpty_103012430001(S)) {
        aksi = pop_103012430001(S);

        if (aksi == "ATTACK") {
            damage += 30;
        } else if (aksi == "DEFENSE") {
            damage += 5;
        }
    }
    return damage;
}

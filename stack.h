#ifndef STACK_H
#define STACK_H

#include <string>

const int N_STACK = 2025;

typedef std::string infotype;

typedef struct {
    infotype info[N_STACK];
    int top;
} Stack;

void create_stack_103012430001(Stack &S);
bool isEmpty_103012430001(Stack S);
bool isFull_103012430001(Stack S);
void push_103012430001(Stack &S, infotype x);
infotype pop_103012430001(Stack &S);
void emptyStack_103012430001(Stack &S);

void manageAction_103012430001(Stack &S_Aksi, Stack &S_Redo, infotype aksi);
int totalDamage_103012430001(Stack &S);

#endif

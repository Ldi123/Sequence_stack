#include<iostream>

using namespace std;

#define MAXSIZE 10

typedef int Elemtype;

typedef struct

{

Elemtype elem[MAXSIZE];

int top;

}Seqstack;

void Initstack(Seqstack &s);

void Clear(Seqstack &s);

bool Isempty(Seqstack s);

bool Isfull(Seqstack s);

void Push(Seqstack &s, Elemtype e);

void Pop(Seqstack &s, Elemtype &e);

void Gettop(Seqstack s, Elemtype &e);

void Input(Seqstack &s);

void Output(Seqstack s);

void Interface();

int main()

{

Interface();

Seqstack s;

int n;

while (1)

{

cout << "ÇëÊäÈë²Ù×÷ÐòºÅ:";

cin >> n;

switch (n)

{

case 1:

{

Initstack(s);

break;

}

case 2:

{

Clear(s);

break;

}

case 3:

{

if (Isempty(s))

{

cout << "Ë³ÐòÕ»Îª¿Õ!" << endl;

}

else

{

cout << "Ë³ÐòÕ»²»Îª¿Õ!" << endl;

}

break;

}

case 4:

{

if (Isfull(s))

{

cout << "Ë³ÐòÕ»ÒÑÂú!" << endl;

}

else

{

cout << "Ë³ÐòÕ»Î´Âú!" << endl;

}

break;

}

case 5:

{

Elemtype e;

cout << "ÇëÊäÈëÈëÕ»ÔªËØ:";

cin >> e;

Push(s, e);

break;

}

case 6:

{

Elemtype e;

Pop(s, e);

cout << "ÔªËØ" << e << "ÒÑ³öÕ»!" << endl;

break;

}

case 7:

{

Elemtype e;

Gettop(s, e);

cout << "Õ»¶¥ÔªËØÎª:" << e << endl;

break;

}

case 8:

{

cout << "ÇëÒÀ´ÎÊäÈëÊý¾Ý£¬²¢ÒÔ-1×÷Îª½áÊø±ê¼Ç:" << endl;

Input(s);

break;

}

case 9:

{

cout << "Ë³ÐòÕ»ÖÐµÄÔªËØ:" << endl;

Output(s);

break;

}

case 10:

{

Interface();

break;

}

case 0:

{

exit(0);

break;

}

default:

{

cout << "ÊäÈëµÄ²Ù×÷ÐòºÅ²»ÕýÈ·£¡ÇëºË¶Ô..." << endl;

}

}

}

return 0;

}

void Initstack(Seqstack &s)

{

s.top = -1;

}

void Clear(Seqstack &s)

{

s.top = -1;

}

bool Isempty(Seqstack s)

{

if (s.top == -1)

{

return true;

}

else

{

return false;

}

}

bool Isfull(Seqstack s)

{

if (s.top == MAXSIZE - 1)

{

return true;

}

else

{

return false;

}

}

void Push(Seqstack &s, Elemtype e)

{

if (Isfull(s))

{

cout << "Ë³ÐòÕ»ÒÑÂú!" << endl;

}

else

{

s.top++;

s.elem[s.top] = e;

}

}

void Pop(Seqstack &s, Elemtype &e)

{

if (Isempty(s))

{

cout << "Ë³ÐòÕ»Îª¿Õ!" << endl;

}

else

{

e = s.elem[s.top];

s.top--;

}

}

void Gettop(Seqstack s, Elemtype &e)

{

if (Isempty(s))

{

cout << "Ë³ÐòÕ»Îª¿Õ!" << endl;

}

else

{

e = s.elem[s.top];

}

}

void Input(Seqstack &s)

{

int e;

while (1)

{

cin >> e;

if (e == -1)

{

break;

}

Push(s, e);

}

}

void Output(Seqstack s)

{

for (int i = s.top; i >= 0; i--)

{

cout << s.elem[i] << " ";

}

cout << endl;

}

void Interface()

{

cout << "***************»¶Ó­Ê¹ÓÃË³ÐòÕ»ÏµÍ³***************" << endl;

cout << "1:³õÊ¼»¯Ë³ÐòÕ» 2:Çå¿ÕË³ÐòÕ»" << endl;

cout << "3:ÅÐ¶ÏË³ÐòÕ»ÊÇ·ñÎª¿Õ 4:ÅÐ¶ÏË³ÐòÕ»ÊÇ·ñÒÑÂú" << endl;

cout << "5:ÈëÕ» 6:³öÕ»" << endl;

cout << "7:»ñÈ¡Õ»¶¥ÔªËØ 8:ÊäÈëË³ÐòÕ»" << endl;

cout << "9:Êä³öË³ÐòÕ» 10:²Ëµ¥" << endl;

cout << "0:ÍË³ö" << endl;

cout << "*************************************************" << endl;

cout << "ÊäÈë0-10Ö®¼äµÄÊý:" << endl;

}




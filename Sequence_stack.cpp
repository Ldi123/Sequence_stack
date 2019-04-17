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

cout << "������������:";

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

cout << "˳��ջΪ��!" << endl;

}

else

{

cout << "˳��ջ��Ϊ��!" << endl;

}

break;

}

case 4:

{

if (Isfull(s))

{

cout << "˳��ջ����!" << endl;

}

else

{

cout << "˳��ջδ��!" << endl;

}

break;

}

case 5:

{

Elemtype e;

cout << "��������ջԪ��:";

cin >> e;

Push(s, e);

break;

}

case 6:

{

Elemtype e;

Pop(s, e);

cout << "Ԫ��" << e << "�ѳ�ջ!" << endl;

break;

}

case 7:

{

Elemtype e;

Gettop(s, e);

cout << "ջ��Ԫ��Ϊ:" << e << endl;

break;

}

case 8:

{

cout << "�������������ݣ�����-1��Ϊ�������:" << endl;

Input(s);

break;

}

case 9:

{

cout << "˳��ջ�е�Ԫ��:" << endl;

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

cout << "����Ĳ�����Ų���ȷ����˶�..." << endl;

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

cout << "˳��ջ����!" << endl;

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

cout << "˳��ջΪ��!" << endl;

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

cout << "˳��ջΪ��!" << endl;

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

cout << "***************��ӭʹ��˳��ջϵͳ***************" << endl;

cout << "1:��ʼ��˳��ջ 2:���˳��ջ" << endl;

cout << "3:�ж�˳��ջ�Ƿ�Ϊ�� 4:�ж�˳��ջ�Ƿ�����" << endl;

cout << "5:��ջ 6:��ջ" << endl;

cout << "7:��ȡջ��Ԫ�� 8:����˳��ջ" << endl;

cout << "9:���˳��ջ 10:�˵�" << endl;

cout << "0:�˳�" << endl;

cout << "*************************************************" << endl;

cout << "����0-10֮�����:" << endl;

}




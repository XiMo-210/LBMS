#include "menu.h"

#include <iostream>
using namespace std;

void Menu::Start() {
    cout << "----------------------------------------------------------------"
         << endl
         << "��ӭʹ��ͼ����鼮����ϵͳ" << endl
         << "1: ��¼" << endl
         << "2: ע��" << endl
         << "0: �˳�" << endl
         << "> ";
}

void Menu::Main() {
    cout << "----------------------------------------------------------------"
         << endl
         << "�������Ӧ����ǰ�ı�Ž��в���" << endl
         << "1: �����鼮" << endl
         << "2: ��ѯ�鼮" << endl
         << "3: �޸��鼮" << endl
         << "4: ɾ���鼮" << endl
         << "5: ���Ĺ���" << endl
         << "0: �˳���¼" << endl
         << "> ";
}

void Menu::Find() {
    cout << "----------------------------------------------------------------"
         << endl
         << "�������Ӧ����ǰ�ı�Ž��в���" << endl
         << "1: �����鼮��Ž��в�ѯ" << endl
         << "2: ����ISBN�Ž��в�ѯ" << endl
         << "3: �鿴�����鼮" << endl
         << "0: �����ϼ��˵�" << endl
         << "> ";
}

void Menu::Update() {
    cout << "----------------------------------------------------------------"
         << endl
         << "�������Ӧ����ǰ�ı�Ž��в���" << endl
         << "1: �����鼮��Ž����޸�" << endl
         << "2: ����ISBN�Ž����޸�" << endl
         << "0: �����ϼ��˵�" << endl
         << "> ";
}

void Menu::Remove() {
    cout << "----------------------------------------------------------------"
         << endl
         << "�������Ӧ����ǰ�ı�Ž��в���" << endl
         << "1: �����鼮��Ž���ɾ��" << endl
         << "2: ����ISBN�Ž���ɾ��" << endl
         << "0: �����ϼ��˵�" << endl
         << "> ";
}

void Menu::LendOrReturn() {
    cout << "----------------------------------------------------------------"
         << endl
         << "�������Ӧ����ǰ�ı�Ž��в���" << endl
         << "1: ���" << endl
         << "2: �黹" << endl
         << "3: �鿴�����ѽ���鼮" << endl
         << "0: �����ϼ��˵�" << endl
         << "> ";
}
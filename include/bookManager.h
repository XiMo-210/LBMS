#ifndef _INCLUDE_BOOKMANAGER_H_
#define _INCLUDE_BOOKMANAGER_H_

#include "book.h"
#include "rbTree.h"

class BookManager {
private:
    struct IdOfBook {
        const int& operator()(const Book& b) const { return b.GetId(); }
    };
    typedef RbTree<int, Book, IdOfBook, std::less<>> RbTree;

    RbTree bookManager;

public:
    BookManager();

    ~BookManager();

    // ��ʼ���鼮����
    void Init();

    // �����鼮
    void Insert();

    // ��ǰ�鼮�Ƿ�Ϊ��
    bool Empty();

    // ��ҳ��ѯ�����鼮
    void FindByPage(int currPage, int pageSize);

    // �����鼮��Ų����鼮
    void FindByID();

    // ����ISBN�Ų����鼮
    void FindByISBN();

    // �����鼮��Ÿ����鼮��Ϣ
    void UpdateByID();

    // ����ISBN�Ÿ����鼮��Ϣ
    void UpdateByISBN();

    // �����鼮���ɾ���鼮
    void RemoveByID();

    // ����ISBN��ɾ���鼮
    void RemoveByISBN();

    // ����鼮
    void Lend();

    // �黹�鼮
    void Return();

    // �鿴�����ѽ�����鼮
    void FindAllLend();

    // ��������
    void Save();
};

#endif  // _INCLUDE_BOOKMANAGER_H_
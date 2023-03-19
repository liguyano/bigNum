//
// Created by kurum on 西暦2023年3月19日.
//

#include "Chain.h"

template<typename T>
void Chain<T>::add(T value) {
    if (head->next==NULL)
    {
        if (rear->next==NULL)
        {
            head->next=rear;
            rear->value=value;
            rear->next=NULL;
        }else
        {
            head->value=value;
            head->next=NULL;
            rear->next=NULL;
        }

    } else
    {
        node<T>* ch= new node<T>;
        ch->value=value;
        ch->next=NULL;
        rear->next=ch;
        rear=ch;
    }
}

template<typename T>
void Chain<T>::remove() {
    node<T> *tem=head;
    if (tem->next==NULL && rear->next==NULL)
    {
        free(head);
        head=new node<T>;
        rear->next=head;
        head->next=NULL;
    }
    else
    {
        while (tem->next->next!=NULL)
        {
            tem=tem->next;
        }
        free(tem->next);
        tem->next=NULL;
        rear=tem;
    }


}

template<typename T>
node<T> *Chain<T>::getHead() const {
    return head;
}

template<typename T>
node<T> *Chain<T>::getRear() const {
    return rear;
}

template<typename T>
void Chain<T>::addHead(T va) {
    if (head->next==NULL )
    {
        if (rear->next==head)
        {
            head->value=va;
            head->next=NULL;
            rear->next=NULL;
        }else
        {
            auto a=new node<T>;
            a->value=va;
            rear=head;
            a->next=rear;
            head=a;
        }

    }else
    {
        node<T>* a=new node<T>;
        a->value=va;
        a->next=head;
        head=a;
    }
}

template<typename T>
void Chain<T>::remove(int index) {
    if (head->next==NULL && rear->next==NULL)
    {
        this->remove();
    } else if (index==0)
    {
        auto b=head;
        head=head->next;
        free(b);
    }
    else
    {
        auto a=head;
        for (int i = 0; i < index-1; ++i) {
            a=a->next;
        }
        auto b=a->next;
        a->next=a->next->next;
        free(b);
    }
}


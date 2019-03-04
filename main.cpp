#include<iostream>

struct Node{
    int var;
    struct Node *next;
};


int main(int argv, char **argc) {
    auto *head=new(Node);
    auto *q=head;
    struct Node *p;
    head->next= nullptr;
    /*
     * 给节点赋值
     */

    for (int i = 0; i < 10; ++i){
        q->var=i;
        p=new(Node);
        q->next=p;
        q=q->next;
    }
    q->next= nullptr;
    auto *re_head=new(Node);
    re_head->next= nullptr;

    p=q=new(Node);

    for(auto i=head;i->next!= nullptr;i=i->next ){
        if(q==p){
            q->next=re_head;
            q->var=i->var;
            q = new(Node);
        } else {
            q->var = i->var;
            q->next = p;
            p = q;
            q = new(Node);
        }
    }
    for(auto i=p;i->next!= nullptr;i=i->next){
        printf("%d\n",i->var);
    }

    return 0;
}


#include<bits/stdc++.h>
using namespace std;

struct node{
    int age;
    string name;
    node *prev;
    node *next;
    node(string s,int x){
        age = x;
        name = s;
        prev=NULL;
        next=NULL;
    }
};

void printthelist(node *head){
    while(head!=NULL){
        cout<<head->name<<"-"<<head->age<<" ";
        head=head->next;
    }
}

int main(){
    node *father=new node("DILIP KUMAR CHAUDHARY",45);
    node *mother=new node("CHANDAN CHAUDHARY",42);
    node *myself=new node("RAJAT",20);
    node *sister=new node("RUCHI",17);
    node *brother=new node("RATAN",16);

    node *head=father;

    father->prev=NULL;
    father->next=mother;
    mother->prev=father;
    mother->next=myself;
    myself->prev=mother;
    myself->next=sister;
    sister->prev=myself;
    sister->next=brother;
    brother->next=NULL;
    brother->prev=sister;

    printthelist(head);

    return 0;
}
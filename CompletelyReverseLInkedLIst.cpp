#include<bits/stdc++.h>
using namespace std;
vector<int> v,vv;int kp;
class linked_list{
  public:
    int data;
    linked_list *next;
    linked_list(){
        this->next=NULL;
    }
    linked_list(int data){
        this->data=data;
        this->next=NULL;
    }
    linked_list *add(int data,linked_list *head){
        if(head==NULL)
           {
               auto temp=new linked_list(data);
               head=temp;
           }
       else{
           auto temp=head;
            while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new linked_list(data);
       }
        
        return head;
        
    }
    void show(linked_list *head){
        auto temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            v.push_back(temp->data);
            temp=temp->next;
            kp++;
        }
    }
    void middle(linked_list *head){
        auto sp=head,fp=head;
        while(fp!=NULL and fp->next!=NULL){
            sp=sp->next;
            fp=fp->next->next;
        }
        cout<<sp->data<<endl;
    }
    void delete_middle(linked_list *head){
        auto sp=head,fp=head,pre=head;
        while(fp!=NULL and fp->next!=NULL){
            pre=sp;
            sp=sp->next;
            fp=fp->next->next;
        }
        pre->next=sp->next;free(sp);
        free(sp);
    }
    void recursive_print(linked_list *head){
        if(head==NULL)
          return;
        recursive_print(head->next);
        cout<<head->data<<" ";
    }
    linked_list *reverse_linked_list(linked_list *head){
        auto cur=head,next=head;linked_list *pre=NULL;
        while(cur){
            next=cur->next;
            cur->next=pre;
            pre=cur;
            cur=next;
        }
        return pre;
    }
};
int main(){
    linked_list *head=NULL;
    int n;cin>>n;int k;
    for(int i=0;i<n;i++){
        cin>>k;
        head=head->add(k,head);
    }
    // head->show(head);cout<<endl;
    // head->middle(head);head->delete_middle(head);cout<<endl;
    // head->show(head);cout<<endl;
    // head->recursive_print(head);cout<<endl;
    
   head=head->reverse_linked_list(head);
    
    head->show(head);
   
   
   
   
}

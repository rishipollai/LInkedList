#include<bits/stdc++.h>
using namespace std;
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
         if(head==NULL){
             linked_list *temp=new linked_list(data);
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
             temp=temp->next;
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
     
    void dlt(linked_list *head){
        auto sp=head,fp=head,pre=head;
         while(fp!=NULL and fp->next!=NULL){
             pre=sp;
             sp=sp->next;
             fp=fp->next->next;
         }
         pre->next=sp->next;
         free(sp);
    }
    linked_list *dlt_whole(linked_list *head){
        auto pre=head;
        head=head->next;
        while(head!=NULL){
            delete pre;
            pre=head;
            head=head->next;
        }
        return head;
    }
    void show_reverse(linked_list *head)
    {
        if(head==NULL)
            return;
        show_reverse(head->next);
        cout<<head->data<<" ";
        
    }
    void again(linked_list *head){
        stack<int> st;
        auto temp=head;
        while(head!=NULL){
            st.push(head->data);
            head=head->next;
        }
        while(!st.empty()){
            cout<<st.top()<<" ";
            st.pop();
        }
    }
    
    linked_list *reverse_linked_list(linked_list *head){
        linked_list *cur=head;linked_list *nxt=head;linked_list *pre=NULL;
        while(cur!=NULL){
            nxt=cur->next;
            cur->next=pre;
            pre=cur;
            cur=nxt;
        }
        return cur;
    }
     
};
int main(){
    linked_list *head=NULL;
    int n;cin>>n;int k;
    for(int i=0;i<n;i++){
        cin>>k;
        head=head->add(k,head);
    }
    head->show(head);
    
    
    head=head->reverse_linked_list(head);
    cout<<endl;
    head->show(head);
    
}

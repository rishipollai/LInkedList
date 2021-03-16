#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class linked_list{
       public:
         int data;
         linked_list *next;
         linked_list(){
             this->next=NULL;
         }
         linked_list(int data){
             this->next=NULL;
             this->data=data;
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
             while(temp){
                 cout<<temp->data<<" ";
                 temp=temp->next;
             }
         }
         bool IsPalidrome(linked_list *&left,linked_list *right){
             if(right==NULL)
                return true;
             bool first=IsPalidrome(left,right->next);
             if(first==false)
                return false;
             bool second=(left->data==right->data);
             left=left->next;
             return second;
         }
         
        linked_list *delete_duplicate_sorted(linked_list *head){
            auto cur=head;
            while(cur->next!=NULL){
                if(cur->data==cur->next->data){
                    auto temp=cur->next;
                    cur->next=cur->next->next;
                    free(temp);
                }
                else 
                   cur=cur->next;
            }
            return head;
        }
        linked_list *delete_duplicate_unsorted(linked_list *head){
            set<int> st;
            auto cur=head;auto pre=cur;
            while(cur!=NULL){
                if(st.count(cur->data)){
                    pre->next=cur->next;
                    delete cur;
                }
                else{
                    st.insert(cur->data);
                    pre=cur;
                }
                
                cur=pre->next;
            }
            return head;
        }
};


int main(){
    int n;cin>>n;int k;linked_list *head=NULL;
    for(int i=0;i<n;i++) {
        cin>>k;
        head=head->add(k,head);
    }
    head->show(head);cout<<endl;
    // cout<<endl;
    // cout<<head->IsPalidrome(head,head);cout<<endl;
    head=head->delete_duplicate_sorted(head);
    head->show(head);
    
    cout<<endl;
    head=head->delete_duplicate_unsorted(head);
    head->show(head);
    
    
}

//https://programmercarl.com/0203.%E7%A7%BB%E9%99%A4%E9%93%BE%E8%A1%A8%E5%85%83%E7%B4%A0.html
//https://leetcode.cn/problems/remove-linked-list-elements/
//自己写
ListNode* removeElements(ListNode* head, int val) {
        
    if(!head)return head;
    while(head != nullptr && head->val == val)//必须加上这句，访问空指针不合法
    {head = head->next;}
    ListNode* newhead = head;
    if(!newhead)return newhead;
    while(newhead->next){
        if(newhead->next->val==val){
            ListNode* tmp = newhead->next;
            newhead->next = newhead->next->next;
            delete tmp;
        }else{newhead = newhead->next;}
    }
    return head;
}
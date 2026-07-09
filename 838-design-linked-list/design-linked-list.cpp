class MyLinkedList {
private:
    struct Node {
        int val;
        Node* prev;
        Node* next;

        Node(int x) {
            val = x;
            prev = nullptr;
            next = nullptr;
        }
    };

    Node* head;
    Node* tail;
    int size;

public:
    MyLinkedList() {
        head = new Node(0); // Dummy head
        tail = new Node(0); // Dummy tail
        head->next = tail;
        tail->prev = head;
        size = 0;
    }

    int get(int index) {
        if (index < 0 || index >= size)
            return -1;

        Node* curr;

        if (index < size / 2) {
            curr = head->next;
            for (int i = 0; i < index; i++)
                curr = curr->next;
        } else {
            curr = tail->prev;
            for (int i = size - 1; i > index; i--)
                curr = curr->prev;
        }

        return curr->val;
    }

    void addAtHead(int val) {
        Node* node = new Node(val);

        node->next = head->next;
        node->prev = head;

        head->next->prev = node;
        head->next = node;

        size++;
    }

    void addAtTail(int val) {
        Node* node = new Node(val);

        node->prev = tail->prev;
        node->next = tail;

        tail->prev->next = node;
        tail->prev = node;

        size++;
    }

  void addAtIndex(int index, int val) {
    if (index < 0) index = 0;
    if (index > size) return;

    Node* prev;

    if (index < size / 2) {
        prev = head;
        for (int i = 0; i < index; i++)
            prev = prev->next;
    } else {
        prev = tail->prev;
        for (int i = size - 1; i >= index; i--)
            prev = prev->prev;
    }

    Node* node = new Node(val);

    node->next = prev->next;
    node->prev = prev;

    prev->next->prev = node;
    prev->next = node;

    size++;
}

    void deleteAtIndex(int index) {
        if (index < 0 || index >= size)
            return;

        Node* curr;

        if (index < size / 2) {
            curr = head->next;
            for (int i = 0; i < index; i++)
                curr = curr->next;
        } else {
            curr = tail->prev;
            for (int i = size - 1; i > index; i--)
                curr = curr->prev;
        }

        curr->prev->next = curr->next;
        curr->next->prev = curr->prev;

        delete curr;
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
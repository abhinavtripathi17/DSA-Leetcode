// Last updated: 8/4/2026, 7:20:34 PM
class LRUCache {
public:

    class Node{
        public:

        int key;
        int val;
        Node* next;
        Node* prev;

        Node(int key , int val){
            this->key = key;
            this->val = val;
            next = nullptr;
            prev = nullptr;
        }
    };

    Node* head = new Node(-1 , -1);
    Node* tail = new Node(-1 , -1);
    int cap;
    unordered_map<int , Node*>mpp;

    LRUCache(int capacity) {
        cap = capacity;
        head->next = tail;
        tail->prev = head;
    }
        void addNode(Node* newNode){
            Node* currAfterHead = head->next;
            head->next = newNode;
            newNode->next = currAfterHead;
            newNode->prev = head;
            currAfterHead->prev = newNode; 
        }

        void deleteNode(Node* delNode){
            Node* prevNode = delNode->prev;
            Node* nextNode = delNode->next;
            prevNode->next = nextNode;
            nextNode->prev = prevNode;
        }
    
    
    int get(int key) {
        if(mpp.find(key) == mpp.end()){
            return -1;
        }
        Node* temp = mpp[key];
        deleteNode(temp);
        addNode(temp);

        return temp->val;
    }
    
    void put(int key, int value) {
        if(mpp.find(key) != mpp.end()){
            Node* temp  = mpp[key];
            temp->val = value;
            deleteNode(temp);
            addNode(temp);

            return;
        }
        else{
            if(cap == mpp.size()){
                Node* temp = tail->prev;
                mpp.erase(temp->key);
                deleteNode(temp);
            }
            Node* temp = new Node(key , value);
            mpp[key] = temp;
            addNode(temp);
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
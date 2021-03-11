class Node
{
    private:
        int payload;
        Node* nextNode;
        
    
    public:
        Node(int payload);
        void setNextNode(Node* n);
        void setPayload(int n);
        Node* getNextNode();
        int getPayload();
};
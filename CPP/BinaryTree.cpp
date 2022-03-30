#include <iostream>

class Node
{
    private:
    Node* left;
    Node* right;
    std::string data;

    public:
    Node()
    {
        this->left = NULL;
        this->right = NULL;
        this->data = "";
    }
    Node(Node* rightSource, Node* leftSource, std::string dataSource)
    {
        this->left = leftSource;
        this->right = rightSource;
        this->data = dataSource;
    }
    
    Node* getLeftNode()
    {
        return this->left;
    }
    Node* getRightNode()
    {
        return this->right;
    }
    
    void setLeftNode(Node* source)
    {
        this->left = source;
    }
    void setRightNode(Node* source)
    {
        this->right = source;
    }
    
    std::string getData()
    {
        return this->data;
    }
    void setData(std::string source)
    {
        this->data = source;
    }
};

int main()
{
    Node* root = new Node();
    Node* left = new Node();
    Node* right = new Node();
    root->setLeftNode(left);
    root->setRightNode(right);
    root->setData("1");
    root->getLeftNode()->setData("2");
    root->getRightNode()->setData("3");
    std::cout << root->getData() << std::endl << root->getLeftNode()->getData() << std::endl << root->getRightNode()->getData() << std::endl;
    return 0;
}